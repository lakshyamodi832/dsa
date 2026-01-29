#include<iostream>
using namespace std;

vector<int> brute(vector<int> arr, int target){
    int n = arr.size();
    vector<int>ans;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
}

vector<int> twoSum(vector<int> arr, int target){
    int n = arr.size();
    vector<int>ans;
    int i = 0, j = n - 1;

    while(i < j){
        int pairSum = arr[i] + arr[j];
        if(pairSum > target){
            j--;
        } else if(pairSum < target){
            i++;
        } else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}

int main(){

    vector<int> arr = {2, 7, 11, 15};
    int target = 13;

    vector<int>ans = brute(arr, target);

    cout<<ans[0]<<" "<<ans[1]<<endl;

    vector<int>Ans = twoSum(arr, 26);

    cout<<Ans[0]<<" "<<Ans[1]<<endl;

    return 0;
}