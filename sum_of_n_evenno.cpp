#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    int sum1=sum(n-1);
    if(n%2==0){
        return n+sum1;
    }
    else{
        return sum1;
    }
    
}
int main(){
    cout<<sum(5);
    return 0;
}