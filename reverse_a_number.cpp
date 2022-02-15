

#include <iostream>
#include<cmath>
using namespace std;
int rev(int n,int d){
    if(n==0)
      return 0;
   int k= rev(n/10,d-1);
    return n%10*pow(10,d-1)+k;
}
int main()
{
    cout<<rev(1234,4);

    return 0;
}
