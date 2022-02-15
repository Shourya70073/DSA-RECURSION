#include<iostream>
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
    }
    int d=n*fact(n-1);
    return d;
}
int main(){
    cout<<fact(5);
    return 0;
}