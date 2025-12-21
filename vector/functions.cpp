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

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout<<"size after push back = "<<vec.size()<<endl;//3

    for(int val : vec){
        cout<<val<<endl;//25, 35, 45
    }

    return 0;
}