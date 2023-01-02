#include<iostream>

using namespace std;  

int peakIndex(int arr[]){
    int s = 0;
    int e = sizeof(arr) - 1;
    
    int mid = s + (e-s)/2;
    
    
    while(s<e){
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        
        mid = s + (e-s)/2;
    }
    return s;
}

int main(){
    int arr[20] = {1,3,7,8,10,7,5,3,2,1};
    cout<<"Peak index is "<<peakIndex(arr);
    return 0;
}