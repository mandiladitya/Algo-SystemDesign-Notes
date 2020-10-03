// Method 1 ( Without Using SQRT )
bool isPerfectSquare(int n) 
{ 

    for (int i = 1; i * i <= n; i++) { 

  

        // If (i * i = n) 

        if ((n % i == 0) && (n / i == i)) { 

            return true; 

        } 

    } 

    return false; 
} 

// Method 2 ( Using Addition )
bool isPerfectSquare(int n) 
{ 

    // sum is sum of all odd numbers. i is 

    // used one by one hold odd numbers 

    for (int sum = 0, i = 1; sum < n; i += 2) { 

        sum += i; 

        if (sum == n) 

            return true; 

    } 

    return false; 
} 
