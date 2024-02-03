class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int a=nums[i];
            int key=target-a;
            if(m.find(key)!=m.end())
            {
                return {m[key],i};
            }
            m[a]=i;
        }
        return {-1,-1};
    }
};
  
     /*    int i,j;
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
     return nums;*/ 