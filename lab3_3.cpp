#include<iostream>
using namespace std;
int main(){
    float x=6,a=0;
    while(x<=19){
        a=(1/x)+a;
        x=x+1;
    }
    cout<<"Answer is "<<a;
    return 0;
}