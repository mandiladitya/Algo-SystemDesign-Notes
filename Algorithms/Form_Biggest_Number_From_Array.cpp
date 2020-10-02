// Own Comparator
int myCompare(string X, string Y) 
{ 
    // first append Y at the end of X 
    string XY = X.append(Y); 
  
    // then append X at the end of Y 
    string YX = Y.append(X); 
  
    // Now see which of the two formed numbers is greater 
    return XY.compare(YX) > 0 ? 1: 0; 
} 
void printLargest(vector<string> arr) 
{ 
    sort(arr.begin(), arr.end(), myCompare); 
  
    for (int i=0; i < arr.size() ; i++ ) 
        cout << arr[i]; 
} 
