int binarySearch(const arr[], int low,  
                  int high, int key) 
{ 
  if (high < low) 
    return -1; 
      
  int mid = (low + high)/2; /*low + (high - low)/2;*/
  if (key == arr[mid]) 
    return mid; 
      
  if (key > arr[mid]) 
    return binarySearch(arr, (mid + 1), high, key); 
      
  // else 
    return binarySearch(arr, low, (mid -1), key); 
} 
int findPivot(const arr[], int low, int high) 
{ 
  // base cases 
  if (high < low) return -1; 
  if (high == low) return low; 
  
   int mid = (low + high)/2; /*low + (high - low)/2;*/
   if (mid < high && arr[mid] > arr[mid + 1]) 
    return mid; 
      
   if (mid > low && arr[mid] < arr[mid - 1]) 
    return (mid-1); 
      
   if (arr[low] >= arr[mid]) 
    return findPivot(arr, low, mid-1); 
      
   return findPivot(arr, mid + 1, high); 
} 
int search(const int* A, int n1, int B) {
    int pivot = findPivot(A, 0, n1-1); 
  if (pivot == -1) 
    return binarySearch(A, 0, n1-1, B); 
  if (A[pivot] == B) 
    return pivot; 
      
  if (A[0] <= B) 
    return binarySearch(A, 0, pivot-1, B); 
      
    return binarySearch(A, pivot+1, n1-1, B); 
    
}