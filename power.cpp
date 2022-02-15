#include<iostream>
using namespace std;
int pow(int n,int p){
    if(p==0){
        return 1;
    }
    int d=pow(n,p-1);
    return d*n;
}
int main(){
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    cout<<"Enter the power"<<endl;
    int p;
    cin>>p;
    cout<<pow(n,p);
    return 0;
}