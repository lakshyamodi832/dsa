#include<iostream>
using namespace std;

int partition(vector<int>& arr, int st, int end){
    int idx = st - 1, pivot = arr[end];

    for(int i = st; i < end; i++){
        if(arr[i] <= pivot){
            idx++;
            swap(arr[i], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

void quick(vector<int>& arr, int st, int end){

    if(st < end){
        int pivotInd = partition(arr, st, end);

        quick(arr, st, pivotInd-1);
        quick(arr, pivotInd+1, end);
    }
}

int main(){
    
    vector<int>arr = {12, 31, 35, 8, 32, 17};
    
    quick(arr, 0, arr.size()-1);

    for(int val : arr){
        cout<<val<<" ";
    }

    cout<<endl;

    return 0;
}