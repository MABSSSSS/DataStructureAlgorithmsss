#include<iostream>
using namespace std;
int main()
{
//   int marks[5] ={99,34,54,65,67};
//   int size = 5;
//   cout << marks[0]<<endl;  
//   cout << marks[1]<<endl;  
//   cout << marks[2]<<endl;  
//   cout << marks[3]<<endl;  
//   cout << marks[4]<<endl;  

//for performing operations we use loops

//int sz = sizeof(marks)

//  int size =5;
//  int marks[size];

// for ( int i=0; i<size; i++)
// {
//     cin>> marks[i];
// }

// for(int i=0;i<size;i++)
// {
//     cout<<marks[i]<<endl;
// }


//Find smallest and largest in Array

// int nums[] = {15,23,4,-15,43};
// int size =6;

// int smallest = INT_MAX;
// int largest = INT_MIN;
// for(int i=0; i<size; i++)
// {
    
//         smallest = min(nums[i], smallest);
//         largest = max(nums[i], largest);
    
   
// }
// cout << "smallest =" <<smallest <<endl;
// cout<<"largest = "<<largest <<endl;


// Pass by reference 
// void changeArr( int arr[], int isze)
// {
//     cout<<"in function\n";
//     for ( int i=0; i<size; i++)
//     {
//         arr[i] =2* arr[i];
//     }
// }

// int main()
// {
//     int arr[]= {1,2,3};
    
//     changeArr(arr,3);

//     cout<<"in main\n";
//     for(int i=0; i<3; i++)
//     {
//         cout<<arr[i] <<" ";
//     }
//     cout<< endl;

//     return 0;
// }


//linear Search

// int linearSearch(int arr[], int sz)
// {
//   for ( int i=0; i<sz; i++)
//   {
//     if (arr[i] == target){
//         return i;
//     }
//   }
//   return -1;
// }

// int main()
// {
//     int arr[] = {4,3,7,8,9,5};
//     int sz = 2;
//     int target = 8;
    
//     cout<< linearSearch(arr, sz, target) << endl;


//Reverse an Array

// void reverseArray(int arr[], int sz){
//    { int start = 0, end = sz-;
//    }
//     while(start<sz){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
// int main()
// {
//     int arr[] = { 9,4,3,44,5,6,7};
//     int sz =7;

//     reverseArray(arr, sz);

//     for ( int i=0 ; i<sz; i++)
//     {
//         cout<< arr[i] <<" ";
//     }
//     cout<<endl;

// return 0;
// }

//HOMEWORK
// Function to calculate the sum and product of all elements in an array
// void calculateSumAndProduct(int arr[], int sz, int &sum, int &product) {
//     sum = 0;         // Initialize sum to 0
//     product = 1;     // Initialize product to 1

//     // Loop through the array
//     for (int i = 0; i < sz; i++) {
//         sum += arr[i];         // Add each element to sum
//         product *= arr[i];     // Multiply each element to product
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};  // Sample array
//     int sz = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array
//     int sum, product;  // Variables to store the sum and product

//     // Call the function to calculate the sum and product
//     calculateSumAndProduct(arr, sz, sum, product);

//     // Output the results
//     cout << "Sum of array elements: " << sum << endl;
//     cout << "Product of array elements: " << product << endl;

//     return 0;
// }


//Question:2
// Function to swap the maximum and minimum values in an array
// void swapMaxMin(int arr[], int sz) {
//     if (sz == 0) return;  // If the array is empty, exit the function

//     // Initialize variables to store the indices of the max and min elements
//     int maxIndex = 0, minIndex = 0;

//     // Traverse the array to find the max and min element indices
//     for (int i = 1; i < sz; i++) {
//         if (arr[i] > arr[maxIndex]) {
//             maxIndex = i;
//         }
//         if (arr[i] < arr[minIndex]) {
//             minIndex = i;
//         }
//     }

//     // Swap the max and min elements
//     int temp = arr[maxIndex];
//     arr[maxIndex] = arr[minIndex];
//     arr[minIndex] = temp;
// }

// int main() {
//     int arr[] = {3, 7, 2, 9, 4};  // Sample array
//     int sz = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

//     // Display the array before swapping
//     cout << "Array before swapping: ";
//     for (int i = 0; i < sz; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // Call the function to swap max and min elements
//     swapMaxMin(arr, sz);

//     // Display the array after swapping
//     cout << "Array after swapping: ";
//     for (int i = 0; i < sz; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }



// Function to print all unique values in an array
// void printUniqueValues(int arr[], int sz) {
//     cout << "Unique values in the array: ";

//     // Loop through each element of the array
//     for (int i = 0; i < sz; i++) {
//         bool isUnique = true;

//         // Compare the current element with every other element in the array
//         for (int j = 0; j < sz; j++) {
//             if (i != j && arr[i] == arr[j]) {
//                 isUnique = false;  // If a duplicate is found, mark it as not unique
//                 break;
//             }
//         }

//         // If the element is unique, print it
//         if (isUnique) {
//             cout << arr[i] << " ";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int arr[] = {4, 5, 2, 3, 4, 2, 7};  // Sample array
//     int sz = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

//     // Call the function to print all unique values
//     printUniqueValues(arr, sz);

//     return 0;
// }


// Function to print the intersection of two arrays
// void printIntersection(int arr1[], int sz1, int arr2[], int sz2) {
//     cout << "Intersection of the arrays: ";

//     // Loop through each element of the first array
//     for (int i = 0; i < sz1; i++) {
//         // Loop through each element of the second array
//         for (int j = 0; j < sz2; j++) {
//             // If an element of arr1 matches an element of arr2, print it
//             if (arr1[i] == arr2[j]) {
//                 cout << arr1[i] << " ";
//                 break; // Once found, break to avoid printing duplicates
//             }
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int arr1[] = {1, 2, 3, 4, 5};   // First array
//     int arr2[] = {3, 4, 5, 6, 7};   // Second array

//     int sz1 = sizeof(arr1) / sizeof(arr1[0]);  // Size of first array
//     int sz2 = sizeof(arr2) / sizeof(arr2[0]);  // Size of second array

//     // Call the function to print the intersection of the two arrays
//     printIntersection(arr1, sz1, arr2, sz2);

//     return 0;
// }


// Function to print the index of the smallest and largest values in an array
void printSmallestAndLargestIndex(int arr[], int sz) {
    if (sz == 0) {
        cout << "Array is empty." << endl;
        return;
    }

    // Initialize variables to store the indices of the smallest and largest elements
    int minIndex = 0, maxIndex = 0;

    // Traverse the array to find the indices of the smallest and largest elements
    for (int i = 1; i < sz; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;  // Update minIndex if a smaller element is found
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;  // Update maxIndex if a larger element is found
        }
    }

    // Print the results
    cout << "Smallest value index: " << minIndex << endl;
    cout << "Largest value index: " << maxIndex << endl;
}

int main() {
    int arr[] = {4, 7, 2, 9, 5};  // Sample array
    int sz = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

    // Call the function to print the indices of the smallest and largest values
    printSmallestAndLargestIndex(arr, sz);

    return 0;
}
