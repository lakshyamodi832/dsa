#include<iostream>
#include<vector>
using namespace std;

int main(){
 
    // vector<int>vec;//sz=0
    // cout<<vec[0]<<endl;//segmentation fault(cannot access what has not been created yet)

    // vector<int>vect = {1, 2, 3};
    // cout<<vect[0]<<endl;//1

    vector<int>vecto(5, 2);
    cout<<vecto[0]<<endl;//2
    cout<<vecto[1]<<endl;//2
    cout<<vecto[2]<<endl;//2
    cout<<vecto[3]<<endl;//2
    cout<<vecto[4]<<endl;//2

    return 0;
}