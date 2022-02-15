#include<iostream>
#include<string>
#include<vector>
using namespace std;
int sub(string s,vector<string>&st){
        if(s.size()==0){
            st.push_back("");
            return 1;
        }
        int count=sub(s.substr(1),st);
        for(int i=0;i<count;i++){
            st.push_back(s[0]+st[i]);
        }
        return 2*count;
}
int main(){
    return 0;
}