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
    float iv = f(1)+f(0);
    for(int j=0;j<30;j++){
        for(int i=0;i<j;i++){
            float k = 0+i*h;
            if(i%2==0){
                iv = iv + 2*f(k);
            }
            else{
                iv = iv + 4*f(k);
            }
    }
    iv = (iv *h)/3;
    cout<<"Value is : "<<iv<<endl;
    cout<<"Error is : "<<0.602298-iv<<endl;
    }
    return 0;
}