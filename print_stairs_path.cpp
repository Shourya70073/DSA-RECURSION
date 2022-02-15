#include <iostream>
#include<string>
using namespace std;
void stairspath(int n,string p){
    if(n==0){
        cout<<p<<endl;
        return;
    }
    if(n<0){
        return;
    }
    stairspath(n-1,"1"+p);
    stairspath(n-2,"2"+p);
    stairspath(n-3,"3"+p);
}
int main(){
    stairspath(5,"");
    return 0;
}