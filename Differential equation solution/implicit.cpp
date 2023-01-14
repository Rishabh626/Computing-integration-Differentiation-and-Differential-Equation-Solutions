#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    float h;
    cout<<"Enter h :";
    cin>>h;
    float y[n+1];
    y[0] = 1;
    for(int i = 0;i<n+1;i++){
        y[i+1]=(-1+sqrt(1+(4*y[i]*h)))/(2*h);
    }
    for(int i=0;i<n+1;i++){
        cout<<"y["<<i*0.5<<"]"<<" = "<<y[i]<<endl;
        
    } 
    return 0;
}