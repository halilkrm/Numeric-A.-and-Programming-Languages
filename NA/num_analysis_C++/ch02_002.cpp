//PS1='Z:\W\$ '
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){int i,j,k;
    float x,y,z,t1,t2,t3,zz,yy;
    double x1,y1,z1,zz1,y2;y1=1.0;z1=10.0;
    x=0.00045;
     x1=0.00045;
    y=(float)(sqrt(x*x+1))-(float) 1.0;
     y1=(sqrt(x1*x1+1.0))- 1.0;
     y2=x*x/(1.0+sqrt(x*x+1.0));
  yy=(float) (x*x/(1.0+(float)sqrt(x*x+1.0)));
    // cout<<setw(40)<<setprecision(40)<<z1<<endl; 
      
   // cout<<setw(40)<<setprecision(40)<<z<<endl; 
    // cout<<setprecision(20)<<"y="<<y<<"   y1="<<y1<<"   y2="<<y2<<endl;
 cout<<"percent relative error:"<<100.0*abs((y-y1)/y1)<<endl;
  cout<<"percent relative error (modified):"<<100.0*abs((yy-y1)/y1)<<endl;
 
return 0;
}
