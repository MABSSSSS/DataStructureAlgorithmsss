// Memory Addresses:

#include<iostream>
using namespace std;



// void changeA(int a){
//     a=20;
// }
int main()
{
    float price = 100.25;

    // int a=10;
    // cout<<&a<<endl;
    // int* ptr = &a;


    // int** parPtr =&ptr;
    // cout<<(ptr)<<endl;
    // int** parPtr = &ptr;
    // cout<<&ptr<<endl;
    // cout<< parPtr<<endl;
    // cout<<&price<<endl;
    // cout<<ptr<<endl;
    // cout<<price<<endl;
    // cout<<*(&a) <<endl;

    // int a= 55;
    // int* p =&a;
    // int** q=&p;

    // cout<<p<<endl;
    // cout<< *q <<endl;

// int a=10;

// changeA(a);
// changeA(&a);


// cout<<"Inside main func" <<a<< endl;

int arr[] = {1,2,3,4,5};

// cout<< *arr << endl;

// int a =15;
// int* ptr =&a;
// ptr =&a;

// return 0;

// int* ptr =&a;

// cout<<ptr;
// ptr++;
// ptr =ptr+2;

// cout<< ptr <<endl;

// int* ptr2;
// int* ptr1 = ptr1+2;

// cout<<ptr1 -ptr2 <<endl;


int *ptr =arr;

cout<<*(ptr+1)<<endl;

cout<<*(ptr+3)<<endl;

ptr++;

cout<< *ptr*3<<endl;



return 0;


& -> bitwise operator , address operator and alias operator .
* -> multiply and dereference operator .
}

