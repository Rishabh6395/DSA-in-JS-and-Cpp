#include <bits/stdc++.h>
using namespace std;

int mulRec(int n){
    if(n<=1){
        return n;
    }
    int last = mulRec(n-1);
    int Slast = mulRec(n-2);
    return last + Slast;
}

int main(){
    cout<<mulRec(4);
    return 0;
}