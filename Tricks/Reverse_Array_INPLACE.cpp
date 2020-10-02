/*
An in-place algorithm is an algorithm that does not need an extra space and produces an output 
in the same memory that contains the data by transforming the input ‘in-place’. 
However, a small constant extra space used for variables is allowed. 
*/

void revereseArray(int arr[], int n) 
{ 
   for (int i=0; i<n/2; i++) 
     swap(arr[i], arr[n-i-1]); 
}  
