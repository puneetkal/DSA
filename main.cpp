#include<iostream>
using namespace std;
///////////////////////////////////////////////////////////////////////////////////////////////////
bool check(int** arr , int x , int y , int n){
    if(arr[x][y]==1 && x<n && y<n)
        return true;
    else
        return false;
}
///////////////////////////////////////////////////////////////////////////////////////////////////
bool solve_maze(int** arr, int i ,int j, int n , int** solved){
    
    if((i==(n-1)) && (j==(n-1))){
        solved[i][j]=1;
        return true;
    }

    if(check(arr , i ,j , n)){
        solved[i][j]==1;
        if(solve_maze(arr , i+1 , j , n , solved)){
            return true;
        }
        if(solve_maze(arr , i , j+1 , n , solved)){
            return true;   
        }
        solved[i][j]=0;
        return false;
        }
    return false;
}
///////////////////////////////////////////////////////////////////////////////////////////////////
int main(){
    int n=5;
    int** maze = new int *[n]; 
    for(int i=0 ; i<n ; i++){
        maze[i]=new int[i];
    }
    cout<<"Enter data"<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ;j++){    
            cin>>maze[i][j];
        }
    }

///////////////////////////////////////////////////////////////////////////////////////////////////

    int** solved=new int *[n];
    for(int i=0 ; i<n ;i++){
        solved[i]=new int[i];
            for(int j=0 ; j<n ; j++){
            solved[i][j]=0;
    }
///////////////////////////////////////////////////////////////////////////////////////////////////

    if(solve_maze(maze , 0 , 0 ,n , solved)){
        for(int i=0; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                cout<<solved[i][j]<<" ";
        }cout<<endl;
    }
    }


}
}