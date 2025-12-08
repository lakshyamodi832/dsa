#include<iostream>
using namespace std;

int binToDec(int bin){
    int ans = 0, pow = 1;
    
    while (bin > 0){
        int rem = bin % 10;
        ans += rem * pow;

        bin /= 10;
        pow *= 2;
    }
    
    return ans;
}

int main(){
    cout<<binToDec(10110)<<endl;
    return 0;
}