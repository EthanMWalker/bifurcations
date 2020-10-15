# Bifurcations

## Discrete Time Dynamical Systems

In this activity we are examining discrete time dynamical systems.
Specifically we will examine systems described by functions ![sys](https://latex.codecogs.com/gif.latex?F_{\lambda}:\mathbb{R}\to\mathbb{R}) that are dependent on some parameter ![l](https://latex.codecogs.com/gif.latex?\lambda), though the conclusions we make still hold for multi-dimensional parameter dependent systems as well.

## Orbits
Because Dynamical systems describe a time dependent system we can determine the itinerary or orbit of a certain point by considering the following sequence: ![itinerary](https://latex.codecogs.com/gif.latex?%28x%5Ei%29_%7Bi%3D0%7D%5E%5Cinfty),
where ![time dependance](https://latex.codecogs.com/gif.latex?x%5E%7Bi&plus;1%7D%20%3D%20F%28x%5Ei%29).
We call this sequence the itinerary or orbit of ![x](https://latex.codecogs.com/gif.latex?x).

To clarify notation we will also describe ![comp](https://latex.codecogs.com/gif.latex?F%5En%28x%29%3D%28F%5Ccirc%5Cdots%5Ccirc%20F%29%28x%29)
as the n<sup>th</sup> composure of ![F](https://latex.codecogs.com/gif.latex?F) with itself.

## Stability
A certain point ![x0](https://latex.codecogs.com/gif.latex?x_0) is a fixed point of ![F](https://latex.codecogs.com/gif.latex?F_{\lambda}) when we have ![stable](https://latex.codecogs.com/gif.latex?x_0&space;=&space;F_{\lambda}(x_0)).
A fixed point can either be attracting, in the sense that ![attr](https://latex.codecogs.com/gif.latex?F_{\lambda}^n(x)&space;\to&space;x_0) for any ![x](https://latex.codecogs.com/gif.latex?x) close enough to ![x0](https://latex.codecogs.com/gif.latex?x_0),
or repelling meaning that orbits do note converge to that fixed point.

## Changing Parameters
It makes sense that when we change a parameter the fixed points of the system also change, however these fixed points don't simply move around.
At certain values of ![l](https://latex.codecogs.com/gif.latex?\lambda), we will find that a single fixed point will split into two, then two into four, and so on.
This process is called a bifurcation, and the bifurcations where a single fixed point becomes two is called a period doubling bifurcation. 

Another type of bifurcation is a saddle-node bifurcation, where a fixed point comes into existance for a single value of ![l](https://latex.codecogs.com/gif.latex?\lambda), then splits into two fixed points. Another way to think of it is two fixed points collide and annihilate each other.

## The Quadratic Map
In this activity we will examine the bifurcation diagram of the quadratic map, which is the following system: ![func](https://latex.codecogs.com/gif.latex?Q_c%3A%5Cmathbb%7BC%7D%5Cto%5Cmathbb%7BC%7D), defined by ![quad](https://latex.codecogs.com/gif.latex?Q_c%28z%29%20%3D%20z%5E2%20&plus;%20c).
For each value of ![c](https://latex.codecogs.com/gif.latex?c) you can choose an initial ![x](https://latex.codecogs.com/gif.latex?x) value of 0 and iterate ![Q](https://latex.codecogs.com/gif.latex?Q_c) until the orbit is sufficiently filled.
Plotting the last 200 points of the orbit against the ![c](https://latex.codecogs.com/gif.latex?c) value for each ![c](https://latex.codecogs.com/gif.latex?c) will give a clean picture of the behavior of the attracting fixed points for ![Q](https://latex.codecogs.com/gif.latex?Q_c).
