#include <iostream>
#include<cmath>
#include<fstream>
#include<math.h>
using namespace std;

float h(float x)
{
    return 1/pow((1-x),21/4);
}
float g(float x)
{
    return 1/pow((1-x),13/4);
}
int main()
{

    float p=0,q=0.9,n=1,dx,x,s=0,f,e,y,s1;
    bool t;
    do
    {
        dx=q/n;
        for(int i=1;i<n;i=i+2)
        {
            x=p+i*dx;
            s=s+h(x);
        }
        for(int i=2;i<(n-1);i=i+2)
        {
            y=p+i*dx;
            s1=s1+h(y);
        }
        f =(dx/3)*(h(p)+h(q)+4*s+2*s1);
        e=abs(0.0004649*f/pow(n,4));
        n=n+1;
        s=0;
        s1=0;
    }while(e>=0.001);

    cout<<"volume required :  "<< f<< endl;
     cout<<"number of subdomains for simpson_1/3:  "<< n-1<< endl;
     e=0;
     f=0;
     s=0;
     s1=0;
     n=1;

     do
    {
        dx=q/n;
        for(int i=1;i<n;i++)
        {
            x=p+i*dx;
            s=s+h(x);
        }
        f =(dx/2)*(g(p)+g(q)+2*s);
        e=abs(0.1898437*f/pow(n,2));
        n=n+1;
        s=0;
    }while(e>=0.001);

    cout<<"Volume required is :  "<< f<< endl;
     cout<<"number of subdomains for trapezoidal:  "<< n-1<< endl;
     e=0;
     f=0;
     s=0;
     s1=0;
     n=1;

      do
    {
       dx=q/n;
        for(int i=1;i<n;i=i+1)
        {
            if(i%3==0)
            {
                x=p+i*dx;
                s=s+h(x);
            }
            else
            {
                y=p+i*dx;
                s1=s1+h(y);
            }
        }
        f =(3*dx/8)*(h(p)+h(q)+2*s+3*s1);
        e=(0.0032805*f/pow(n,4));
        n=n+1;
        s=0;
        s1=0;
    }while(e>=0.001);
    cout<<"Volume required is :  "<< f<< endl;
     cout<<"number of subdomains for simpson_3/8:  "<< n-1<< endl;
     return 0;
}

