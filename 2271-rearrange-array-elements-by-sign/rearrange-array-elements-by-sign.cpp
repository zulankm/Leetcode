class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int k=1;
        vector<int> modnums(n,0);
        for(int i=0;i<n;i++)
        {    
            if(nums[i]>0)
            {
                modnums[j]=nums[i];
                    j=j+2;
            
            }
            if(nums[i]<0)
            {
                modnums[k]=nums[i];
                    k=k+2;
            }

        }
        return modnums;
    }
};