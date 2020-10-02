# Programming-Stuff
My Solutions and Some Revision Materials

[BIT TRICKS USED IN PROGRAMMING](https://github.com/mandiladitya/Programming-STUFF/blob/main/BIT_Tricks.md)

## Useful Tricks 
```
* A number is Fibonacci if and only if one or both of (5*n2 + 4) or (5*n2 – 4) is a perfect square 
* Cassini’s Identity : f(n-1)*f(n+1) - f(n*n) = (-1)^n 
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
