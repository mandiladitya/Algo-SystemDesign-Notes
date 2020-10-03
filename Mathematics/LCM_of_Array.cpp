/*
LCM(a,b)=a*b/gcd(a,b)
*/
int gcd(int a, int b) 
{ 

    if (b == 0) 

        return a; 

    return gcd(b, a % b); 
} 
// Returns LCM of array elements 

int findlcm(int arr[], int n) 
{ 
    // Initialize result 

    ll ans = arr[0]; 
    // ans contains LCM of arr[0], ..arr[i] 
    for (int i = 1; i < n; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 

    return ans; 
} 
