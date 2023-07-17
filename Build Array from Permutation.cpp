class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> r;
        for(int i=0;i<nums.size();i++){
            r.push_back(nums[nums[i]]);
        }
        return r;
    }
};