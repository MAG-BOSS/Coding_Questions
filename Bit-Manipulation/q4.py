class Solution:
    # @param A : list of integers
    # @return an integer
    def findMinXor(self, A):
        A.sort() 
   
        minXor =  int(sys.float_info.max) 
        val = 0
   
        # calculate min xor of consecutive pairs 
        for i in range(len(A)): 
            val = A[i] ^ A[i + 1]; 
            minXor = min(minXor, val); 
      
        return minXor 
