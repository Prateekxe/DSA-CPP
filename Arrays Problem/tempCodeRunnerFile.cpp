    //brute force approach
    int temp[d];
    
    for(int i=0; i<=d-1; i++)  // storing from arr --> temp 
    {
        temp[i] = arr[i];
    }
    
    for(int i=d; i<=n-1; i++) // shifting
    {
        arr[i-d] = arr[i];
    }
    
    for(int i=0; i<=d-1; i++) // storing back from temp --> arr
    {
        arr[(d+1)+i] = temp[i];
    }