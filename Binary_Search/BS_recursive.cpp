#include<bits/stdc++.h>
using namespace std;
int helper(vector<int>& arr,int target,int left,int right){
   if(left>right){
    return -1;
   }
   int mid = left+(right-left)/2;
   if(arr[mid]==target){
    return mid;
   }else if(arr[mid]<target){
    return helper(arr,target,mid+1,right);
   }else{
    return helper(arr,target,left,mid-1);
   }
}
int main(){
vector<int> arr = {1,3,5,8,10,14,18,20,34,50,56,67};
int target = 90;
int result = helper(arr,target,0,arr.size()-1);
if(result==-1){
    cout<<"No Match Found"<<endl;
}else{
    cout<<"Match Found "<<result+1<<endl;
}
return 0;
}