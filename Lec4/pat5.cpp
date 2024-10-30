#include<iostream>
using namespace std;
int main(){
    int i,j,r;
    int n = 4;
    for(i = 1; i<=n; i++){
        r = i;
        for(j = 1; j <= i;j++){
            cout << r << " ";
            r--;
        }
        cout << endl;
    }
}