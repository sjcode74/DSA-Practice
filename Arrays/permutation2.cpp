class Solution {
public:
void permu(vector<int>& nums, int idx, vector<vector<int>>& ans){
    if(idx == nums.size()){
        ans.push_back(nums);
        return;
    }
  //using set to store unique permutations
    set<int> st;
    for(int i = idx; i < nums.size(); i++){
        if(st.find(nums[i]) != st.end()){
            continue;
        }
        st.insert(nums[i]);
        swap(nums[idx], nums[i]);
        permu(nums, idx + 1, ans);
        swap(nums[idx], nums[i]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        permu(nums, 0, ans);
        return ans;
    }
};
