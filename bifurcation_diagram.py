#!/bin/python
import numpy as np
import matplotlib.pyplot as plt

if __name__ == '__main__':

    cs = np.loadtxt('cs.csv', delimiter=',')

    results = np.loadtxt('results.csv', delimiter=',')

    fig = plt.figure(figsize=(16,9))
    ax = fig.add_subplot(111)

    for i in range(200):
        ax.scatter(cs,results[:,i], color='black', marker='.', s=.1)
    
    plt.title('test1')
    ax.set_xlabel('c')
    ax.set_ylabel('attracting points')
    # plt.savefig('test1.png')
    plt.show()