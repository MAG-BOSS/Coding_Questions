string Solution::convert(string A, int B) {
    if (B<2)
        return A;
    bool flag = false;
    vector<string> zigzag(B, "");
    int i = 0; // for string
    int r = 0; //for row
    while (i<A.length())
    {
        if (r<B && !flag)
        {
            zigzag[r] += A[i]; ++i; ++r;
        }
        else
        {
            if (!flag)
            {
                --r;
                flag = true;
            }
            else
            {
                --r;
                zigzag[r] += A[i];
                ++i;
                if (r==0)
                {
                    flag = false;
                    ++r;
                }
            }
        }
    }
    A.clear();
    for (auto p = 0; p<B; ++p)
        A += zigzag[p];
    return A;
}
