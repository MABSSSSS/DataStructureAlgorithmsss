class Solution {
    public:
    void merge(vector<int>& A,int m, vector<int>& , int n) {
        int idx = m+n-1, i=m-1,j=n-1;

        while(i >=0 && j >=0){
            if(A[i] >= B[j]) {
                A[idx--] = A[i--];
            }
            else {
                A[idx--] = B[j--];
            }
        }//Space complexity 0(1) 
        //T.C O(m+n)
        // O(nlogn)
        while(j>= 0){
            A[idx--] = B[j--];
        }
    }
}


class Solution {
    public:
    void next(vector<int>& A){
        int pivt = -1, n = A.size();

        for(int i=n-1; i>=0; i--){
            if(A[i] < A[i+1]) 
            {
                pivot = i;
                break;
            }
        }

        if(pivot == -1){
            reverse(A.begin(), A.end());
            return;
        }

        for(int i=n-1; i>pivot; i--){
            if(A[i] > A[pivot]){
                swap(A[i], A[pivot]);
                break;
            }
        }

        int i = pivot+1, j =n-1;

        while( i<=j){
            swap(A[i++], A[j--]);//TC O(n)  
        }
    }
}

// or by thisst eps
void next_permutation(vector<int>& A)
next_permutation(A.begin(), A.end());