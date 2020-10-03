void printNGE(int arr[], int n) 
{ 

    stack<int> s; 

  

    int arr1[n]; 

  

    // iterating from n-1 to 0 

    for (int i = n - 1; i >= 0; i--)  

    { 

        /*We will pop till we get the  

        greater element on top or stack gets empty*/

        while (!s.empty() && s.top() <= arr[i]) 

            s.pop(); 

  

        /*if stack gots empty means there  

        is no element on right which is greater  

        than the current element. 

        if not empty then the next greater  

        element is on top of stack*/

        if (s.empty())  

            arr1[i] = -1;          

        else 

            arr1[i] = s.top();         

  

        s.push(arr[i]); 

    } 

  

    for (int i = 0; i < n; i++) 

        cout << arr[i] << " ---> " << arr1[i] << endl; 
} 
