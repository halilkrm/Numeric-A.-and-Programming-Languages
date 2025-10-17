//PS1='Z:\W\$ '
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){int i,j,k;
   float x,y,z,t1,t2,t3,zz;
   // y=1.0;z=10.0;t1=0;
    double x1,y1,z1,zz1;y1=1.0;z1=10.0;
    x1=0.1265344732567;
    y1=0.1265344632567;

    //x1=0.3721478693;
    //y1=0.3720230572;

    x=x1;
    y=y1;
    //x=0.37215 ;
    //y=0.37202 ;

    z=x-y;
    zz=x+y;
    z1=x1-y1;
    zz1=x1+y1;
    // cout<<setw(40)<<setprecision(40)<<z1<<endl; 
      
   // cout<<setw(40)<<setprecision(40)<<z<<endl; 
    
 cout<<"Difference percent relative error:"<<100.0*abs((z-z1)/z1)<<endl;
//cout<<setprecision(40)<<"originall value:"<<z1<<"  five digit computer:"<<z<<endl;
  cout<<"Sum percent relative error:"<<100.0*abs((zz-zz1)/zz1)<<endl;
 
return 0;
}
