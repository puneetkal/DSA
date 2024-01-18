#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

vector<int> arr{3,2,1,5,6};
sort(arr.begin(), arr.end());

vector<int>::iterator it;
for(it=arr.begin(); it!=arr.end() ; it++){
    cout<<*it<<" ";
}
}