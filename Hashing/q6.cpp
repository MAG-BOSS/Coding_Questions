int Solution::isValidSudoku(const vector<string> &A) {
    bool rowUsed[9][9]={0},colUsed[9][9]={0},boxUsed[9][9]={0};
for(int i=0;i<9;i++){
for(int j=0;j<9;j++){
if(A[i][j]!='.'){
int boxNo = i/3 * 3 + j/3;
int num = A[i][j]-'0'-1;
if(rowUsed[i][num] || colUsed[j][num] || boxUsed[boxNo][num])
return 0;
rowUsed[i][num]=colUsed[j][num]=boxUsed[boxNo][num]=1;
}
}
}
return 1;   
}
