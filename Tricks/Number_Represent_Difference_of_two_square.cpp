/*
The idea is that all the numbers 
can be represented as 
the difference of two squares 
except the numbers which yield 
the remainder of 2 when divided by 4.

*/

bool difSquare(int n) 
{ 
 // Checking if n % 4 = 2 or not 

    if (n % 4 != 2) { 

        return true; 

    } 
    return false; 
} 
// Driver code 

int main() 
{ 
    int n = 45; 

    if (difSquare(n)) { 

        cout << "Yes\n"; 

    } 

    else { 

        cout << "No\n"; 

    } 

    return 0; 
} 
