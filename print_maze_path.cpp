#include <iostream>
#include<string>
using namespace std;
void mazepath(int m,int n,int i,int j,string p){
    if(i==m-1 && j==n-1){
        cout<<p<<endl;
        return;
    }
    if(i<m-1){
        mazepath(m,n,i+1,j,"h"+p);
    }
    if(j<n-1){
        mazepath(m,n,i,j+1,"v"+p);
    }
   
}
int main(){
    mazepath(5,5,0,0,"");
    return 0;
}