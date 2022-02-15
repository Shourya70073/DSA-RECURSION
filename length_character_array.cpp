#include<iostream>
using namespace std;
int lenth(char s[]){
      if(s[0]=='\0')
        return 0;
    int l=lenth(s+1);
    return 1+l;
}
int main(){
    char s[10];
    cin>>s;
    cout<<lenth(s);
    return 0;
}