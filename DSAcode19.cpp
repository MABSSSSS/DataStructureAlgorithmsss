#inlcude<iostream>
using namespace std;
int main()
{
    //search space indentification checking first
    // 1. mid = s+(l-s)/2
    // A[mid-1]!= A[mid]!= A[mid+1]--> return mid
    // 3.left or right side selection

 //perf ect duplicate --> even  
//  duplicate--> single --> odd

// PSEUDOCODE

// st = 0 , end =n-1
// wjile(st <= end){
//     mid = st(end -st)/2

//     if (A[mid]!=A[mid] ! = A[mid]) 
//     return mid;

// if(mid %2==0)
// if(A[mid-1] =A[m] -->en d= mid-1)
// ele--> st =mid+1

// esle
// if(A[mid-1] == A[m] --> st =mid+1
// else--> end =mid -1
// )
// }
//     return 0;

class Soultion{
    public:
    int singleNon(vector<int>& A)
    {
        int n= A.szie();

        if (n==1) return A[0];

        int st =0 , end = n-1;
        while(st <= end){
            int mid =st +(en-st)/2;

            if(mid ==0 && A[0] != A[1] ) return A[mid];
            if(mid ==n-1 && A[n-1]  != A[n-2]) return A[mid];
            
            if(A[mid-1] != A[mid] && A[mid] != A[mid+1] )return A[mid];
            
            if(mid %2 == 0) {
                if(A[mid-1] == A[mid]){
                    end = mid -1;
                }
                else {
                    st = mid +1;
                }
            }
            esle{
                if(A[mid -1] ==A[mid]){
                    st = mid +1;
                }
                else {
                    end = mid+1 ;
                }
            }

        }
    }
}

}