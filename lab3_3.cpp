#include<iostream>
using namespace std;
int main(){
    float x=2,a=0;
    while(x<=69){
        a=(1/x)+a;
        x=x+1;
    }
    cout<<"Answer is "<<a;
    return 0;
}