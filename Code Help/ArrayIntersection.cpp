#include<iostream>
#include<vector>
using namespace std;

vector<int> intersction(int a[], int n, int b[], int m){
    
    vector<int> ans;
    for(int i =0; i<n; i++){
        int elem = a[i];

        for(int j =0; j<m; j++){
            if(elem == b[j]){
                ans.push_back(elem);
                b[j] == INT_MIN;
                break;
            }
        }
    }
    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;
    return ans;

}


int main() {

    int arr1[4] = {1,2,3,4};
    int n = 4;
    int arr2[3] = {3,6,7};
    int m = 3;

    intersction(arr1, n, arr2, m);
    


    return 0;
}