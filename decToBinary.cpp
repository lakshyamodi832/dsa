#include<iostream>
using namespace std;

int decToBinary(int decNum){
    int ans = 0, pow = 1;

    while(decNum>0){
        int rem = decNum % 2;
        decNum /= 2;

        ans += rem * pow;
        pow *= 10;
    }

    return ans;
}

int main(){
    int a = decToBinary(50);
    cout<<a<<endl;

    for(int i = 0; i <= 69; i++){
        cout<<decToBinary(i)<<endl;
    }

    return 0;
}