#include <iostream>
#include<string>
using namespace std;
void subseq(string p,string o){
    if(p.size()==0){
        cout<<o<<endl;
        return;
    }
    subseq(p.substr(1),o+p[0]);
     subseq(p.substr(1),o);
}

int main()
{
    subseq("abc","");

    return 0;
}