#include<iostream>
using namespace std;
void remove(char s[])
{
    if(s[0]=='\0')
       return;
    remove(s+1);
    if(s[0]=='x'){
        int i;
        for(i=0;s[i]!='\0';i++){
            s[i]=s[i+1];
        }
    }
      
       

}
int main(){
    char s[15];
    cin>>s;
    remove(s);
    cout<<s;
    return 0;
}