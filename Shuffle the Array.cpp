class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> r;
        for(int i=0, j=n;j<2*n;i++, j++){
            r.push_back(nums[i]);
            r.push_back(nums[j]);
        }
        return r;
        
    }
};