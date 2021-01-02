string Solution::getPermutation(int A, int B) {
    int i,arr[A];
for(i=0;i<A;i++)
arr[i]=i+1;
for(i=0;i<B-1;i++)
next_permutation(arr,arr+A);
string str="";
for(i=0;i<A;i++)
{
str+=to_string(arr[i]);
}
return str;
    
}
