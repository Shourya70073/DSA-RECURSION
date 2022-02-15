#include <iostream>
using namespace std;
int nCr(int n,int r){
    if(n==r||r==0)
       return 1;
    int t1=nCr(n-1,r-1);
    int t2=nCr(n-1,r);
    return t1+t2;
}


int main()
{
    cout<<nCr(4,2);

    return 0;
}