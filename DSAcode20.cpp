//st=0,end=sum(arr)
//while(st<=end){
//  mid =st+(end-st)/2
//  if(isvalid(mid))
// end =mid-1
//  else
// st =mid+1}

// pseudo code:
// bool isvalid(arr[],n,m,mid){
//     int st=1, pages=0
//     for(int i=0,i<n,i++ ){
//         if(pages+arr[i] <=allowedpages){
//             pages+= arr[i];

//         }else{
//             st++
//             pages = arr[i]
//         }

//     }st > m-->invaoid -->false
//     st<=m-->valid-->true
// }

#include<iostream>
#include<vector>
using namespace std

bool isValid(vector<int> &arr, int n,int m, int maxPages){
    int stu =1, pages=0;

    for(int i=0;i<n;i++){
     if(arr[i] > maxPages)
     {return false;}
    
    if (pages+ arr[i] <=maxPages){
        pagess += arr[i];
    }
    else {
        stu++:
        pages =arr[i];
    }
}
   return students >m ? flase :true;
   }

int allowedBooks(vector<int> &arr, int n, int m){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int st =0, end=sum;

    while(st <= end){
        int mid = st + (end-st)/2;

        if(isValid(arr,n,m,mid)){
            ans =mid;
            end =mid -1;

        }
        else{
            st = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {2,1,3,4};
    int n=4,m =2;

    cout<<allowedBooks(arr, n ,m) <<endl;
    return 0;
}