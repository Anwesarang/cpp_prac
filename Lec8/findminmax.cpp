#include<iostream>
using namespace std;
int findmax(int n,int arr[]){
        int max = arr[0];
        for(int i = 0;i < n;i++){
        if( arr[i] > max){
            max = arr[i];
        }
    }return max;
}
int findmin(int n,int arr[]){
        int min = arr[0];
    for(int i = 0;i < n;i++){
        if( arr[i] < min ){
            min = arr[i];
        }
    }return min;
}
int main(){
    int n;
    cout << "Enter the size of array: ";cin>>n;
    int arr[n];
    for(int i = 0;i < n; i++){
        cout << "Enter value: ";
        cin >> arr[i];
    }
    int max = findmax(n,arr);
    int min = findmin(n,arr);
    cout << "The max number is: " << max << endl;
    cout << "The min number is: " << min << endl;
    return 0;
}