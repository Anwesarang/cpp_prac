#include<iostream>
using namespace std;

long int destobi(int n){
    int pow = 1;
    long int ans = 0;
    while( n > 0){
        int r = n % 2;
        n = n / 2;
        ans = ans + ( r * pow);
        pow = pow * 10;
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the Decimal number: ";cin >> n;
    long int ans = destobi(n);
    cout << "The binary value of the number: "<< ans;
    return 0;
}