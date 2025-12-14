#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int target){
    for(int i = 0; i< size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){

    int arr[] = {3, 9 , 1, 2, 6, 7, 4, 5, 8};
    int size = sizeof(arr);
    int target = 10;

    int index = linearSearch(arr, size, target);

    cout<<index<<endl;
    
    return 0;
}