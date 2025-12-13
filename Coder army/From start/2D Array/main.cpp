#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printCol(int arr[][4], int row, int col){

    // colwise print
    for(int j =0; j<col; j++){
        for(int i =0; i<row; i++){
            cout<<arr[i][j]<<" ";
        }
    }
}

int main(){

    int arr[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};

    for(int row = 0; row<3; row++){
        for(int col = 0; col<4; col++){
            cout<<arr[row][col]<<" ";
        }
    }

    printCol(arr,3,4);

    return 0;
}