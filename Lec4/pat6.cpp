#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    n = 4;
    int r = 1;
    for(i = 0; i < n; i++){
        for(j = 0; j < i ; j++){
            cout << "  ";
        }
        for(j = n - i; j >= 1; j--){
            cout << r << " ";
        }
        r++;
        cout << endl;
    }
}