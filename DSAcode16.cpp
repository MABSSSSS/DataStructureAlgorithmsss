
#include<vector>
#include<iostream>
using namespace std;
//Binary search 

//1.find mid element
//mid =start+end/2

//1,if tar>arr[mid] then search in second half otherwise 
//2.if tar<arr[mid] search in first half.
//3.arr=mid then  answer is mid index

//1st half (start to mid-1)
//2nd (mid+1 to end value)

//start=0,end=mid-1 -> while(st <=end){ mid =(st+end)/2 ->
//if tar>arr[mid] ->str=mid+1
//else if tar <arr[mid]
//end =mid-1
//else 
//return mid   }
// return -1;

//optimization
// mid =st +(end-st)/2

// Time complexity:  n->n/2->n/4 ->n/8-> 1 TC is oprtion for n to make it equal to One

// TC->O(K)
// O(logn)

// WITH RECURSION:
// st =0,end=5
// make call stack 




// int binary(vector<int> arr, int tar)
// {
//     int st=0,end=arr.size()-1;

//     while(st<=end){
//         int mid= st + (end-st)/2;

//         if(tar > arr[mid])
//         {
//             st =mid + 1;
//         }
//         else if(tar < arr[mid]){
//             end =mid -1;
//         }
//         else {
//             return mid;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> arr1 = {-1,0,3,4,5,9,12};
//     int tar=12;

//     cout<<binary(arr1,tar)<<endl;
    
//     vector<int> arr2 ={-1,0,3,5,9,12};
//     int tar=0;
     


//     return 0;
    
//     }



// Recursive binary search function
int recBinary(vector<int> arr, int tar, int st, int end) {
    if (st <= end) {
        int mid = st + (end - st) / 2;

        if (tar > arr[mid]) {
            return recBinary(arr, tar, mid + 1, end); // Search in the right half
        } else if (tar < arr[mid]) {
            return recBinary(arr, tar, st, mid - 1); // Search in the left half
        } else {
            return mid; // Target found
        }
    }
    return -1; // Target not found
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar = 12;

    // Perform binary search on arr1
    cout << "Index of " << tar << " in arr1: " << recBinary(arr1, tar, 0, arr1.size() - 1) << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int tar2 = 10;

    // Perform binary search on arr2
    cout << "Index of " << tar2 << " in arr2: " << recBinary(arr2, tar2, 0, arr2.size() - 1) << endl;

    return 0;
}
