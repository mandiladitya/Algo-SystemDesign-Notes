/*
result = arr[0]
For i = 1 to n-1
   result = GCD(result, arr[i])
*/

int gcd(int a, int b) 
{ 

    if (a == 0) 

        return b; 

    return gcd(b % a, a); 
} 

  
// Function to find gcd of array of 
// numbers 

int findGCD(int arr[], int n) 
{ 

    int result = arr[0]; 

    for (int i = 1; i < n; i++) 

    { 

        result = gcd(arr[i], result); 

  

        if(result == 1) 

        { 

           return 1; 

        } 

    } 

    return result; 
} 
