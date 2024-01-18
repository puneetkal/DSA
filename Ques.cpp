#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int find(std::vector<int>arr , int k){
    for(int i=0; i<arr.size() ; i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}


int main(){

vector<int> arr{10,16,7,14,5,3,12,9};
vector<int> newarr;
for(int i=0 ; i<arr.size() ; i++){
    newarr.push_back(arr[i]);
}

sort(newarr.begin(), newarr.end());
cout<<"Sorted Array:";
vector<int>::iterator it;
for(it=newarr.begin(); it!=newarr.end() ;it++){
    cout<<*it<<" ";
}
int index=0;
for(int i=0 ; i<arr.size() ;i++){
    index=find(arr,newarr[i]);
    arr[index]=i;
}
cout<<"New Array:";
for(auto element:arr){
    cout<<element<<" ";
}

}