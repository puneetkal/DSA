#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);

    for(int i=0 ; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    arr.pop_back();

    vector<int> arr2(3,50);
    for(int i=0 ;i <arr.size(); i++){
        cout<<arr[1];
    }
    swap(arr , arr1);
    sort(arr.begin(), arr.end());

}