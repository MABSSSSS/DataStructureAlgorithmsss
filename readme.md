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
  

  **STL:(Standard Template library)**

  containers.
  
  iterators.
  
  Algorithms.

  Functors.

__Vector:__(dynamic,resize)

vector<int>vec;

__Functions:__
o(1)

.size and capacity
push_back & pop_back
emplace_back
at() or []
front and back.

__Other functions:__
o(n)

vec.begin()

Erase.
insert.-->   v.insert(pos,val)
clear.
empty.


Iterators:

vec.begin
vec.end     
<!-- 
vector<int>::iterator it;
for(it = vec.begin(); it!=vec.end(); it++){
  cout<<*(it)<<endl;>> -->
<!-- <-- } -->




**LIST**(doubly linked list)

list<int> 1 ={1,2,3}
. push_back & push_front
. emplace_back and emplace_front
. pop_back and pop_front


**Deque:** double ended Queue

deque<int> d ={1,2,3};

push_back and push_front
pop_back and pop_front
emplace_back and front
.

deque have random access available



**PAIR:**utility lib

pair<int,int>p={3,5};
pair<char, int> p={'a',1}



**STACK:**(LIFO)

.stack<int> s;
.push,emplace
.top
.pop
.size
.empty
.swap


**Queue:**(FIFO)

queue<int> q;

push, emplace
front
pop
size
empty
swap


**PRIORITY QUEUE:** max heap or min heap:

priority_queue<int> q;
<!-- (largest value==highest priority) -->
priority_queue<int, vector<int>, greator<int>> q;

functor is function object fro our work in comparators.

push, emplace--->o(logn)
top-->0(1)
pop--->o(logn)
size
empty

**MAP:**

(key,value)
map<string,int>m;
m[key] = value;//insert,change

insert, emplace
count
erase
find-->iterator and m.end()
size,empty and erase

Multimap:
multimap<string,int> m;

Unordered Map:
its time complexity too differ from map(self balalncing tree(ologn))
unorder(o(1))

unordered_map<string, int> m;


**SET:**

set<int> s;

insert,emplace
count
erase
find
size,empty, erase
unique value and sorted order.
unordered set: random arrranged(T.C:O(1))
lower bound: sholud not value less than key
upper bound: greator than key.


**Algorithms:**

Sorting:
sort(arr,n)
sort(arr,arr+n,greator<int>())
sort(v.begin(),v,end())


custom comparators:---> bool return 

Reverse,
Next permutations.
reverse(v.begin(), v.end())
next_permutation(v.begin(), v.end())
swap, min ,max

max and min elements:
max_element(v.begin(), v.end())
min_element(v.begin(),v.end())

-->Binary search:
binary_search(v.begin(), v.end(), target)

-->Count Set bits:
__builtin_popcount()


**Strings:**




character arrays also called c strings.
char st[]=9;

Characters Arrays:
cin.getline(str(char arr),len(no of char),delim);delim = delimeter

Question. Reverse a string:
1. char arr[]
2. string

end =n-1,st=0
while(st>e){
  swap(dtr[start], st{e})
  st++
  end--
}o(n)
















































































































































