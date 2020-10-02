/* A number is Fibonacci if and only if one or both of 
(5*n2 + 4) or (5*n2 – 4) is a perfect square */

bool isPerfectSquare(int x) 
{ 
    int s = sqrt(x); 
    return (s*s == x); 
} 
bool isFibonacci(int n) 
{ 
    return isPerfectSquare(5*n*n + 4) || 
           isPerfectSquare(5*n*n - 4); 
} 
