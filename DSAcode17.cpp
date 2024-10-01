// Search in a rotated sorted Array:

// search space selection

// RS Array -> Left sorted and right sorted array:

#include<iostream>
using namespace std;
int main()
{


    int search(vector<int>& nums, int tar){
        int st = 0, end =nums.size()-1;

        while(st <= end)
        {
            int mid =st+(end - st)/2;
            if(A[mid] ==tar){
                return mid;
            }
            if(A[st] <= A[mid]){
            if (A[st] <= tar && tar <= A[mid]){
                end = mid -1;
            }
            else {
                st =mid+1;
            }
        }
        else {
            if(A[mid] <= tar && tar <= A[end]){
                st =mid +1;
            }
            else {
                end =mid -1;
            }
        }
    }
    
}
return 0;
}