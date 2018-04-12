import numpy as  np
import matplotlib.pyplot as plt

data = np.loadtxt("RK4.txt")
N=10.0/0.1
x=data[:,0]
y=np.exp(-x)
yExp=data[:,1]
error = abs(y-yExp)/y
plt.plot(x,np.log(error))
plt.xlabel("X")
plt.ylabel("log(Error)")
plt.title("Diferencia analitico y numerico")
plt.savefig("grafica1.png")
