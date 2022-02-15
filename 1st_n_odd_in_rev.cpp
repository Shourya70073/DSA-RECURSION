#include<iostream>
using namespace std;
void print (int n){
    if(n==0){
        return;
    }
    if(n%2!=0)
      cout<<n<<" ";
    print(n-1);
    


}
int main(){
    print(10);
    return 0;
}