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
        vector<string>s2;
        vector<string>s4;
        vector<string>s1;
        vector<string>s5;
        vector<string>s6;
        vector<string>s7;
        vector<string>s8;
        vector<string>s9;
        if(i<m-1)
           s1=get(m,n,i+1,j);
        if(i<m-2)
           s2=get(m,n,i+2,j);
        if(i<m-3)
           s3=get(m,n,i+3,j);
        if(j<n-1)
          s4=get(m,n,i,j+1);
        if(j<n-2)
          s5=get(m,n,i,j+2);
        if(j<n-3)
          s6=get(m,n,i,j+3);
        if(i<m-1&&j<n-1)
          s7=get(m,n,i+1,j+1);
        if(i<m-2&&j<n-2)
          s8=get(m,n,i+2,j+2);
        if(i<m-3&&j<n-3)
          s9=get(m,n,i+3,j+3);

        vector<string>s10;
        for(int i=0;i<s1.size();i++){
            s10.push_back("v1"+s1[i]);
        }
        for(int i=0;i<s2.size();i++){
            s10.push_back("v2"+s2[i]);
        }
        for(int i=0;i<s3.size();i++){
            s10.push_back("v3"+s3[i]);
        }
        for(int i=0;i<s4.size();i++){
            s10.push_back("h1"+s4[i]);
        }
        for(int i=0;i<s5.size();i++){
            s10.push_back("h2"+s5[i]);
        }
        for(int i=0;i<s6.size();i++){
            s10.push_back("h3"+s6[i]);
        }
        for(int i=0;i<s7.size();i++){
            s10.push_back("d1"+s7[i]);
        }
        for(int i=0;i<s8.size();i++){
            s10.push_back("d2"+s8[i]);
        }
        for(int i=0;i<s9.size();i++){
            s10.push_back("d3"+s9[i]);
        }
        return s10;
    }
int main(){
   vector<string>u=get(4,4,0,0);
   for(int i=0;i<u.size();i++)
      cout<<u[i]<<endl;
   return 0;
 }