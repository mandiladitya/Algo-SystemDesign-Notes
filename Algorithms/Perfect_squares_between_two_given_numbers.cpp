/*
floor(sqrt(b)) - ceil(sqrt(a)) + 1

We take floor of sqrt(b) because we need to consider 
numbers before b.

We take ceil of sqrt(a) because we need to consider 
numbers after a.


For example, let b = 24, a = 8.  floor(sqrt(b)) = 4, 
ceil(sqrt(a)) = 3.  And number of squares is 4 - 3 + 1
= 2. The two numbers are 9 and 16.
*/

int countSquares(int a, int b) 
{ 
    return (floor(sqrt(b)) - ceil(sqrt(a)) + 1); 
} 
int main() 
{ 
    int a = 9, b = 25; 
    cout << "Count of squares is "
         << countSquares(a, b); 
    return 0; 
} 
