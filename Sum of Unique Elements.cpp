class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int c=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j] && i!=j){
                    c++;
                    break;
                }
            }
            if(c==0){
                ans+=nums[i];
            }
        }
        return ans;
        
    }
};