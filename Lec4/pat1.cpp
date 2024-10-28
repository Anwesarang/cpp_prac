#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    char r = 'A';
    n = 5;
    for(i = 1; i<=n; i++){
        for(j = 1; j<=n; j++){
            cout << r << " ";
            r++;
        }
    cout << endl;
    }
    cout << "After loop value: " << r;
}