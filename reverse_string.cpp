#include<iostream>
#include<string>
using namespace std;
string rev(string s,int size){
    if(size==0)
       return "";
  
  string t=rev(s.substr(1,size-1),size-1);
  return (t+s[0]);
}
int main(){
    string s="SHOURYA";
    cout<<rev(s,7);
    return 0;
}