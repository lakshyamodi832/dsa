#include<iostream>
using namespace std;

void selection(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int smallestInd = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[smallestInd]){
                smallestInd = j;
            }
        }
        swap(arr[i], arr[smallestInd]);
    }
}

int main(){
    
    int arr[7] = {2, 3, 1, 4, 5, 7, 6};
    int n = 7;

    selection (arr, n);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}