#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    n = 7;
    int r = 1;
    for(i = 1; i <= n; i++){
        for( j = 1; j <= i; j++){
            cout << r << "  ";
        }
    r++;
    cout << endl;
    }
    r = n-1;
    for(i = n-1 ;i >= 1; i--){
        for(j = 1; j <= i; j++){
            cout << r << "  ";
        }
    r--;
    cout << endl;
    }
}