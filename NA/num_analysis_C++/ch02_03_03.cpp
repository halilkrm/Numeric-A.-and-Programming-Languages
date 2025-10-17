//PS1='Z:\W\$ '
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){int i,j,k;
  double x,y,error,error1;
    float x1,y1,z1,y2;
    x=0.1;
    x1=x;
    z1=sin(x1);
    y=x-sin(x);
    y1=x1-z1;
    y2=(float)((pow(x1,3))/6.0)  -(float)((pow(x1,5))/120.0);
    
    
   
   error=100*abs((y-y1)/y);
   
 error1=100*abs((y-y2)/y);
   
  
 cout<<"Error="<<error<<endl;
cout<<"Error1="<<error1<<endl;
  //cout<<setw(68)<<setprecision(40)<<"Error="<<error<<endl;

return 0;
}
