#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> path(int n){
    if(n==0){
        vector<string>s;
        s.push_back("");
        return s;
    }
    if(n<0){
        vector<string>s;
        return s;
    }
    vector<string>s1=path(n-1);
    vector<string>s2=path(n-2);
    vector<string>s3=path(n-3);
    vector<string>s4;
    for(int i=0;i<s1.size();i++){
        s4.push_back("1"+s1[i]);
    }
     for(int i=0;i<s2.size();i++){
        s4.push_back("2"+s2[i]);
    }
    for(int i=0;i<s3.size();i++){
        s4.push_back("3"+s3[i]);
    }
    return s4;
}
int main(){
    vector<string>s5=path(4);
    for(int i=0;i<s5.size();i++){
        cout<<s5[i]<<endl;
    }
    return 0;
}