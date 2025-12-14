#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printMax(int arr[][4], int row, int col){
    int index = -1, sum=INT_MIN;

    for(int i=0; i<row; i++){
        int total = 0;

        for(int j=0;j<col; j++){
            total += arr[i][j];

            if(total>sum){
                sum = total;
                index = i;
            }
        }
    }
    cout<<index<<"";
}

int main(){

    int arr1[3][4]={1,3,1,3,5,6,54,3,8,5,3,12};


    printMax(arr1,3,4);

    return 0;
}