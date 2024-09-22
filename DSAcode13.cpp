#include<iostream>
using namespace std;
int main()
// {


//     return 0;
// }

class Solution {
public:
   int maxArea(vector<int>& height) {
    int maxWater = 0;
    int lp = 0, rp = height.size()-1;

    while(lp <rp)
    {
        int w =rp-lp;
        int ht = min(height[lp], height[rp]);
        int currWater = w* ht;
        maxWater = max(maxWater, currWater);

        height[lp] < height[rp] ? lp++ : rp--;

    }
    return maxWater;


//     for(int i=0; i<height.size(); j++)
//     {
//         int w = j-1;
//         int ht = min(height[i], height[j]);
//         int currWater = w * ht;
//         maxWater = max(maxWater, currWater);
//     }
//    }
//    return maxWater;

}

}