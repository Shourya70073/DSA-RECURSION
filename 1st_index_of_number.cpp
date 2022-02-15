#include<iostream>
using namespace std;
int indexx(int a[],int size,int x){
    if(size==0)
        return -1;
    if(a[0]==x){
        return 0;
    }
    int ans=indexx(a+1,size-1,x);
    if(ans!=-1){
        ans++;
        return ans;
    }
    else 
      return ans;
}
int main(){
    int a[]={5,5,6,6,7};
    cout<<indexx(a,5,5);
    cout<<indexx(a,5,6);
    cout<<indexx(a,5,7);
    return 0;
}