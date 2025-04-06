// Print sum of all element in an array;

#include<iostream>
using namespace std;

void add(int n, int arr[]){

    int sum=0;
    for(int i =0; i<n; i++){
        sum = sum + arr[i];
    }
    cout<< "Sum is"<< sum<<endl;
};

int main(){

    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;

    int num[100];
    // Taking input
    for(int i =0; i<size; i++){
        cin>> num[i];
    }
    add(size, num);


    return 0;
}