class Solution:
    # @param A : integer
    # @return a list of list of strings
    def solveNQueens(self, n):
        output = []
        def dfs(row, queens, diags):
            if row == n:
                output.append(['.'*x + 'Q' + '.'*(n-x-1) for x in queens])
                return
            for col in range(n):
                if not any([row+col in diags, row-col-n-1 in diags, col in queens]):
                    dfs(row + 1, queens + [col], diags | {row+col, row-col-n-1})
        dfs(0, [], set())
        return output
