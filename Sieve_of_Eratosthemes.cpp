#include<iostream>
using namespace std;
int prime(int n)
{
    int arr[n]={0};

    for(int i=2 ; i<=n; i++){
        if(arr[i]==0){
            for(int j=i*i ; j<=n ; j+=i){
                arr[j]=1;
            }
        }
    }
    for(int i=0 ; i<=n ; i++){
        if(arr[i]==0){
        cout<<i<<endl ;
            }
        }
}

int main()
{
prime(50);
}