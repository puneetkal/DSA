#include<iostream>
using namespace std;

// 5 is 0101 in decimal
// what is value in poistion 2 i.e   3210 = 0101
//ans is 1

int getBit(int n, int i){
    if( n & (1<<i)){
        return 1;
    }
    else 0;
}

int setBit(int n, int i){ //Creating 1 at ith position 
    return (n | n<<i);
}

int clearBit(int n, int i){ //Making zero at ith position of decimal value of n
    int val= ~(n,1<<i);
    return n & val;
}

int update(int n , int i){
    //clear + set
    int val = ~(n,1<<i);
    int clear = n & val;
    return (clear | 1<<i);
}

int main(){
    cout<<getBit(5,1)<<endl;
    cout<<setBit(5,2)<<endl;
    cout<<clearBit(5,2)<<endl;
    cout<<update;
}