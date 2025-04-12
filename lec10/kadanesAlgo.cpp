#include<iostream>
#include<vector>
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
    int cursum = 0;
    int maxsum = arr[0];
    for( int i = 0;i < n; i++){
        cursum += arr[i];
        maxsum = max(cursum,maxsum);
        if(cursum < 0){
            cursum = 0;
        }
    }
    return maxsum;
}


int main(){
    int n = 7;
    int arr[7] = { -1, 2, 7, -4, 5, -6, 8};
    cout<< "The subarrays are:\n";
    subarray(arr,n);
    int res = maxsubarr(arr,n);
    cout << "\nThe max sub array is: " << res;
    return 0;
}