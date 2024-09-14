#include<iostream>
#include <vector>
using namespace std;
// int main()
// {
//    vector<int> vec(,5,0)
// //    vector<int> vec = {1,2,3};//0
// //    cout<<vector[0]<<endl;
//  for(int i : vec )
//  {
//     cout<<i <<endl;
//  }

//Vector Size

//  vector<char> vec{'a','b','c','d','e'};
//  vector<int> vec;
 
// cout << "size = " <<vec.size() << endl;
// vec.push_back(25);
// vec.push_back(35);
// vec.push_back(45);


// cout<<"After push back size =" <<vec.size() <<endl;

// vec.pop_back();

// cout<<vec.front() <<endl;

// cout<<vec.at(0) <<endl;


//  for(char val : vec )
//  {//for each loop
//     cout<< val <<endl;
//  }


    // vector<int> vec;

    // vec.push_back(0);
    // vec.push_back(1);
    // vec.push_back(2);

    // cout<< vec.size() <<endl;
    // cout<< vec.capacity() <<endl;

    //Problem:1
//Single Number
// class Solution{
//     public:
//      int singleNumber(vector<int>& nums)
//      {
//        int ans =0;
//        for (int val: nums)
//        {
//         ans= ans ^ val;
//        }
//        return ans;
      
//      }
// }


//HOMEWORK

// int linearSearch(vector<int>& nums, int target)
// {
//     for( int i=0; i<nums.size(); i++)
//     {
//         if (nums[i] == target)
//         {
//             return i;
//         }
//     }
//     return -1;
// }


// int main()
// {
    
//     vector<int> nums;
//     nums.push_back(10);
//     nums.push_back(2);
//     nums.push_back(3);
//     nums.push_back(4);
//     nums.push_back(5);
//     nums.push_back(6);

//     int target=2;

//     int index = linearSearch( nums, target);
    
//     if(index!=-1)
//     {
//         cout<< "Element found at index" <<index <<endl;
//     }
//     else
//     {
//         cout << "Element not found." << endl;
//     }

//     return 0;
// }


// Homework:2

void reverseVector(vector<int>& nums)
{
    int start = 0;
    int end = nums.size() -1;


 
 while(start < end)
 {
    int temp = nums[start];
    nums[start] = nums[end];
    nums[end] = temp;

    start++;
    end--;
 }
}
int main()
{
    vector<int> nums;
    nums.push_back(11);
    nums.push_back(12);
    nums.push_back(13);
    nums.push_back(14);
    nums.push_back(15);
    nums.push_back(16);


    cout<< "Original vector: ";
    for ( int i=0; i<nums.size();i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    reverseVector(nums);

    cout<< "Reversed vector: ";
    for ( int i=0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;


}
