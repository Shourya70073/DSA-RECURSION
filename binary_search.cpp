#include<iostream>
#include<vector>
using namespace std;
 int search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        int mid;
        while(l<=h){
            mid=l+h/2;
            if(nums[mid]==target){
              return mid;
            }
             if(target>nums[mid]){
                l=mid+1;
            }
            else{
                  h=mid-1;
            }
        }
        return -1;
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(21);
    v.push_back(31);
    cout<<search(v,21);
    return 0;
}