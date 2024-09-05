#include <iostream>
using namespace std;

int main()
{
    
    int age = 25;
    cout<<sizeof(age)<<"\n"<<age<<endl;
    char name ='Muhammad Abdullah Bin Sharif';
    cout<<name<<" \n"<<"From MABS world";
    float pi=3.14;
    cout<<pi<<endl;

    bool isSafe =false;
    cout<<isSafe<<"\n"<<endl;

    double price = 100.99;
    cout<<price<<endl;


    char grade = 'a';
     
    int value = grade;
    cout<<"ASCII VALUE\n"<<value<<endl;
    
    double pric =100.00;
    cout<<pric<<endl;

    int newPrice = int(pric);
    cout<<"Type Casting\n"<<newPrice<<endl;
    

    int val;
    cout<<"Enter the pay:\n";
    cin>>val;
    cout<<endl;

    cout<<"Your pay is:"<<val<<endl<<"Congrats\n";
    
    int a=5;
    int b =34;
    int sum= a+b;
    cout<<"\nSum of given integer is\n"<<sum<<endl;

    int sub = b-a;
    cout<<"Subtraction Answer is\n"<<sub<<endl;
    cout<<"Product  Answer is\n"<<(a*b)<<endl;
    cout<<"Modulus Answer is\n"<<float(a%b)<<endl;
    cout<<"Division Answer is\n"<<(b/a)<<endl;

//Logical opearators

    cout<<(a<b)<<endl<<"Entered Value is TRUE "<<endl;//True
    cout<<(a>b)<<endl<<"Entered Value is FALSE"<<endl;//False
    cout<<(a==b)<<endl<<"Entered Value is FALSE"<<endl;
    cout<<(a!=b)<<endl<<"Entered Value is TRUE"<<endl;
    cout<<(a<=b)<<endl<<"Entered Value is FALSE"<<endl;
    cout<<(a>=b)<<endl<<"Entered Value is FALSE"<<endl;


    cout<<"Given Logical Operator OR Value is"<<((a<b)||(a>b))<<endl;
    cout<<"GivenLogical Operator AND Value is"<<((a<b)&&(a>b))<<endl;
    
    
    //Questions Practice
    // Sum of Practice 

    int c,d;
    cout<<"Enter fisrt value\n",
    cin>>c;
    cout<<"Enter Second value\n",
    cin>>d;
    
    int summ = c+d;
    cout<<"Sum of two numbers\n"<<summ<<endl;
    

    //Unary Operators
 //Increment 
     int e =11;
     int g =e++;
     cout<<"Post Unary Value is :\n"<<g<<endl;
     cout<<"Unary Value is :\n"<<e<<endl;

     int v =++e;
     cout<<"Pre Unary Value is :\n"<<v<<endl;


//Decrement
   int x= 23;
   int y =--x;
   
   cout<<"Pre Decrement vlaue is:"<<y<<endl;
   cout<<"Pre Decrement Value is "<<x<<endl;
    
   int i = 33;
   int w =i--;

   cout<<"Post Decrement Value is:"<<w<<endl;
   cout<<"Post Decrement Value is :"<<i<<endl;
   
    return 0;
}


//Boilerplate code 
