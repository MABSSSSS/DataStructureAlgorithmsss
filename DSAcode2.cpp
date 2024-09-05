#include<iostream>
using namespace std;
int main(){
    int n=5;

    if (n>=0){
        cout<<"n is positive\n";
    }else 
    {
        cout<<"n is negative\n";
    }

    //Practice problem

    int age;
    
    cout<<"Enter age\n";
    cin>>age;
    cout<<endl;
    if (age >=18){

        cout<<"You can vote\n";
    }else{
        cout<<"You can't vote\n";
    }

// Practice Problem:2

    int num;
    cout<<"Enter number\n";
    cin>>num;

    if (n%2 ==0){
        cout<<"Even Number\n";
    }
    else {
        cout<<"Odd Number\n";
    }
//Problem:3

  int marks;
  cout<<"Ënter your marks\n";
  cin>>marks;
  cout<<"\n";

  if (marks>=90)
  {
    cout<<"A\n";

  }
  else if(marks >= 80 && marks < 90)
  {
    cout<<"B \n";
  }
  else
  {cout<<"Lower Grades\n";
  }
  //Problem:4

  char ch;
  cout<<"Enter character\n";
  cin>>ch;
   if (ch >='a' && ch <='z')
   {
    cout<<"Lowr case\n";
   }
   else if(ch >='A'&& ch<='Z')
   {
    cout<<"Upper Case\n";
   }
   else
   {
    cout<<"Wrong credentials\n";
   }
// Practice Problem Implicit Type Conversion
   char har;
  cout<<"Enter character\n";
  cin>>har;
   if (har  >=65 && har <=90)
   {
    cout<<"Upper case\n";
   }
   
   else
   {
    cout<<"Lower Case\n";
   }

  //Ternary Statement

  int t;
  cout<<"Enter the number :\n";
  cin>>t;
  cout<<(t>=0? "positive":"negative")<<endl;

//LOOPS:
//While Loop
int y=22;
int count=1;

while (count <=n)
{   
    cout<<"While Loop condition Answer is:\n";
    cout<<"Your Amazing Answer look like this:"<<count<<""<<endl;
    count=count+1;

}
//Practice 
int su =10;
int summ=0;
while(summ<=su){
    cout<<"Condition is\n"<<summ<<endl;
    summ=summ+su;
}
//For Loops
int c=23;
for(int x=1;x<=c;x++)
{  
    cout<<"For Loop Condition:\n";
    cout<<x<<"";
    cout<<endl;
}

// Solve problem:
//Sum of numbers from 1 to n
 int e =10;
 int sum=0;
 for (int o=1; o<=e;o++ ){
    cout<<"Sum of numbers from 1 to N\n";
  sum=sum+o;
  cout<<"Sum ="<<sum<<endl;
 } 
//Sum of all odd numbers from 1 to N

int od=5;
int ods=0;
for(int w=1; w<=od; w++){
    if(w%2 !=0)
    {
        ods =ods+w;
        cout<<w<<" ";
    }
}

//DOWHILE LOOP
int nums=11;
int in=1;

do{
    cout<< in<<endl;
    cout<<"Hello World\n";
    in++;
}
while(in <= nums);
cout<<endl;

//Practice Problem:
//Check Number is Prime or Not

int we = 7;
bool isPrime = true;

for (int y=2; y*y <= we; y++)
{
    if (we%y==0)
    {
        isPrime = false;
        break;
    }
}
if (isPrime==true)
{
cout<<"Prime Number\n";
}
else
{
cout<<"Odd Number\n";
}

//Nested Loop Concept
int line =10;
for (int xy=1; xy<=line; xy++)
{
    int my = 11;


for (int ii=1; ii<=my;ii++)

{
    cout<<"*";
}
 cout<<endl;
}
   
//HOMEWORK
//PRACTICE QUESTION 1 SUM OF ALL NUMBERS FROM 1 TO N WHICH ARE DIVISIBLE BY 3

 int N;
    int SUm;  // Declaration without initialization

    cout << "Enter the value of N: ";
    cin >> N;

    SUm = 0;  // Initialize within the main logic block

    for (int j = 1; j <= N; j++) {
        if (j % 3 == 0) {
            SUm += j;  // Add j to SUm if j is divisible by 3
        }
    }

    // Display the sum after the loop
    cout << "The sum of all numbers from 1 to " << N << " divisible by 3 is: " << SUm << endl;


//Factorial of Number

 int Z;
    int factorial;  // Declaration without initialization

    cout << "Enter the number: ";
    cin >> Z;

    factorial = 1;  // Initialize within the main logic block

    for (int k = 1; k <= Z; k++) {
        factorial *= k;  // Multiply factorial by k
        // Optionally, display intermediate steps within the loop
    }

    // Display the factorial after the loop
    cout << "Factorial of " << Z << " using for loop is: " << factorial << endl;

  int Y;
    int factoriall;  // Declaration without initialization

    cout << "Enter the number for factorial: ";
    cin >> Y;

    factoriall = 1;  // Initialize within the main logic block
    int E = 1;

    while (E <= Y) {
        factoriall *= E;  // Multiply factorial by E
        E++;  // Increment E
        // Optionally, display intermediate steps within the loop
    }

    // Display the factorial after the loop
    cout << "Factorial of " << Y << " using while loop is: " << factoriall << endl;


 return 0;
}
