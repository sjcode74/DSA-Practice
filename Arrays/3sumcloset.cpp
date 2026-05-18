class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int closet = 100000;
        sort(begin(nums), end(nums));
        for(int i = 0; i <= n-3; i++){
           int j = i + 1;
           int k = n-1;
           while(j < k){
            int sum = nums[i] + nums[j] + nums[k];
            if(abs(target-sum) < abs(target-closet))
                closet = sum;
            if(sum < target)
            j++;
            else
            k--;
           }
        }
        return closet;
    }
};
