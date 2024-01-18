#include <iostream>
using namespace std;
int main(){
int n=3;
int arr[n]={1,2,3};

for(int i=0 ; i <(1<<n) ; i++){
    for(int j=0 ; j<n ; j++){
        if(i &(1<<j)){
            cout<<arr[j];
        }
    }
    cout<<endl;
}

}