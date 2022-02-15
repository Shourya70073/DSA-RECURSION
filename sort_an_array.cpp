#include<iostream>
using namespace std;
void sort(int a[],int size){
    if(size==0)
       return;
    if(a[0]>a[1]){
        int temp=a[0];
        a[0]=a[1];
        a[1]=temp;
    }
    sort(a+1,size-1);
}
int main(){
    int a[]={3,4,56,6,1};
    sort(a,5);
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}