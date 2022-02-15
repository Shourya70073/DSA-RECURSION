#include<iostream>
using namespace std;
int lastindex(int a[],int size,int x){
    if(size==0){
        return 99999;
    }
    int last=lastindex(a,size-1,x);
    if(a[size-1]==x){
        last=size-1;
        return last;
    }
    else{
        return last;
    }
}
int main(){
    int a[]={1,2,3,5,5};
    cout<<lastindex(a,5,5);
    return 0;
}