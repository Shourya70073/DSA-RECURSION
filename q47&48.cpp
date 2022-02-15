#include<iostream>
using namespace std;
void print(int a){
    if(a==0){
        return;
    }
    cout<<a<<" ";
    print(a-1);
}
int main(){
    print(10);
    return 0;
}