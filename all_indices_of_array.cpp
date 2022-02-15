#include<iostream>
#include<vector>
using namespace std;
void allindex(int a[],int size,int x){
    static vector<int>vt;
    static int d;
    if(size==0)
       return;
    if(a[0]==x){
        cout<<d<<" ";
    }
    d++;
    allindex(a+1,size-1,x);
    
}
int main(){
    vector<int>t;
    int a[]={5,6,6,5,7,5,5,5};
    allindex(a,8,2);
    
    return 0;
}
