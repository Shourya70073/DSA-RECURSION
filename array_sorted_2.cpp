#include<iostream>
using namespace std;
bool check(int a[],int size){
    if(size==0||size==1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    bool ans=check(a+1,size-1);
    return ans;
}
int main(){
    int a[]={1,2,3,4,5};
    int b[]={2,1,3,4,5};
    cout<<check(a,5)<<endl;
    cout<<check(b,5)<<endl;
    return 0;
}