
//https://leetcode.com/explore/challenge/card/september-leetcoding-challenge-2021/636/week-1-september-1st-september-7th/3960/

class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int maxLength = 0;
        vector<bool> visited(nums.size(),false);
        for(auto i : nums){
            int count = 0;
            while(visited[i] == false){
                visited[i] = true;
                count++;
                i = nums[i];
            }
            maxLength = max(maxLength, count);
        }
        return maxLength;
    }
};
