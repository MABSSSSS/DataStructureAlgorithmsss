#include<iostream>
using namespace std;

//function definition
// int printhello(){

//   cout<<"hello\n";
//   return 3;
// }

// int sum(double a, double b)
// {
//     double s = a+b;
//     return s;

//    }

// int min(int a, int b)
// {//Parameters
//     if (a<b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }


//Calculate sum 1 to N
// void sumN(int n)
// {
//     int sum=0;
//     for (int i=1;i<n;i++){
//         sum+=1;
//     }

// }

//Calculate N factorial

// int factorial( int n)
// {
//     int fact = 1;
//     for(int i=1;i<=n;i++){
//         fact *=i;

//     }
//     return fact;
// }

// void fun()
// {
//     int x = 35;
//     cout<<"x = "<<x<<endl;

// }

//   int sum(int a, int b)
//   {
//     a = a+10;
//     b = b+10;
//     return a+b;
  
//   }
  
// void change(int x)
// {
//     x =2*x;
//     cout<<"x="<<x <<endl;
// }


// Calculate sum of digits of numbers

// int sumofdig(int num){
//     int dig = 0;
//     while(num>0)
//     {
//         int lasdig = num% 10;
//         num /=10;

//         dig += lasdig;
//     }
//     return dig;
// }

//Calculate nCr bionomial coefficient of number

// int fact(int n)
// {
//     int fact = 1;

//     for (int i=1; i<=n;i++)
//     {
//         fact *=i;
//     }
// }
//   int cCr( int n, int r)
//   {
//     int factn = factorial(n);
//     int factr = factorial(r);
//     int factnmr = factorial(n-r)

//     return factn / (factr* factnmr);
//   }

//fabonacci series 

// int fabo(int n)
// {
//     if (n<=1)
//     {
//         return n;
//     }
//     int a=0,b=1, c;
//     for ( int i=2;i<= n; i++)
//     {
//         c= a+b;
//         a = b;
//         b =c;
//     }
//     return b;
// }

//function to print prime numers from 2 to N

// bool is(int n)
// {
//     if (n<=1)
//     return false;
//     for(int i=2; i* i<=n; i++)
//     {
//         if (n%i == 0)
//         return false;
//     }
//     return true;

// }
//for printing prime numbers

// void printP( int N)
// {
//     for( int i=2; i<= N; i++)
//     {
//         if (is(i))
//         {
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl;
// }

// Function to check if number is Prime or not

bool Prime( int n)
{
    if (n<=1)
    return false;
for(int i=2; i*i<=n; i++)
{
    if (n% i ==0)
    return false;
}
 return true;
}

int main(){

    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    if (Prime(num))
    {
        cout<<num<<endl;

    }
    else{
        cout <<num<< "ïs not a prime number"<<endl;
    }
//     int n=4; r = 3;
//    cout<< nCr(n,r)<<endl;
//   int N=8;
//   cout<<"Prime numbers from 2 to "<<N <<":";
//   printP(N);

//   return 0;

    // cout<<"sum = "<<sumofdig(2356)<<endl;
//  int n;
//  cin>>n;
//  cout<<"The "<<n<<" Fbonacci Numer is "<<fabo(n)<<endl;


  return 0;
    // int a=5;b=4;
    // cout<<sum(a,b)<<endl;
//   int x = 7;
//   change(x);
//   cout<<"x ="<< x <<endl;

    // return 0;
    // cout<<"minimum ="<<min(5,4)<<endl;//arguments are actual values for passing values
// cout<<sumN(5)<<endl;
// cout<<sumN(10)<<endl;
    //function call/invoke 
//    cout<<sum(10,5)<<endl;
    // cout<<printhello();

    // cout<<"val "<< val <<endl;
// cout<<factorial(3)<<endl;

//    fun();
   


// return 0;

}
