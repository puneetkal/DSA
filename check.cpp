#include <iostream>
using namespace std;

bool getbit(int x, int pos)
{
    return ((x & 1<<pos)!=0);
}

int main()
{
    int arr[7] = {1, 1, 1, 3, 2, 2, 2};

    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < 7; j++)
        {
            if(getbit(arr[j], i)){
                
            }
        }
    }
}