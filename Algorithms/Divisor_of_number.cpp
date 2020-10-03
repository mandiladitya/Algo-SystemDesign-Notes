void printDivisors(int n) 
{ 
    for (int i = 1; i*i < n; i++) { 
        if (n % i == 0) 
            printf("%d ", i); 
    } 
    for (int i = sqrt(n); i >= 1; i--) { 
        if (n % i == 0) 
            printf("%d ", n / i); 
    } 
} 

// O(logn)
