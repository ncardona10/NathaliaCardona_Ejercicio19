#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

float funcionZ(float x, float y, float z);
float funcionY(float x, float y, float z);
//se crea la clase main
int main(){
  float h=0.1;
  int N=10/h;
  float x=0;
  float y=1;
  float z=0;
  float y1;
  float z1;
  float k =0;float k1=0; float k2=0; float k3=0; float k4=0;
  for(int i=0;i<=N;i++){
    z1=z;
    k=funcionZ(x,y,z);
    z=z-h*k;
    k1=funcionY(x,y,z);
    k2=funcionY(x+h/2,y+(h/2)*k1,z);
    k3=funcionY(x+h/2,y+(h/2)*k2,z);
    k4=funcionY(x+h,y+h*k3,z);
    y=y+(h*(k1+(2*k2)+(2*k3)+k4)/6);
    x=x+h;

    cout << x << " " << y << " " << z << endl;
  }

  return 0;
}

float funcionZ(float x, float y, float z){
  return -y;
}
float funcionY(float x, float y,float z){
  return z;
}
