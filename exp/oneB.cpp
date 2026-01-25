#include<iostream>
#include<vector>
using namespace std;

int recBinary(vector<int> arr, int tar, int st, int end){
    if(st<=end){
        int mid = st + ((end - st)/2);
        if(tar < arr[mid]){
            return recBinary(arr, tar, st, mid - 1);
        } else if(tar > arr[mid]){
            return recBinary(arr, tar, mid + 1, end);
        }else{
            return mid; 
        }
    }
    return -1;
}

int iterBinary(vector<int> arr, int tar){
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

    cout<<iterBinary(v1, 3)<<endl;

    cout<<iterBinary(v2, 12)<<endl;

    cout<<recBinary(v1, 3, 0, v1.size() - 1)<<endl;

    cout<<recBinary(v2, 12, 0, v2.size() - 1)<<endl;

    return 0;
}