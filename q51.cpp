#include<iostream>
#include<string>
using namespace std;
string print(string s,int l){
    if(l==-1){
        return"";
    }
    string rev=s[l]+print(s,(l-1));
    return rev;
}
int main(){
    cout<<print("Shourya",6);
    return 0;
}