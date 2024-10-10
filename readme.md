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