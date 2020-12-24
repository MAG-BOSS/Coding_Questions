int first(const arr[], int low, int high, int x, int n) 
{ 
    if(high >= low) 
    { 
        int mid = low + (high - low)/2; 
        if( ( mid == 0 || x > arr[mid-1]) && arr[mid] == x) 
            return mid; 
        else if(x > arr[mid]) 
            return first(arr, (mid + 1), high, x, n); 
        else
            return first(arr, low, (mid -1), x, n); 
    } 
    return -1; 
} 
int last(const arr[], int low, int high, int x, int n) 
{ 
    if (high >= low) 
    { 
        int mid = low + (high - low)/2; 
        if (( mid == n-1 || x < arr[mid+1]) && arr[mid] == x) 
            return mid; 
        else if (x < arr[mid]) 
            return last(arr, low, (mid -1), x, n); 
        else
            return last(arr, (mid + 1), high, x, n); 
    } 
    return -1; 
} 
  

int* searchRange(const int* A, int n1, int B, int *len1) {
    int C[2];
    len1=C;
    C[0]=first(A,0,n1-1,B,n1);
    C[1]=last(A,0,n1-1,B,n1);
    return C;
    
}