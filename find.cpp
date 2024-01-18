#include<iostream>
#include<vector>
using namespace std;

int find(vector<int>&arr, int k){
for(int i=0; i<arr.size(); i++){
    if(arr[i]==k){
        return i;
    }
    }
}

int main(){
vector<int> arr{10,16,7,14,5,3,12,9};
int ans=find(arr , 16);
cout<<ans;


}