class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=nums.size();
        int lmax=0;
        int gmax=INT_MIN;
        for(int i =0; i<s;i++){
            lmax=max(nums[i],nums[i]+lmax);
            if (lmax>gmax)
                gmax=lmax;
        }
        if (lmax>gmax)
        gmax=lmax;
        return gmax;
    }
};