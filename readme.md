lecture:23 
*Sorting algortihms:*---<___>---

sorting --> particular order:

**Bubble sort:**(n-1)iterations -->adjacent element compare-->largest last mein push krein gy.
e.g:
41523-->1st 
14523
14523
14253
14235(1st iteration)

14235
12435
12345(2nd iteration)

12345(3rd iteration)

12345(4th).{for(i=0;i<n-1;i++)}
for(j=0;j<n-i-1;j++>){
    ifA[j]>A[j+1]
    swap(A[j], A[j+1])

}

**Selection Sort:**
two parts sorted and unsorted:

41523-->14523-->12543-->12345-->12345

for(i=0; i<n-1; i++){
    int smallestindex =i;
    for(j=i+1; j<n;j++){
        if(arr[j] < arr[SI])
        SI = j;
    }

    swap(arr[i], arr[SI])
}

**Insertion Sort:**
A[prev] --compare-- A[prev+1]

E.g:
41523-->pointer-->14523-->12453-->12345(by comparison between current and previous values).

pseudocode:
for(i=1; i<n;i++){
    curr=i;
    prev=i-1;
    while(prev >=0 && A[prev] > curr){
        A[prev+1] =A[prev]
        prev--;
    }
    A[prev+1] =curr;

}


**Merge 2 sorted arrays:**

idx = m+n-1 

i=n-1; j=n-1

while(i>=0 && j>=0){
    if(A[i] >=A[j])
    A[idx] = A[i] --->idx--,i--
    else
    A[idx] =B[j] -->idx--, j--;
}

**Next permutation:**

A=[1,2,3]  --> return lexicographically next (for number and strings)

--->Brute force 

1. find all permutations.(Recursion)
2. find lexico next permutations.

inplace O(1) TC
O(n) SC.
Optimal approach:--intuition:

Pivot element: -->  A[i] < A[i+1]
1. find the pivot element.
2. find the right most element greator than the pivot element.
 
   swap(RME, pivot element)
3. reverse elemnts from (pivot+1) to n-1 

dec--->increasing.


--Next permutation:**
1. piv = -1
  for(i=n-2; i> =0; i--)
  if (A[i] < A[i+1]){
    piv =i
    break;
  }

  if(piv == -1)
  {reverse Array()
  return 
  }
  2. for (i=n-1; i>pivot; i--){
    if(A[i] >A[pivot])
    swap(A[i],A[pivot])
    break;
  }
  3. i =pivot+1
  j= n-1
  while(I<=j){
    swap(A[i], A[j])
    i++
    j--
  }
  