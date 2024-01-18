#include <iostream>
using namespace std;

int main()
{
    int n = 100;
    int prime[n] = {0};

    for (int i = 2; i < n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j < n; j = j + i)
            {
                if (prime[j] == 0 && j<n)
                {
                    prime[j] = 1;
                }
            }
        }
    }

        for(int i=0 ; i<n ;i++){
            if(prime[i]==0){
                cout<<i<<" ";
            }
        }
}