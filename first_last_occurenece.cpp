#include<iostream>
using namespace std;

int first(int arr[] , int n, int i, int key){   
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return first( arr, n, i+1 , key);
}

int last(int arr[] , int n, int key){   
    int i=n-1;
    if(i<0){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return last( arr, n-1 , key);
}


int main(){
    int arr[]={1,2,3,4,5};
    cout<<first(arr , 5 , 0 , 4)<<endl;
    cout<<last(arr , 5 , 3);
}