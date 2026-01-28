 #include<iostream>
using namespace std;

void bruteForce(int arr[], int n){
    int maxSum = INT_MIN;
    int ansSt;
    int ansEnd;
    for(int st = 0; st < n; st++){
        int currSum = 0;
        for(int end = st; end < n; end++){
            currSum += arr[end];
            if(currSum > maxSum){
                maxSum = currSum;
                ansSt = st;
                ansEnd = end;
            }
        }
    }
    
    cout<<"Maximum sum of subarray is "<<maxSum<<" of ";

    for(int i = ansSt; i <= ansEnd; i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}

void kadane(int arr[], int n){
    int currSum = 0, maxSum = INT_MIN, st = 0, ansSt, ansEnd;
    for(int i = 0; i < n; i++){
        currSum += arr[i];
        if(currSum > maxSum){
            maxSum = currSum;
            ansSt = st;
            ansEnd = i;
        }
        if(currSum < 0){
           currSum = 0;
           st = i+1;
        }    
    }
    cout<<"Maximum sum of subarray is "<<maxSum<<" of ";
    for(int i = ansSt; i <= ansEnd; i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int st = 0; st < n; st++){
        for(int end = st; end < n; end++){
            for(int i = st; i <= end; i++){
                cout<<arr[i]<<", ";
            }
            cout<<" ";
        }
        cout<<endl; 
    }

    bruteForce(arr, n);
    
    kadane(arr, n);

    return 0;
}