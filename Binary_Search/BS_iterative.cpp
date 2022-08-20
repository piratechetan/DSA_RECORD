#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> arr = {1,3,5,8,10,14,18,20,34,50,56,67};
int target = 90;
int left = 0;
int right = arr.size()-1;   
bool flag=false;

while(left<=right){
    int mid = left+(right-left)/2;
   if(arr[mid]==target){
     cout<<"Match found at "<<mid+1<<endl;
     flag=true;
     break;
   }else if(arr[mid]<target){
       left = mid+1;
   }else{  
      right= mid-1;
   }

}
if(!flag){
    cout<<"NO MATCH FOUND"<<endl;
}
return 0;
}