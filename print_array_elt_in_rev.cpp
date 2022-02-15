#include<iostream>
using namespace std;
void print(int a[],int size){
    if(size==0)
      return;
    
    print(a+1,size-1);
    cout<<a[0]<<" ";
    
}
int main(){
    int a[]={10,11,12,13,14,15};
    print(a,6);
    return 0;
}