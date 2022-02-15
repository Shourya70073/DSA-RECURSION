#include<iostream>
using namespace std;
int search(int l,int h,int key,int a[]){
    if(l<=h){
        int mid=l+h/2;
        if(key==a[mid])
          return mid;
        else if(key<a[mid]){
            return search(l,mid-1,key,a);
        }
        else 
          return search(mid+1,h,key,a);
    }
    return -1;

}