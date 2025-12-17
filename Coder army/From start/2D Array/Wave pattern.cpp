#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void wave(int arr[][3], int row, int col){

    for(int j=0; j<col; j++){
        if(j%2==0){
            // up to down
            for(int i =0; i<row; i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i = row-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}

int main(){

    int arr1[3][3]= {2,3,4,1,5,7,4,7,1};
    int arr2[2][3]= {4,1,7,2,9,2};
    int resultArr[2][3];

    wave(arr1,3,3);

    return 0;
}