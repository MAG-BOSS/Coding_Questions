int Solution::lengthOfLastWord(const string A) {
    int count = 0; 
    bool flag = false; 
    for (int i = A.length() - 1; i >= 0; i--) { 
        // Once the first character from last 
        // is encountered, set char_flag to true. 
        if ((A[i] >= 'a' && A[i] <= 'z') || (A[i] >= 'A' && A[i] <= 'Z')) { 
            flag = true; 
            count++; 
        } 
        // When the first space after the 
        // characters (from the last) is 
        // encountered, return the length 
        // of the last word 
        else { 
            if (flag == true) 
                return count; 
        } 
    } 
    return count; 
}
