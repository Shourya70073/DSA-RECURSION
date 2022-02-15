#include<iostream>
using namespace std;
void print(int n){
    if(n==0)
      return;
    for(int i=1;i<=n;i++)
        cout<<"*";
    cout<<endl;
    print(n-1);

}
int main(){
    print(5);
    return 0;
}