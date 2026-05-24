class Solution {
public:
    int passwordStrength(string password) {
        vector<bool> seen(128, false);
        int score = 0;
        int n = password.size();
        for(char ch : password){
            if(seen[ch]) continue;
            seen[ch] = true;
    
            if(islower(ch))
                score += 1;
            else if(isupper(ch))
                score += 2;
            else if(isdigit(ch))
                score += 3;
            else if(ch == '!' || ch == '@' || ch == '#' || ch == '$')
                score += 5;
        }
        return score;
    }
};
