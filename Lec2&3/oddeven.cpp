#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number:";
    cin >> num;

    if( num % 2 == 0){
        cout << "The Number is even" << endl ;
    }else{
        cout << "The number is odd" << endl;
    }
    return 0;
}