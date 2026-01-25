#include<iostream>
#include<vector>
using namespace std;

int binary(vector<int> arr, int tar){
    int st = 0, end = arr.size()-1;

    while(st <= end){
        int mid = st + ((end - st)/2);
        if(tar > arr[mid]){
            st = mid + 1;
        } else if(tar < arr[mid]){
            end = mid - 1;
        } else {
            return mid; 
        }
    }
    return -1;
}

int main(){
    
    vector<int> v1 = {-1, 0, 3, 4, 5, 9, 12};

    vector<int> v2 = {-1, 0, 3, 5, 9, 12};

    cout<<binary(v1, 3)<<endl;

    cout<<binary(v2, 12)<<endl;

    return 0;
}