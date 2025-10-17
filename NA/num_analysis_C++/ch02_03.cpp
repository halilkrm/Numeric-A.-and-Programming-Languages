//PS1='Z:\W\$ '
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){int i,j,k;
  
    double x0,x1,x2,x3,a1,a2,y, error;

    x0=1.0;
    x1=4.0;
  a1=((double) 13.0)/((double) 3.0);
   a2=((double) 4.0)/((double) 3.0);
   
   
   /*
    double x0,x1,x2,x3,a1,a2;
    x1=4;
    x0=1.0;
  a1=((double) 13.0)/((double) 3.0);
   a2=((double) 4.0)/((double) 3.0);
   */
   
  //  cout<<setw(68)<<setprecision(80)<<x1<<endl;
  //  cout<<setw(40)<<setprecision(40)<<x<<endl;

for (i=2;i<=30;i++)
{
    x2=a1*x1- a2*x0;
  x0=x1;
  x1=x2;
  cout<<"x["<<i<<"]="<<setprecision(40)<<x2<<endl;
}
y=(double) pow(4,30);
cout<<"correct result="<<setprecision(40)<<y<<endl;
error=100*abs((y-x2)/y);
cout<<setw(68)<<setprecision(80)<<"Relative Percent Error="<<error<<endl;
cout<<setw(68)<<setprecision(80)<<"Absolute Error="<<setprecision(40)<<abs(y-x2)<<endl;
return 0;
}
