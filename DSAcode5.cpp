#include<iostream>
using namespace std;


// int decToBinary(int decNum) 
// {
//     int ans = 0,pow =1;

//     while(decNum>0)
//     {
//         int rem = decNum%2;
//         decNum/=2;

//         ans +=(rem * pow);
//         pow *=10;

//     }
//     return ans ;

// }
// int main()
// {
//    int decNum = 50;
//    cout <<decToBinary(decNum) <<endl;
//     return 0;
// }

 //for 1 to 10 by using for loop
// int decToBinary(int decNum) 
// {
//     int ans = 0,pow =1;

//     while(decNum>0)
//     {
//         int rem = decNum%2;
//         decNum/=2;

//         ans +=(rem * pow);
//         pow *=10;

//     }
//     return ans ;

// }
// int main()
// {
//    int decNum = 50;

//    for (int i=1; i<=10; i++)
//    {
//     cout<<decToBinary(i)<< endl;
//    }

//    cout <<decToBinary(decNum) <<endl;
//     return 0;
// }


//Binary to decimal


int decToBinary(int decNum) 
{
    int ans = 0,pow =1;

    while(decNum>0)
    {
        int rem = decNum%2;
        decNum/=2;

        ans +=(rem * pow);
        pow *=10;

    }
    return ans ;
}
int bintodec(int binNum)
{
    int ans = 0, pow = 1;

    while(binNum>0){
        int rem = binNum % 10;
        ans += rem * pow;

        binNum /= 10;
        pow*= 2;

    }
   return ans;


}
int main()
{
   cout<<bintodec(1010) <<endl;
    return 0;
}
