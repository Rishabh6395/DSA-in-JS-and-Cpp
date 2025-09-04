#include<iostream>
#include<vector>
using namespace std;

vector<int> wave(vector<vector<int>> &matrix, int totalRows, int totalCols){

    vector<int>result;

    for(int col =0; col<totalCols; col++){
        // even case: top to bottom
        if(col%2 == 0){
            for(int row = 0; row<totalRows; row++){
                result.push_back(matrix[row][col]);
            }
        }
        else{
            // odd case: botton to top
            for(int row = totalRows -1; row>=0; row--){
                result.push_back(matrix[row][col]);
            }
        }
    }
    return result;
}

int main(){
    vector<vector<int>> matrix = {
        {1, 2},
        {3, 4}
    };

    int totalRows = 2;
    int totalCols = 2;

    vector<int> result = wave(matrix, totalRows, totalCols);

    // Print result
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}