class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int msum=nums[0];
        for(auto it:nums)
        {
            sum+=it;
            msum= max(msum,sum);
            if(sum<0)
                sum=0;
        }
       
        return msum;
    }
};