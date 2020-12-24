from functools import cmp_to_key
class Solution:
    # @param A : tuple of integers
    # @return a strings
    def largestNumber(self, A):
        A = map(str, A)
        key = cmp_to_key(lambda a,b: 1 if a+b >= b+a else -1)
        res = ''.join(sorted(A, key= key, reverse=True))
        # Must left trim 0, apparently
        res = res.lstrip('0')
        return res if res else '0'