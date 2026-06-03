class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      nt start = 0;
int end = numbers.size() - 1;
int currsum = 0;
while(start < end){
    currsum = numbers[start] + numbers[end];

    if(currsum < target){
        start++;
    }
    else if(currsum > target){
        end--;
    }
    else {
        return {start+1, end+1};
    }
}
return {};
    }
};
