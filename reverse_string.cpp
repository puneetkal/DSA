#include<iostream>
using namespace std;

string reverse(string s , int n){
    if( n<0 ){
        return "";
    }
    return s[n] + reverse(s , n-1);
    
}


int main(){
    string a="binod";
    cout<<reverse(a , a.size());
}