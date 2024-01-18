#include<iostream>
using namespace std;

string replace_pi(string s , int n , int i){
    
    if(i==n){
        return s;
    }

    if(s.substr(i,2)=="pi"){
        s=s.substr(0,i) + "3.14" + s.substr(i+2,n);
    }
    n=s.size();
    return replace_pi( s , n , i+1);

}


int main(){
    string a="piABCpiDEpi";
    cout<<replace_pi(a , a.size(), 0);
}