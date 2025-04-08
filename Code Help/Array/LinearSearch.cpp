// Linear Search: 

#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main() {

    int arr[10] ={ 5, 9, -22, -4, 6, 1, 15, 44, 2, 8};

    // Whether 1 is present in it or not?
    cout<< " Enter the key, the element you want to search" << endl;
    int key;
    cin>>key;

    bool found = search(arr, 10, key);
    if(found){
        cout<<"Key is presenet "<<endl;
    }
    else{
        cout<<"Key is absent"<< endl;
    }

    return 0;
}