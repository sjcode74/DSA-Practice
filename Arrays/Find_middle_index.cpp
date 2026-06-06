class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int rightsum = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            rightsum += nums[i];
        }

        int leftsum = 0;
        for(int i = 0; i < n; i++){
            if(leftsum == rightsum - nums[i]){
                return i;
            }
            leftsum += nums[i];
            rightsum -= nums[i];
        }
        return -1;
    }
};
