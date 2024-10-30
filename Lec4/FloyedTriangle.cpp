//1
//2 3
//4 5 6
//7 8 9 10
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    n = 4;
    int r = 1;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            cout << r << " ";
            r++;
        }
        cout << endl;
    }
}