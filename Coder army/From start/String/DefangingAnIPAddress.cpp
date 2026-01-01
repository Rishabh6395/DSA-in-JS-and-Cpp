#include<iostream>
using namespace std;

int defanging(string address){
    int index = 0;
    string ans;

    while(index<address.size()){
        if(address[index] == '.'){
            ans = ans+"[.]";
        }
        else{
            ans = ans+address[index];
        }
        index++;
    }
    cout<<ans;
}

int main(){

    defanging("1.1.1.1.1");

    return 0;
}