
#include<iostream>
using namespace std;
bool check(int a[],int size){
    if(size==0 || size==1){
        return true;
    }
    bool ans=check(a+1,size-1);
    if(ans){
        if(a[0]>a[1]){
            return false;
        }
        else
          return true;
    }
    else
      return ans;
   
}



int main()
{
   int a[]={5,6,7,8,9};
   cout<<check(a,5);

    return 0;
}
