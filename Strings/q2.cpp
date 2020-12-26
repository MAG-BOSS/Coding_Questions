int Solution::atoi(const string A) {
    string s=A;
while(s[0]==' ') s.erase(s.begin());         //erase all unwanted starting spaces ' '
int sign=1;
if(s[0]=='-' || s[0]=='+')                           //Consider signs and then if present,
{                                                            //delete them after storing values
    if(s[0]=='-') sign=-1;
    s.erase(s.begin());
}
string ans="";             //create another string for storing next digit
int i=0;
while(s[i]>='0' && s[i]<='9' && i<s.size()) { ans+=s[i]; i++; }    //Only store digits, if encountered other 
long long res=0;                                                                     //garbage stuff, break loop
reverse(ans.begin(),ans.end());     //reverse string for simplicity( if needed)     
for(i=0;i<ans.size();i++)
{
    res*=10;                //convert string to no. 
    res+=s[i]-'0';
    if(res*sign>INT_MAX && sign==1) return INT_MAX;        //handle edge cases.
    if(res*sign<INT_MIN && sign==-1) return INT_MIN;  //note we use *multiplication of sign
}
return (int)sign*res;      //return ans
}