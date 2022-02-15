#include <iostream>
#include<string>
#include<vector>
using namespace std;
vector<string> get(int m, int n,int i,int j){
        if(i==m-1&&j==n-1){
               vector<string>s;
               s.push_back("");
               return s;
        }
        vector<string>s3;
        vector<string>s1;
        if(i<m-1)
           s1=get(m,n,i+1,j);
        if(j<n-1)
          s3=get(m,n,i,j+1);
        vector<string>s2;
        for(int i=0;i<s1.size();i++){
            s2.push_back("v"+s1[i]);
        }
        for(int i=0;i<s3.size();i++){
            s2.push_back("h"+s3[i]);
        }
        return s2;
 }
 int main(){
   vector<string>u=get(4,4,0,0);
   for(int i=0;i<u.size();i++)
      cout<<u[i]<<endl;
   return 0;
 }