class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int n = nums.size();
       int temp = INT_MAX;
       for(int i = 0; i < n; i++)
       {
            nums[i] = min(temp,nums[i]*nums[i]);
            
        
         } 
        sort(nums.begin(),nums.end());
        return nums;
    }
};