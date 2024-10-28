#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    n = 5;
    for(i = 1; i <= n; i++){
        int r = 1;
        for( j = 1; j <= i; j++){
            cout << r << "  ";
            r++;
        }
    cout << endl;
    }
    for(i = n-1 ;i >= 1; i--){
        int r = 1;
        for(j = 1; j <= i; j++){
            cout << r << "  ";
            r++;
        }
    cout << endl;
    }
}