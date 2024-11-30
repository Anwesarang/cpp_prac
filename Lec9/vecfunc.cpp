#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5,6,7};
    for( int val : vec){
        cout << val << "  ";
    }
    cout << endl;
    cout << "The size of the vector = " << vec.size() << endl;
    vec.push_back(8);
    vec.push_back(9);
    vec.push_back(10);
    for( int val : vec){
        cout << val << "  ";
    }
    cout << endl;
    vec.pop_back(); //10
    vec.pop_back(); //9
    vec.pop_back(); //8
    vec.pop_back(); //7
    vec.pop_back(); //6
    for( int val : vec){
        cout << val << "  ";
    }
    cout << endl;
    cout << "The first number = " << vec.front() << endl; //1
    cout << "The last number = " << vec.back() << endl; // 5
    cout << "The middle number = " << vec.at(2) << endl; //3
    return 0;
}