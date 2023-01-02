//Pivot in an array

#include <iostream>

using namespace std;


int getPivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    
    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main() {
    // Write C++ code here
    
    int arr[5] = {10, 12, 14, 1, 6};
    cout<<"Pivot element is at "<<getPivot(arr, 5);

   
    return 0;
}