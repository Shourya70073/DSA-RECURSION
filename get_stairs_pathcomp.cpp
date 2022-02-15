#include<iostream>
#include<string>
#include<vector>
using namespace std;
int countways(int n)
{   
   if(n<0)
   {
       return 0;
   }
   if(n==0)
   {
       return 1;
   }

    return countways(n-1)+countways(n-2)+countways(n-3);
}

int main(){
    int k=4;
    cout<<countways(k);
    return 0;
}