class Solution {
public:
    string reverseWords(string s) {
      int n = s.length();
       string ans = "";
       string rev = "";
       for(int i = 0; i < n; i++){
        if(s[i] == ' ' && rev != ""){
            ans = rev  + ' ' + ans;
            rev = "";
        }
        else if(s[i] == ' '){
            continue;
        }
        else
            rev += s[i];
        
       }
       if(rev != "")
        ans = rev + ' ' + ans;
        ans.pop_back();
       return ans;
    }
};
