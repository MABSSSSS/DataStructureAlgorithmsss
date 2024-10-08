
// mid value -->max allowed Time
// -continous manner.

//painter's pointer probelm:

// bool isPossible(arr[],n,m,mid maxAllowedTime){
//     pointers=1,time=0

//     for(i=0, i<n;i++){
//         if(time + arr[i] <=maxAllowedTime)
//         time +=arr[i]
//     else{
//         pointers ++
//         time =arr[i]
//     }
//     }

//     painters <=m-->true or-->False 
// }

// Binarys earch applied on poiisble values of array.


#include<iostream>
#include<vector>
using namespace std

bool isPossible(vector<int> &arr, int m, int n, int m, int maxAllowedTime){
    int painters =1, time =0;

    for(int i=0;i<n;i++){
        if(time + arr[i] <=maxAllowedTime){
            time += arr[i];
        }
        else {
            painters ++;
            time = arr[i];
        }
    }
    return pinters <= m;
}

int minTimePaint(vector<int> &arr, int n, int m){
    int sum = 0, maxVal =INT_MIN;
    for(int i=0; i<n; i++){
        sum +=arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal, end =sum. ans =-1;

    while(st <=end){
        int mid =st+ (end-st)/2;

        if(isPossible(arr, n, m , mid)){
            ans =mid;
            end =mid -1;
        }
        else {
            st =mid+1;
        }
    }
    return ans;
}

int main(){
    
    vector<int> arr = {40,30,10,20};
    int n=4, m=2;

    cout<<minTimePaint(arr, n ,m) <<endl;
    return 0;
}