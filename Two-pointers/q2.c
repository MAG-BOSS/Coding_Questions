/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Read only ( DON'T MODIFY ) Integer array
 * @input n2 : Integer array's ( B ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* intersect(const int* A, int n1, const int* B, int n2, int *len1) {
    int i = 0, j = 0;
    int n=0;
    while (i < n1 && j < n2) 
   { 
      if (A[i] < B[j]) 
         i++; 
      else if(B[j] < A[i]) 
         j++; 
      else /* if arr1[i] == arr2[j] */
      { 
         
         i++; 
         j++;
         n++;
      } 
  }
  *len1=n;
  int* C=(int *)malloc((*len1) * sizeof(int));
  int k=0;
  i=0;
  j=0;
  while (i < n1 && j < n2) 
  { 
    if (A[i] < B[j]) 
       i++; 
    else if (B[j] < A[i]) 
       j++; 
    else /* if arr1[i] == arr2[j] */
    { 
       C[k]=B[j];
       k++;
       i++; 
       j++; 
    } 
  } 
}
