class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         int i,j;
        int n=nums.size();
        for(i=0;i<n-1;i++)
        {  
            int find = target-nums[i];
           for( j=i+1;j<n;j++)
           {    
               if(nums[j]==find)
               {
                   return{i,j};
               }

           }
        }
     return nums;   
    }
};