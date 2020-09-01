def hourglassSum(arr):
   
    maxSum = -63
    
    for i in range(4):
        for j in range(4):
        
           
            top = sum(arr[i][j:j+3])
            
           
            mid = arr[i+1][j+1]
            
            
            bottom = sum(arr[i+2][j:j+3])
            
            hourglass = top + mid + bottom
            
            if hourglass > maxSum:
                maxSum = hourglass
                
    return maxSum
