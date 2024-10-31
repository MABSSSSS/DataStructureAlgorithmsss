// Prime Numbers:

// for checking n is prime number or not .
// if it is not divisible by nay other number or not.

#include<iostream>
using namspace std;

string isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            return "Non Prime";
        }
    }
    return "Prime";
}

int main(){
    int n=42;
    cout<< isPrime(n)<<endl;
    return 0;
}

// question solution
class solution {
    public:
    int countPrimes(int n){
        vector<bool> isPrime(n+1, true);
        int count =0;

        for(int i=2; i<n; i++){
            if(isPrime[i]){
                count++;

                for(int j=i*2; j<n; j=j+i){
                    isPrime[j] = false;
                }
            }
        }
        return count;
    }
}

// digit of number :

void printDigits(int n){
    int sum=0
    while(n!=0){//while loop TC is o(log10n).
        int digit =n%10;
        count++;

        n=n/10;
    }
    cout<<sum<<endl;

}
intmain(){
    int n= 3568;
    cout<<(int)(log10(n)+1)<<endl;
    printDigits(n);
    return 0;
}

//Armstrong Number:
// A number that is equal to sum of cubes of its digits.


bool isArmstrong(int n){
     int copyN = n;
     int sumofcubes =0;

     while(n!=0){
        int dig =n%10;
        sumofcubes += (dig* dig * dig);

        n = n/10;

     }
     return sumofcubes == copyN;
}

int main(){
    int n=153;

    if(isArmstrong(n)){
        cout<<"is an armstrong number\n";
    }
    else {
        cout<<"Not an rmstrong number\n"
    }
    return 0;
}


// GCD(Greatest common divisor)
//Euclid's algorithm (for calculating GCD efficiently)

int gcd(int a,b){
    while(a>0 && b>0){
        if(a>b){
            a =a%b;
        }
        else {
            b =b%a;
        }
    }

    if(a==0)
    return b;
return a;
}

int gcdRec(int a, int b){
    if(b==0)
    return a;

return gcdRec(b,a%b);
}

int lcm(int a.b)
{
    int gcd =gcd(a,b);
    return (a*b)/gcd;
}





int main(){
    cout<<lcm(20,25)<<endl;
    cout<<gcdRec(20.24)<<endl;
    cout<<gcd(0,24)<<endl;
    return 0;
}

// LCM...
lowest common multiple least 

//reverse number
class solution{
    public:
    int reverse(int n){
        int rev =0;

        while(n!=0){
            int dig = n%10;

if(revNum> INT_MAX/10 || revNum < INT_MIN/10){ 

       return 0;
}
            revNum = revNum * 10 + dig;
            n =n/10;
        }
        return revNum;
    }
}

// Palindrome Number:

class Solution{
    public:
    int reverse(int n){
        int revNum = 0;

        while(n! =0){
            int dig =n%10;
            if(revNum > INT_MAX/10 || revNum < INT_MIN/10){
                return 0;
            }
            revNum = revNum * 10+ dig;
            n =n/10;
        }
        return revNum;
    }

bool isPalindrome(int x){

    if(n < 0)
    return false;
    int revNum = reverse(n);

    return n== revNum;
}
}

//Modulo Arithmetics:
// Properties:

(x+y)%m =x%m+y%m 
(x-y)%m =x%m-y%m 
(x.y)%m =x%m.y%m 
