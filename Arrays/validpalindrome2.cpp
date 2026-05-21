class Solution {
public:
bool palin(string s, int st, int end){
   while(st < end){
    if(s[st] != s[end]){
        return false;
    }
    st++;
    end--;
   }
    return true;
}
    bool validPalindrome(string s) {
        int st =0;
        int end = s.length() - 1;
        while(st < end){
            if(s[st] != s[end]){
                return palin(s, st+1, end) || palin(s, st, end - 1);
            }
            st++;
            end--;
        }
        return true;
    }
};
