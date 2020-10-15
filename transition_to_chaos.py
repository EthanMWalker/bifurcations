import numpy as np
import matplotlib.pyplot as plt
from numba import jit

def gen_Q(c):
    def Q(x):
        return x**2 + c
    return Q

@jit
def iterate(Q, x0):
    x = np.zeros(10000)
    x[0] = x0
    for i in range(1,10000):
        x[i] = Q(x[i-1])
    return x[-2000:]

@jit
def get_diagram():
    c1 = np.linspace(-.75,.25,300)
    c2 = np.linspace(-1.25,-.75,300)
    c3 = np.linspace(-1.4,-1.25,5000)
    c4 = np.linspace(-1.75,-1.4,5000)
    c5 = np.linspace(-1.78,-1.76,5000)
    c6 = np.linspace(-2,-1.78,5000)
    cs = np.hstack([c6,c5,c4,c3,c2,c1])
    
    results = []
    for c in cs:
        Q = gen_Q(c)
        results.append(iterate(Q, 0))
    results = np.array(results)

    for i in range(200):
        plt.scatter(cs,results[:,i], color='black', s=.01)
    plt.title("Bifurcation Diagram of Q(x) = x^2 + c")
    plt.xlabel("c")
    plt.ylabel('attracting points')
    # plt.savefig("bifurcation_diagram_of_quadratic_function.png")
    plt.show()
    # return results