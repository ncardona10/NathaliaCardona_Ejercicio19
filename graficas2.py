import numpy as  np
import matplotlib.pyplot as plt

data = np.loadtxt("RK4_2.txt")
N=10.0/0.1
x=data[:,0]
y=data[:,1]
z=data[:,2]

yExp=np.cos(x)

error = abs(y-yExp)
plt.plot(x,y)
#plt.plot(x,np.log(error))
plt.xlabel("X")
plt.ylabel("log(Error)")
plt.title("Diferencia analitico y numerico")
plt.savefig("grafica2.png")
plt.close()
