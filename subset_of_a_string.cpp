#include<iostream>
#include<string>
using namespace std;
int sub(string ik,string op[]){
 if((ik.empty())){
   op[0]="";
   return 1;
 }
 int small=sub((ik.substr(1)),op);
 for(int i=0;i<small;i++){
     op[i+small]=ik[0]+op[i];
 }
 return 2*small;
}
int main(){
    string input;
    string output[100];
    cin>>input;
    int c=sub(input,output);
    for(int i=0;i<c;i++){
        cout<<output[i]<<" "<<endl;
    }
    return 0;
}