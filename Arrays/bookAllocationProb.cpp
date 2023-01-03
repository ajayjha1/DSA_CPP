//Book Allocation Problem

#include <iostream>

using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    
    for(int i = 0; i < n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m){
    int sum = 0;
    int s = 0;
    int ans = -1;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    
    int e = sum;
    
    int mid = s + (e-s)/2;
    
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int main() {
    // Write C++ code here
    int arr[5] = {10, 20, 30, 40, 50};
    
    cout << allocateBooks(arr, 5, 2); // Array length is 5 and no. of students is 2
    
    return 0;
}