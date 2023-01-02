//find the first occurence and the last ocuurence of an element in an array

#include <iostream>

using namespace std;

int firstOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
    if(arr[mid] == key){
        ans = mid;
        e = mid - 1;
    }
    else if(arr[mid] < key){
        s=mid+1;
        
    } else if(arr[mid] > key){
        e = mid - 1;
    }
    mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while(s<=e){
        
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        } else if(arr[mid] > key){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    
    return ans;
}

int main() {
    // Write C++ code here
    int arr[8] = {1,4,5,6,9,9,9,12};
    
    cout<<"First occurence of 9 is at Index " << firstOcc(arr,8,9)<<"\n";
    cout<<"Last occurence of 9 is at Index " << lastOcc(arr,8,9);
    return 0;
}