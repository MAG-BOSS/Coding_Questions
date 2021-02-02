map<char, string> mp;

void solve(string current, string digits, vector<string> &ans) {
    if(digits.length()==current.length()){
        ans.push_back(current);
        return;
    }
    for(char i: mp[digits[current.length()]]){
        current+=i;
        solve(current,digits,ans);
        current.pop_back();
    }
}

vector<string> Solution::letterCombinations(string A) {
    vector<string> result;
    if(A.size()==0)
        return result;
    mp['0'] = "0";
    mp['1'] = "1";
    mp['2'] = "abc";
    mp['3'] = "def";
    mp['4'] = "ghi";
    mp['5'] = "jkl";
    mp['6'] = "mno";
    mp['7'] = "pqrs";
    mp['8'] = "tuv";
    mp['9'] = "wxyz";
    string current = "";
    solve(current, A, result);
    return result;
}