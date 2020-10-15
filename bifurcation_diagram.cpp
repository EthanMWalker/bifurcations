#include <cmath>
#include <iostream>
#include <vector>
#include <fstream>


template<typename T>
std::vector<double> linspace(T start_in, T end_in, int num_in)
{

  std::vector<double> linspaced;

  double start = static_cast<double>(start_in);
  double end = static_cast<double>(end_in);
  double num = static_cast<double>(num_in);

  if (num == 0) { return linspaced; }
  if (num == 1) 
    {
      linspaced.push_back(start);
      return linspaced;
    }

  double delta = (end - start) / (num - 1);

  for(int i=0; i < num-1; ++i)
    {
      linspaced.push_back(start + delta * i);
    }
  linspaced.push_back(end); // I want to ensure that start and end
                            // are exactly the same as the input
  return linspaced;
}



double Q(double x, double c=4) {
    return pow(x,2) + c;
}

std::vector<double> iterate(double (*Q)(double, double), double x0, double c, int iters = 10000){
    std::vector<double> x;
    x.push_back(x0);

    for (int i=1; i<iters; i++){
        x.push_back(Q(x[i-1],c));
    }

    auto start = x.begin() + iters - 200;
    auto end = x.end();
    std::vector<double> result(200);

    std::copy(start, end, result.begin());

    return result;
}

int main() {

    double c0 = -2.;
    double cf = -1.3;
    int nums = 6000;
    std::vector<double> cs = linspace(c0, cf, nums);

    int n = cs.size();
    int iters = 1000;

    std::vector<std::vector<double>> results;

    for (int i= 0; i<n; i++){
        results.push_back(iterate(Q, 0, cs[i], iters));
    }

    std::ofstream out_results;
    std::ofstream out_cs;
    out_results.open("results.csv");
    out_cs.open("cs.csv");


    for (int i=0; i < nums; i++){

        int k = results[i].size();
        for (int j=0; j < k-1; j++){
            out_results << results[i][j] << ",";
        }
        out_results << results[i][k-1] << std::endl;
    }

    for (int i=0; i < nums-1; i++){
      out_cs << cs[i] << ",";
    }

    out_cs << cs[nums-1] << std::endl;

    out_cs.close();
    out_results.close();

    return 0;

}

