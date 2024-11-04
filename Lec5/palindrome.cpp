#include<iostream>
using namespace std;
int palindrome(int val){
    int temp = val;
    int n = val;
    int sum = 0;
    int r = 0;
    while( n > 0){
        r = n % 10;
        sum = (sum * 10) + r;
        n = n/10;   
    }
    if(temp == sum){
        cout << "It is a Palindrome number.\n";
    }else{
        cout << "It is not a Palindrome number\n";
    }
    return sum;
}
int main(){
    int n;
    cout << "Enter a number:";cin>>n;
    int res = palindrome(n);
    cout << "The reverse of the number: " << res << endl;
    return 0; 
}