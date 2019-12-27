#include<iostream>
using namespace std;
int main(){
    string txt,tex;
    int N;
    cout<<"Enter the first text: ";
    cin>>txt;
    cout<<"Enter the second text: ";
    cin>>tex;
    cout<<"Enter N: ";
    cin>>N;
    int count=0;
    while(count<N){
        if(count%2==0){
            cout<<txt<<" ";
        }else{
            cout<<tex<<" ";
        }
        count++;
        }
    return 0;
}