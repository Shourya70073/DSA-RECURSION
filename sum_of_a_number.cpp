#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    int d=sum(n/10);
    return (n%10)+d;
}
int main(){
    cout<<sum(5555);
    return 0;
}