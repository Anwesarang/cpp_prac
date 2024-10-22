#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter letter:";
    cin >> ch;
    if ( ch >= 'A' && ch <= 'Z' ){
        cout << "Uppercase\n";
    }else{
        cout << "Lowercase\n";
    }


    cout << "Enter letter:";
    cin >> ch;
    if ( ch >= 65 && ch <= 90 ){
        cout << "Uppercase\n";
    }else{
        cout << "Lowercase\n";
    }

    return 0;
}