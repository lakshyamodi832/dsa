#include<iostream>
using namespace std;

int main(){
    
    // vector<char>vec = {'a', 'b', 'c', 'd', 'e'};

    // cout<<"size = "<<vec.size()<<endl;//5

    // for(char val : vec){
    //     cout<<val<<endl;
    // }

    vector<char>vec;

    cout<<"size = "<<vec.size()<<endl;//0    

    for(char val : vec){
        cout<<val<<endl;
    }

    return 0;
}