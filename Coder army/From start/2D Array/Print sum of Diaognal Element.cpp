#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Addmatrix(int arr[][3], int row, int col){
    int first = 0;
    int second =  0;

    // First Diaognal Sum:
    for(int i =0; i<row; i++){
        first += arr[i][i];
    }
    cout<< "First ans:"<< first <<"";

    // Second:
    int i =0, j=col-1;
    while(j>=0){
        second += arr[i][j];
        i++,j--;
    }
    cout<< "Second ans:"<< second << " ";
}

int main(){

    int matrix[3][3]= {1,2,3,4,5,6,7,8,9};
    
    Addmatrix(matrix,3,3);

    return 0;
}