#include<iostream>
using namespace std;
int maxi(int a[],int size){
    if(size==0){
        return a[0];
    }
    int max=maxi(a+1,size-1);
    if(a[0]>max){
        return a[0];
    }
    else{
        return max;
    }
}
int main(){
    int a[]={1,2,3,10,5};
    cout<<maxi(a,5);
    return 0;
}