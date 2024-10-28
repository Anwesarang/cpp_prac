#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    n = 13;
    char r = 'A';
    for(i = 1; i <= n; i++){
        for( j = 1; j <= i; j++){
            cout << r << "  ";
        }
    r++;
    cout << endl;
    }
    for(i = n ;i >= 1; i--){
        for(j = 1; j <= i; j++){
            cout << r << "  ";
        }
    r++;
    cout << endl;
    }
}