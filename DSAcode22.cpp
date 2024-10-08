//Aggressive Cow Problems:

// Assing  C rows to N stalls such that min distance between them is largest possible.
// Return  largest minimum possible.

// Pesudo code:st =1 end = maxVal in arr - min val in arr (mainn concept line)

// while(st <= end){
    // mid =st+(e-s)/2
    // if(isPossible(mid))
    // 1. sort the array
    // 2. cows =1 lastpos =arr[0]
//     for(i=1; i<n; i++){
//         if(arr[i] - laststallpos)> =mid
// {

// }   
//  }
// }

--.Book Allocation (min possible max pages)
-->Paint pointers(min possible max time)
-->Aggressive cows (max possible min distance)

ans -->Range-->Binary search -->check it become anser or not--.then chekc which searc h is possible



#include<iostream>
#include<vector>
using namespace std

bool isPossible(vector<int> &arr, int N, int C, int minAllowedDistance){

 int cows =1, laststallpos =arr[0];

 for(int i=1; i<N;i++){
    if(arr[i] -laststallpos >= minAllowedDistance){
        cows++;
        laststallpos =arr[i];
    }
    if(cows ==C){return true
    }
 }  

}

int getDistance(vector<int> &arr, int N, int C){
 

    sort(arr.begin(), arr.end());

    int st=1,end =maxVal -minVal, ans =-1;

    while(st<=end){
        int mid =st+(end-st) /2;

        if(isPossible(arr, N, c,mid)){
            ans =mid;
            st =mid+1;
        }
        else{
            end =mid - 1;
        }
    }
}

int main(){
    int N=5,C=3;
    vector<int> arr={1,2,3,4,9};
    cout<<getDistance(arr,N.C)<<endl;
    return 0;
}