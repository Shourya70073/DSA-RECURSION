#include<iostream>
using namespace std;
void print(int a[],int size){
    if(size==0)
      return;
    cout<<a[0]<<" ";
    print(a+1,size-1);
    
}
int main(){
    int a[]={10,11,12,13,14,15};
    print(a,6);
    return 0;
}