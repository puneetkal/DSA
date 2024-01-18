#include<iostream>
using namespace std;

int cal(int n){
int count=0;
while(n){
    n= n& n-1;
    count++;
}
return count;

}
int main(){
int n=19;
cout<<cal(n);
}