#include<iostream>
using namespace std;
int mini(int a[],int size){
    if(size==0){
        return a[0];
    }
    int min=mini(a+1,size-1);
    if(a[0]<min){
        return a[0];
    }
    else{
        return min;
    }
}
int main(){
    int a[]={1,2,3,10,5};
    cout<<mini(a,5);
    return 0;
}