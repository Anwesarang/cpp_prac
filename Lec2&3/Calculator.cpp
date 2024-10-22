#include<iostream>
using namespace std;

int main(){
    char ch;
    int a,b;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
    cout << "WHAT DO WANT TO DO?\nEnter + for addition:\nEnter - for subtraction:\nEnter * for multiplication:\nEnter / for division:\nEnter '%' for remainder:\nCHOOSE:";
    cin >> ch;
    if( ch == '+'){
        cout << "sum = " << (a + b) << endl;
    }else if( ch == '-'){
        cout << "diff = " << (a - b) << endl;
    }else if( ch == '*'){
        cout << "product = " << (a * b) << endl;
    }else if( ch == '/'){
        float div;
        div = (float)a / b;
        cout << "div = " << div << endl;
    }else if( ch == '%'){
        cout << "remainder = " << (a % b) << endl;
    }else{
        cout << "Invalid choice." << endl;
    }
    return 0;
}