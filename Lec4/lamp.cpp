//      *
//     * *
//      *
//* * * * * * *
// * * * * * * 
//   * * * *
#include<iostream>
using namespace std;
int main(){
    int n,i,j = 0;
    cout << "Enter the value of n(n<10):";cin >> n;
    cout << "<<< HAPPY DIWALI >>>" << endl;
    int s = 3 * n;
    int o = s;
    for( i = 1; i <= n; i++ ){
        for(j = s - i; j >= 1 ; j--){
            cout << " " ;
        }
        for( j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    int p  = s - n;
    for( i = 1; i < n; i++){
        for( j = 1; j <= p + i; j++){
            cout << " ";
        }
        for( j = 1; j <= n - i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for( i = 0; i < s; i++){
        cout << "* ";
    }
    cout << endl;
    p = s - 1;
    for(i = 1; i < n + 1; i++){
        double r = ((2*i) - 1 );
        for( j = 1; j <= r; j++){
            cout << " ";
        }
        for(j = 1; j <= p; j++){
            cout << "* ";
        }
        p = p - 2;
        cout << endl;
    }
}