#include<iostream>
using namespace std;
int main(){

    // printing numbers
    // int n=4;
    // for (int i=1;i<=n;i++)
    // {
    //     for (int j=1;j<=n;j++)
    //     {
    //         cout<<j<<"";
    //     }
    //     cout<<endl;
    // }

// Printing stars
// int n=4;
// for(int j=1;j<=n;j++)
// {
//     for(int i=1;i<=n;i++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }

// printing Characters
// int n=5;
// for(int i=1;i<=n;i++){
//     char ch='A';

//     for(int j=0;j<n,j++;)
//     {
//      cout<<ch;
//      ch=ch+1;


//     }
//     cout<<endl;
// }



// int n=3;
//  int num=1;

//  for (int i=0; i<n; i++){
//     for (int j=0; j<n; j++)
//     {
//         cout<<num << " ";
//         num++;

//     }
//     cout<<endl;
//  }
 
//  int n=3;
//  char ch='A';

//  for (int i=0; i<n; i++){
    
//     for (int j=0; j<n; j++)
//     {
//         cout<<ch << " ";
//         ch++;

//     }
//     cout<<endl;
//  }

// Triangle pattern
// For stars
// int n=4;
//   for (int i=0;i<n;i++){
//     for (int j=0;j<i+1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
//   }

// int n=4;
// for(int i=0;i<n;i++){
//     for (int j=0;j<i+1;j++)
//     {
//         cout<<(i+1);
//     }
//     cout<<endl;
// }

//For characters

// int n=4;
// for(int i=0;i<n;i++){
//     char ch='A';
//     for (int j=0;j<i+1;j++)
//     {
//         cout<<ch;
//         ch++;
//     }
//     cout<<endl;
// }

// int n=4;
// for(int i=0;i<n;i++){
//     for (int j=1;j<i+1;j++)
//     {
//         cout<<j<<"";
//     }
//     cout<<endl;
// }

// Reverse Triangle Pattern

// int n=4;
// for(int i=n;i>0;i--){
    
//         cout<<i<<"";
    
//     cout<<endl;
// }

// int n=4;
// for(int i=0;i<n;i++)
// {
//     for (int j=i+1;j>0;j--)
//     {
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }

//Floyd's Triangle Pattern

// int n=4;

// int num=1;
// for(int i=0;i<n;i++){
//     for (int j=i+1;j>0;j--)
//     {
//         cout<<num<<" ";
//         num++;
//     }
//     cout<<endl;
// }


// int n=4;

// char ch='A';
// for(int i=0;i<n;i++){
//     for (int j=i+1;j>0;j--)
//     {
//         cout<<ch<<" ";
//         ch++;
//     }
//     cout<<endl;
// }

//Inverted Triangel pattern

// int n=4;

// int num=1;
// for(int i=0;i<n;i++){
//     for (int j=0;j<1;j++)
//     {
//         cout<<" ";
        
//     }

//     for( int j=0; j<n-i;j++)
//     {
//         cout<<(i+1) ;
//     }
//     cout<<endl;
// }


//for characters
// int n=4;

// char ch='A';
// for(int i=0;i<n;i++){
//     for (int j=0;j<1;j++)
//     {
//         cout<<" ";
        
//     }

//     for( int j=0; j<n-i;j++)
//     {
//         cout<<ch ;
//         ch++;
//     }
//     cout<<endl;
// }


// Pyramid Pattern

// int n=7;

// int num=1;
// for(int i=0;i<n;i++){

//     for (int j=0;j<n-i-1;j++)
//     {
//         cout<<" ";
        
//     }

//     for( int j=1; j<=i+1;j++)
//     {
//         cout<<j;
//     }

//  for (int j=i;j>0; j--){
//     cout<<j;
//  }

//     cout<<endl;
// }


//HOLLOW DIAMOND PATTERN

// int n=7;


// for(int i=0;i<n;i++){
//     for (int j=0;j<n-i-1;j++)
//     {
//         cout<<" ";
//     }
//     cout<<"*";
//     if (i!=0)
//     {
//         for (int j=0; j<2*i-1; j++)
//         {
//             cout<<" ";
//         }
//         cout<<"*";
//     }

    
//     cout<<endl;
// }


// for (int i=0; i<n-i;i++){
//     for(int j=0; j<i+1;j++)
//     {
//         cout<<" ";
//     }
//     cout<<"*";
//     if( i!= n-2)
//     {
//         for(int j=0; j<2*(n-i)-5;j++){
//             cout<<" ";
//         }
//     }
//     {    
//         cout<<"*";
//     }
//     cout<<endl;
// }


//Butterfly Pattern Home practice
int n=7;

    // Get the number of rows from the user
    cout << "Enter the number of rows: \n"<<n<<"\nLet's See"<<endl;
    cout<<"--->>>Now the butterfly pattern look like by using nested for loop is ****\n\n\n"<<endl;

    // Upper part of the butterfly pattern
    for (int i = 1; i <= n; i++) {
        // Left side stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right side stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the butterfly pattern
    for (int i = n; i >= 1; i--) {
        // Left side stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right side stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}






