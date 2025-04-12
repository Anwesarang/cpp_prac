#include<iostream>
#include<algorithm>
using namespace std;

void subarray(int arr[],int n){
    for(int r = 0; r < n; r++){
        for( int col = r; col < n; col++){
            for( int i = r; i <= col; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}
int maxsubarr(int arr[],int n){
    int maxsum = arr[0];
    for(int r = 0; r < n; r++){
        int cursum = 0;
        for( int col = r; col < n; col++){
            cursum = cursum + arr[col];
            maxsum = max(cursum,maxsum);
        }
    }
    return maxsum;
}
int main(){
    int n;
    cout << "Enter no. of elements: ";cin>>n;
    int arr[n];
    cout << "\nEnter the elements: \n";
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    cout<< "The subarrays are:\n";
    subarray(arr,n);
    int res = maxsubarr(arr,n);
    cout << "\nThe max sub array is: " << res;
    return 0;
}