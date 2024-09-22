// #include<iostream>
// using namespace std;
// int main()
// {
//     Time and space complexity:
//     not the actual time taken but amount of time as function of input size(n).

//     worst case scenario --> input size(n)
//     better algorithms and 
//     better comparison  main li for time complexity:

//         **BIG O Notation:**
//         O(n)-> worst case complexity(upper bound)

//         1. ignore constants
//         2.consider only largest terms
//         e.g:
//         100+5nn +underoot of n 
//         1+nn+n 
//         O(nn)
     
//      Upper bound:
//      worst case 

//      original (theta):

//      best :(omega)
//      lower bound


//      Space complexity:O(n)
//      Amount of space taken by an algorithm as function of input size(n)

//      code-->input(vec,arr,string---)
//      code-->auxilary space 

//     n is increasing but auxilary space is constant then T.C is O(k)
    
//     best time complexity: O(1) then O(log n)  then O(n) then O(nlogn) then O(n2) then O(n3)then O(2^n) then O(n!)

//     Common Time complexity(O(1))-> constant 

//     int n;
//     cin >> n;
//     int ans = n* (n+1) /2; --> K operation 

//     ammortized -> average time complexity 


//     O(n)->Linear 
//     N factorial :
//     int fact =1;
//     for(int i=1; i<=n; i++)
//     {
//         fact *= i;
//     }
//     Nth fibonaccoi -DP
//     for (int i=2; i<=n; i++)
//     {
//         dp[i] = dp[i-1] + dp[i-2]
//     }

//     Kadanne's Algorithm:
    
//     T.C-> O(N^2)& (n^3)
//     Bubble sort algorithm:(selection, insertion)
//     for(int i =0; i<n-1; i++)
//     {
//         for (int j=0; j<n-i-1; j++)
//         {
//             if (arr[j] > arr[j+1])
//             {
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
//     formulas-> k[(n-1)+(n-2)+(n-3)]
//     formulas-> k*[n*(n-1)]/2 

// patterns -> nested loop O(n^2)


// O(logn)->T.C:

// e.g: Binarysearch 
// int s=0, e=n-1;
// while(s <=e)
// {
//     int mid = s+ (e-s)/2;
//     if(arr[mid] <target){
//         s =mid+1;

//     }
//     else if(arr[mid] > target)
//     {
//         e = mid - 1;
//     }
//     else {
//         return mid;
//     }
// }

// O(nlogn) T.C 
// e.g: merge sort, quick sort, quick sort and greedy algorithms 

// O(nlogn)<---Better O(n^2)

// O(2^n): recusion

// O(n!):T.C
// nqueen , knight tour and strings--> all possible permatuation-->recusion







//     return 0;
// }

Solve : Prime number Time complexity 

for(int i=2; i*i<n; i++)
{
    if(n % 1 ==0)
    {
        cout<<"Non prime";
        break;
    }
}


Question:2 Selection sort T.C-> O(n^2)

for (int i=0; i<n-1; i++)
{
    int minIdx = i;
    for(int j=i+1; j<n; j++)
    {
        if(arr[j] < arr[minIdx])
        {
            minIdx = j;
        }
    }
    swap (arr[i], arr[minIdx]);
}


Recursion Time complexity:

1.Recurrence Relation
2.TC = total no of recalls * work in each cells 

e.g:
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n * factorial(n-1);
}  T.c ->O(n^2)

Space Complexity:
Depth of recusion tree * memory in each cell 
or 
SC = Height of call stack * memory in each cell 
SC =n*k 
sc=o(n)

Call Stack:

Solve:
Recursive fabonaccoi-Time & Space complexity:
int fib(int n) {
    if(n== 0 || n == 1)
    {
        return n;
    }
    return fib(n-1) + fib(n-2);
}

T(n) = T(n-1)+T(n-2)+0(1)

TC = total calls * WD in each

(2^n-1)*k =O(2^n)

sum = a(r^n -1)/(r-1)

Question:2 E.g:
Merge sort 
void mergeSort(int arr[], int si, int ei)
{
    if(si>= ei)
    {
        return ;
    }
    int mid = si + (ei-si)/2;
    mergeSort(arr, si, mid);
    mergeSort(arr, mid+1, ei);

    merge(arr, si, mid, ei)

}

void merge(int arr[], int si, int mid, int ei){
    vector<int>temp;
    int i=si, j=mid+1;

    while(i<= mid && j <= ei){
        if (arr[i] <=arr[j])
        {
            temp.push_back(arr[i+1]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }

    while(i <=mid){
        temp.push_back(arr[i++]);
    }
    while (j <= ei)
    {
        temp.push_back(arr[j++]);
    }

    for(int idx = si, x=0; idx <=ei; idx++)
    {
        arr[idx] = temp[x++];
    }
   

    levels = x =logn 
    T.C = total calls * WD in each call 


    O(logn) * O(n)-> O(n* logn)
    SC = O(logn + n )-> O(n)

    
    Practical Usage:
    
    1. n>10^8 -> O(logn)
    2.n<=10^8 -> O(n)
    3. n<=10^ O(nlogn)-> sorting
    4.n<=10^ ->O(n^2)
    5.n<=500 ->O(n^3)
    6.n<=25 O(2^n)-> recursion/brute force
    7. n<=12 -> O(n!)
}