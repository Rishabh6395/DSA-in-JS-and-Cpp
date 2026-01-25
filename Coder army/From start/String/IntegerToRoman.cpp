#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int IntegerToRoman(vector<int> n){
    int index = 0, count = 0;
    vector<int>temp;
    while(index< n.size()){
        for(int i =0; i<n.size(); i++){
            count++;
        }
        if(count == 4)
        temp.push_back(1000);

        else if(count == 3)
        temp.push_back(100);

        else if(count == 2)
        temp.push_back(10);

        else if(count == 1)
        temp.push_back(1);

        index++;
    }
}


int main(){

    return 0;
}