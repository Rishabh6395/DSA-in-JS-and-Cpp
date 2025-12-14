#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int arr1[2][3]= {2,3,4,1,5,7};
    int arr2[2][3]= {4,1,7,2,9,2};
    int resultArr[2][3];

    // Adding 2D matrix:

    for(int row=0; row<2; row++){
        for(int col = 0; col<3; col++){
            resultArr[row][col] = arr1[row][col]+arr2[row][col];
        }
    }

    // Print
    for(int row=0; row<2; row++){
        for(int col = 0; col<3; col++){
            cout<<resultArr[row][col]<<" ";
        }
    }

    return 0;
}