
def moveZerosToEnd (arr, n): 
  
    # Count of non-zero elements 
    count = 0; 
    for i in range(0, n): 
        if (arr[i] != 0): 
            arr[count], arr[i] = arr[i], arr[count] 
            count+=1

