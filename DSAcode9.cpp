#include<iostream>
using namespace std;
int main()
{
//     int n=5;
//     int arr[5] = {1,2,3,4,5};

//     for(int st=0; st<n;st++)
//     {
//         for(int end=st; end<n; end++)
//         {for(int i=st; i<=end; i++){
//             cout<< arr[i];
//         }
//         cout<< " ";
//     }
//     cout<< endl;
// }

// int n = 5;
// int arr[5] ={1,2,3,4,5};

// int maxSum = INT_MIN;

// for(int st=0; st<n;st++)
// {
//     int currSum = 0;
//     for(int end=st; end<n; end++)
//     {
//         currSum += arr[end];
//         maxSum = max(currSum, maxSum);
//     }
// }
// cout<<"max subarray sum = "<<maxSum <<endl;


class Solution{
    public:
    int maxSubArray(vector<int>& nums)
    {
        int crSum = 0,maxSum=INT_MIN;
        for(int val: nums)
        {
            crSum += val;
            maxSum = max(currSum, maxSum);

            if (currSum < 0)
            {
                currSum = 0;
            }
        }
        return maxSum;
    }


}

}