#include<iostream>
using namespace std;

void bubble(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    
    int arr[7] = {2, 3, 1, 4, 5, 7, 6};
    int n = 7;

    bubble(arr, n);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}