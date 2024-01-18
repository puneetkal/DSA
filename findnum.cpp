#include <iostream>
#include<vector>
using namespace std;

int rightmost_one(int arr[], int n, int xsum)
{
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        setbit = xsum & 1;
        pos++;
        xsum >> 1;
    }
    return pos;
}

bool check(int n, int pos){
    int num= (n & 1<<pos);
    if(num){
        return true;
    }
    else{
        return false;
    }
}





int main()
{
    int n = 8;
    int arr[n] = {1, 2, 3, 5, 8, 3, 2, 1};

    int xsum = 0;
    for (int i = 0; i < 7; i++)
    {
        xsum = xsum ^ arr[i];
    }

    int pos = rightmost_one(arr, n, xsum);

    vector<int>new_arr;
    for(int i=0 ; i<n ; i++){
        int x=arr[i];
        if(check(x, pos-1)){
            new_arr.push_back(x);
        }
    }

    int newsum = 0;
    for (int i = 0; i < new_arr.size(); i++)
    {
        newsum = newsum ^ arr[i];
    }

    cout<<newsum<<endl;
    cout<<(newsum^xsum);

}