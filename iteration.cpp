#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int s, int e, int k){
    int mid = (s+e)/2;

    while(s<e){
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]<k){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
}


int main(){
    int arr[] = {1,2,3,4,5};

    int n = 5;
  cout<<binarySearch(arr,0,5,5);
    return 0;
}