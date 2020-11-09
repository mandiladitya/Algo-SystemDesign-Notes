# Programming-Stuff
My Solutions and Some Revision Materials :blue_book:

:blue_book:[Bit Tricks Notes](https://github.com/mandiladitya/Programming-STUFF/blob/main/BIT_Tricks.md)

:blue_book: [Graphs Notes](https://github.com/mandiladitya/Programming-STUFF/blob/main/Graphs/Graphs.md)

:memo: [Some Important Points](https://github.com/mandiladitya/Preparation_Stuff/blob/main/SomePoints.md)

## Useful Tricks 
```
* A number is Fibonacci if and only if one or both of (5*n^2 + 4) or (5*n^2 – 4) is a perfect square 
* Cassini’s Identity : f(n-1)*f(n+1) - f(n*n) = (-1)^n 
```
## Reverse Array INPLACE 
```
a=[1,2,3,4,5,6]
n=len(a)
for i in range(len(a)//2):
  a[i],a[n-i-1]=a[n-i-1],a[i]
print(a)
```
## Matrix Input in Python 
```
mat = [[int(input()) for x in range (C)] for y in range(R)]

```
## Pairwise Swapping 
```
n=list(map(int,input().split()))
l=len(n)&-2
for i in range(0,l,2):
    n[i],n[i+1]=n[i+1],n[i]
print(n)
```
## Find any Pair with Given GCD & LCM O(1)
```
Observe that the 
lcm is always divisible by gcd,
 hence the answer can be obtained in O(1). 
One of the numbers will be the gcd G itself 
and the other will be the lcm L

#include <iostream> 
using namespace std; 
void printPair(int g, int l) 
{ 
cout << g << " " << l; 
} 
int main() 
{ 
    int g = 3, l = 12; 
    printPair(g, l); 
    return 0; 
} 

O(1)
```
## Scalability
The following table shows how algorithms with different complexities scale when given different numbers of inputs. Note: some values are rounded.

|Complexity |1|10      |100  |
|-----------|-|--------|-----|
|O(1)       |1| 1      |1    |
|O(log N)   |0| 2      |5    |
|O(N)       |1|10      |100                            |
|O(N log N) |0|20      |461                            |
|O(N^2)     |1|100     |10000                          | 
|O(2^N)     |1|1024    |1267650600228229401496703205376|       
|O(N!)      |1|3628800 |doesn't fit on screen! |

```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
```
## Others OpenSource Materials :
* https://github.com/mtdvio/every-programmer-should-know
