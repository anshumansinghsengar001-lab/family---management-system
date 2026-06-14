#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>Number = {1,2,3,4,5};
    int size = Number.size();
    for(int i = 0 ; i<size ; i++){
        cout<<Number[i]<<" ";
    }
    cout<<endl;
    for (int st = 0; st<size; st++){
        for(int end = st ; end < size ; end++){
            for(int i = st;i<=end ; i++){
            cout<<Number[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}