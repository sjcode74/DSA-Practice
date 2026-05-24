class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); ){
            int count = 0;
            int curr  = nums[i];
            while(i < nums.size() && nums[i] == curr){
                if(count < k){
                    ans.push_back(nums[i]);
                }
                count++;
                i++;
            }
        }
        return ans;
    }
};
