import numpy as np
import matplotlib.pylab as plt


m=np.loadtxt('data.dat')

x=m[:,0]
y=m[:,1]

plt.plot(x,y)
plt.savefig('euler.png')
