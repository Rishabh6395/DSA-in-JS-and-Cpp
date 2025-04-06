#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<< " Printing the array: "<< endl;
    // Print the array
    for(int i =0; i< size; i++){
        cout<< arr[i] <<" ";
    }
    cout<<" Printing Done" << endl;
}


int main() {
    // declare
    // int number[15];

    // accessing an array;
    // cout<< "Value at" << number[10]<< endl;

    // Initializing an array;
    // int second[3] = {5, 8, 10};

    // cout<< "Value of 2nd index: " << second[1]<< endl;


    int num[15] = {2,7,25};
    // printArray(num, 15);

    int forth[10] = {0};
    // printArray(forth, 10);

    int fifthsize = sizeof(forth)/ sizeof(int);
    // cout<< " Size of Fifth is "<< fifthsize<< endl;


    char ch[5] = {'a', 'b', 's'};
    cout<< "Char is "<< ch[2]<<endl;
    for(int i =0; i< 5; i++){
        cout<< ch[i] <<" ";
    }
    cout<<" Printing Done" << endl;


    cout<<"Everthing is fine"<<endl;

    return 0;
}
