#include<iostream>
using namespace std;


int main(){
    int array[8];
    for(int i=0;i<8;i++){
        cin>>array[i];
    }
    cout << "The numbers are: ";
    for(int n=0;n<8;n++){
        cout<<array[n]<<" ";
    }
    // cout<<array[0]<<endl;
    // cout<<array[1]<<endl;
    // cout<<array[2]<<endl;
    // cout<<array[3]<<endl;
    return 0;
}