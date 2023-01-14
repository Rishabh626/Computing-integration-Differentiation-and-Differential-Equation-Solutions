#include<iostream>
#include<string>
#include<math.h>
using namespace std;

double f(double x){
    double q = pow(x,0.1)*(1.2-x)*(1-exp(20*(x-1)));
    return q;
}

int main(){
    float h = 0.05;
    float iv = f(1)+f(0); //f(x0)+f(xn)
    cout<<"True Error is :"<<endl;
    for(int j=0;j<30;j++){
        for(int i=1;i<j;i++){
            double k = 0 + i*h; 
            iv = iv + 2*f(k);
        }
        iv = (iv*h)/2;
        cout<<"Value is : "<<iv<<endl;
        cout<<"Error is : "<<0.602298-iv<<endl;
    }
    return 0;
}