#include <iostream>
using namespace std;
int main()
{

    int n = 42;
    int m = 24;
    int temp=0;
    int py=0;
    while (m != 0)
    {
        temp=n%m;
        n=m;
        m=temp;
        if(temp==0){
            cout<<py;
        }
        py=temp;
    }
    
}