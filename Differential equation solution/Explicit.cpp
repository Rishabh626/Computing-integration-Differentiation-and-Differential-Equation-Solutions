#include <iostream>
#include <cmath>
using namespace std;
float f(float t){
        double q = -1*pow(t,2);
        return q;
    }
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
        y[i+1] = y[i] + h*f(y[i]);
    }
    for(int i=0;i<n+1;i++){
        cout<<"y["<<i*0.5<<"]"<<" = "<<y[i]<<endl;
        
    } 
    return 0;
}