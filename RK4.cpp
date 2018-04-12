#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

float funcion(float x, float y);

int main(){
  float h=0.1;
  int N=10/h;
  float x=0;
  float y=1;
  float k1=0; float k2=0; float k3=0; float k4=0;

  for(int i=0;i<=N;i++){
    k1=funcion(x,y);
    k2=funcion(x+h/2,y+(h*k1/2));
    k3=funcion(x+h/2,y+(h*k2/2));
    k4=funcion(x+h,y+(h*k3));
    y=y+(h*(k1+(2*k2)+(2*k3)+k4)/6);
    x=x+h;

    //retorna el N y el tiempo que le tomo calcular ese termino
    cout << x << " " << y << endl;
  }

  return 0;
}

float funcion(float x, float y){
  return -y;
}
