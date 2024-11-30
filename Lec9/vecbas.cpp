#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    vec = {1,2,3};
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    vector<int> vec1(3,0);
    cout << vec1[0] << endl;
    cout << vec1[1] << endl;
    cout << vec1[2] << endl;

    vector<char> vec2 = {'a','b','c','d','e'};
    for(char val : vec2){
        cout << val << "  ";
    }
    return 0;
}
