#include<iostream>
using namespace std;

//global variable
int x=9;
//Scope of functions
// void v(){
//     int x=11;
// }

int main()
{
// v();
// cout<<x<<endl;

cout<<x<<endl;

    int a=4, b=5;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;
    cout<<(a<<5)<<endl;
    cout<<(b>>2)<<endl;
    cout<<(10>>1)<<endl;
    cout<<5-(7*7)<<endl;
    cout<<(5*9%7)<<endl;

    //Datatypr modifiers
   cout<<sizeof(int)<<endl;
   cout<<sizeof(long int)<<endl;
   cout<<sizeof(short int)<<endl;
   cout<<sizeof(long long int)<<endl;
  
  //unsigned datatype
  unsigned int y =11;

  cout<<y<<endl;
//scope checking for block of code

// {
//     int x=19;
//     cout<<x;
// }
// cout<<x<<endl;

//Scope checking
// for ( int i=0; i<10; i++)
// {
//     for ( int j=0;i<10;i++ )

// }

//Scope of variable
//  if (3>1)
//  {
//     int x=3;
//  }



//homework


    int n, num = 0;  // 'no' will store the reversed number

    // Input the integer
    cout << "Enter an integer: ";
    cin >> n;

    // Store the original sign of the number
    int sign = 1;
    if (n < 0) {
        sign = -1;
        n = -n;  // Work with the positive value of n
    }

    // Reverse the number using basic operations
    while (n > 0) {
        int last_digit = n % 10;  // Get the last digit
        num = num * 10 + last_digit;  // Add the last digit to the reversed number
        n = n / 10;  // Remove the last digit from n
    }

    // Restore the original sign
    num = num * sign;

    // Output the reversed integer
    cout << "Reversed integer: " << num << endl;

    return 0;

    //question:1 homework
     int n;

    // Input the integer
    cout << "Enter an integer: ";
    cin >> n;

    // Handle the case where n is less than or equal to 0
    if (n <= 0) {
        cout << n << " is not a power of 2" << endl;
        return 0;
    }

    // Check if the number is a power of 2 using division
    while (n % 2 == 0) {
        n = n / 2;
    }

    // If n is reduced to 1, it's a power of 2
    if (n == 1) {
        cout << "Yes, it is a power of 2" << endl;
    } else {
        cout << "No, it is not a power of 2" << endl;
    }

    // by using bitwise operator
     int n;

    // Input the integer
    cout << "Enter an integer: ";
    cin >> n;

    // Check if the number is a power of 2 using bitwise operations
    if (n > 0 && (n & (n - 1)) == 0)
     {
        cout << "Yes, it is a power of 2" << endl;
    } 
    else
     {
        cout << "No, it is not a power of 2" << endl;
    }

}

