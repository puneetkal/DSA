#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){

vector<int> arr{10,16,7,14,5,3,12,9};
vector<pair<int, int>> v;

for(int i=0 ; i<arr.size(); i++){
    v.push_back(make_pair(arr[i],i));
}

sort(v.begin(),v.end());
for(int i=0 ; i<v.size() ; i++){
    arr[v[i].second]=i;
}

for(int i=0 ; i<v.size() ; i++){
    cout<<arr[i]<<" ";
    }

}