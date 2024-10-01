//Peak index in Mountain Array:

// case:1 mid--> Peak
// case:2 mid-->

// mid-> left(increase)-> rigth search
// mid-> right(decrease)-> left search 


// 1. search space(o, n-1)not exist
// 2. unnecessary no checks exist

class Solution {
public:
int peakIndex(vector<int>& A){
    int st =1, end =A.size()-2;   //O(logn)

    while(st <= end){
        int mid =st + (end -st)/2;

        if(A[mid] <A[mid] && A[mid] > A[mid +1 ])
        {
            return mid;
        }
        else if(A[mid-1] < A[mid]) {

            st =mid + 1;

        }
        else {
            end = mid -1;
        }
    }
}
return -1;
}
