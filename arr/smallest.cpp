#include<iostream>
using namespace std;

int main(){

    int arr[5] = {4, 2, 5, 1, -1};
    
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int size = 5;

    for (int i = 0; i<size; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
        if(arr[i]>largest){
            largest = arr[i];
        }
    }

    cout<<smallest<<endl;
    cout<<largest<<endl;

    for(int i = 0; i<5; i++){
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }

    cout<<smallest<<endl;
    cout<<largest<<endl; 

    return 0;
}