#include<iostream>
using namespace std;

int bitodec(long int n){
    int pow = 1;int ans = 0;int r = 0;
    while(n > 0){
        r = n % 10;
        n = n / 10;
        ans = ans + (r * pow);
        pow = pow * 2;
    }
    return ans;
}

int main(){
    long int n;
    cout << "Enter the binary number: ";cin >> n;
    int ans = bitodec(n);
    cout << "The decimal number of the binary number: " << ans;
    return 0;
}