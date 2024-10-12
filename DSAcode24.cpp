//sort of an array of 0,1 and 2

// 1.brute force
// 2. optimized 
// 3. optimal 

class Sloution{
    public:
    void sort(vector<int>& nums){
        int n=nums.size();
        int count = 0, count1 =0, count2 =0;

// o(n)
        for(int i=0; i<n; i++){
            if(nums[i] == 0) count0++;
            else if(nums[i] == 1) count1++;
            else count2++;
        }
        int idx =0;
        //o(n)
        for(int i=0; i<count0; i++){
            nums[idx++] = 0;
        }
        for(int i=0; i<count1; i++){
            nums[idx++] =1;
        }
        for(int i=0; i<count2; i++){
            nums[idx++] = 2;
        }
    }
}

// Dutch national flag algorithm

// OS--> 0 to low-1 
// 1s--> low to mid-1 
// 2s--> high+1 to n-1 

// unsorted--->(mid-high)

// mid = 0 , high = n-1, low= 0

// while(mid < = high){
//     if(A[mid ==0])
//     swap(A[low], A[mid])
// mid++, low++

// else if(A[mid] ==1)mid++
// else swap (A[high ], A[mid]
// high--)
// }

class solution{
    public:
    void sort(vector<int>& nums){
        int n=nums.size();
        int low =0, mid =0, high = n-1;

        while(mid <=high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                mid++; low++;
            }
            else if(nums[mid] ==1){
                mid++;
            }
            else {
                swap(nums[high], nums[mid]);
                high--;
            }
        }
    }
}