#include<iostream>
using namespace std;

int brute(vector<int> &arr){
    int n = arr.size();
    for(int val : arr){
        int freq = 0;
        for(int el : arr){
            if(el == val){
                freq++;
            }
        }
        if(freq > n / 2){
            return val;
        }
    }
    return -1;
}

int optimised(vector<int> &arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());

    int freq = 1, ans = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i-1]){
            freq++;
        } else {
            freq = 1;
            ans = arr[i];
        }
        if(freq > n / 2){
            return ans;
        }
    } 
}

int moore(vector<int> arr){
    int freq = 0, ans = 0, n = arr.size();
    for(int i = 0; i < n; i++){
        if(freq == 0){
            ans = arr[i];
        }
        if(ans == arr[i]){
            freq++;
        } else {
            freq--;
        }
    }
    return ans;
}

int main(){

    vector<int> nums = {2, 2, 1, 3, 3, 3, 3};

    vector<int> a = {2, 2, 2, 2, 2, 2, 2, 1, 3, 3, 3, 3};

    vector<int> ar = {3, 3, 4};

    cout<<"Majority element: "<<brute(nums)<<endl;

    cout<<"Majority element of second arr: "<<optimised(a)<<endl;

    cout<<"Majority element of third arr: "<<brute(ar)<<endl;
    
    return 0;
}