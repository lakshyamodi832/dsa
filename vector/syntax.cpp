#include<iostream>
#include<vector>
using namespace std;

int main(){
 
    vector<int>vec;//sz=0
    cout<<vec[0]<<endl;//segmentation fault(cannot access what has not been created yet)

    return 0;
}