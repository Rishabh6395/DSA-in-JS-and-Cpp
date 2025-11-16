#include<iostream>
#include<vector>
using namespace std;



int main(){
    // create vector, declare
    // vector<int>v;
    // vector<int>v1(5,1);
    // // size and capacity
    // // cout<<"Size of vector: "<< v.size()<<endl;
    // // cout<<"Capacity of vector: "<< v.capacity()<<endl;
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // // cout<<"Size of vector: "<< v.size()<<endl;
    // // cout<<"Capacity of vector: "<< v.capacity()<<endl;
    // // update value:
    // v[1] = 5;
    
    // // cout<<"Size of vector1: "<< v1.size()<<endl;
    // // cout<<"Capacity of vector1: "<< v1.capacity()<<endl;
    // // v1.push_back(9);
    
    // // cout<<"Size of vector1: "<< v1.size()<<endl;
    // // cout<<"Capacity of vector1: "<< v1.capacity()<<endl;

    // // Deleting value from vector:
    // vector<int>vnew;
    // vnew.push_back(4);
    // vnew.push_back(5);
    // vnew.push_back(6);
    // vnew.push_back(16);
    // vnew.push_back(26);
    // vnew.pop_back();
    // cout<<"Size of vectorneww: "<< vnew.size()<<endl;
    // cout<<"Capacity of vectorneww: "<< vnew.capacity()<<endl;
    // vnew.pop_back();
    // cout<<"Capacity of vectorneww: "<< vnew.size()<<endl;
    // // vnew.erase(vnew.begin()+1);
    // for(int i = 0; i<vnew.size(); i++){
    //     cout<<vnew[i]<<" ";
    // }
    //     vnew.insert(vnew.begin()+1,50);
    //     cout<<endl;
    //     for(int i =0; i<vnew.size(); i++)
    //     cout<<vnew[i]<<" ";



    // vector<int>arr;
    // arr.push_back(2);
    // arr.push_back(3);
    // arr.push_back(4);
    // arr.push_back(299);
    // cout<<arr.front()<<endl;
    // cout<<arr[arr.size()-1]<<endl; // print last element
    // cout<<arr.back()<<endl; // print last element


    // vector<int>a;
    // // copy value of 1 vector to another
    // a = arr;
    // for(int i = 0; i<a.size(); i++){
    //     cout<<a[i]<<" ";
    // }


    vector<int>ans;
    ans.push_back(5);
    ans.push_back(25);
    ans.push_back(35);
    ans.push_back(455);
    
    //sort in incresing order:
    sort(ans.begin(), ans.end());
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

}