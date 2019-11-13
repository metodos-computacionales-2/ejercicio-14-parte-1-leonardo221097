#include <iostream>
#include <cmath>

using namespace std;


double f (double y, double t){
    return cos(t);
}
double ecuacion_euler(double t_1, double t_f);


int main(){
  
     
 ecuacion_euler(0.0,5.0);
     
    

  return 0;
}

double ecuacion_euler(double t_1, double t_f){
  double y=1.0;
  double dt=0.1;
  
    for(t_1;t_1<t_f;dt)
    {    
    y = y+ dt*f(y,t_1);
        cout<< t_1 << " " << y << endl;
    t_1 = t_1 + dt;
    
  }
 return 0.0;
}