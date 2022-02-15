#include<iostream>
using namespace std;
int sum(int a[],int size){
    if(size==1){
        return a[0];
    }
    int ans=sum(a+1,size-1);
    return a[0]+ans;
}
int main(){
    int a[]={5,6,7,1,2};
    cout<<sum(a,5);
    return 0;
}