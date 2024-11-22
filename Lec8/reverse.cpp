#include<iostream>
using namespace std;
void reversearr(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start < end ){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << "After reversing the array: " << endl;
    for( int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }
}
int main(){
    int n;
    cout<< "Enter the size of array:";cin>>n;
    int arr[n];
    cout << "Enter the elements of array: " << endl;
    for( int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "The elements of array are: "<< endl;
    for( int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
    reversearr(arr,n);
    return 0;
}