//      1
//    1 2 1
//  1 2 3 2 1
//1 2 3 4 3 2 1 
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    n = 7;
    for( j = 1;j <= n; j++){
        int r = 1;
        for(i = n-j ; i >= 1; i--){
            cout << "  ";
        }
        for(int z = 1; z <= j; z++){
            cout << r << " ";
            r++;
        }
        int p = r-2;
        for(i = 1; i < j; i++){
            cout << p << " ";
            p--;
        }
        cout << endl;
    }
}