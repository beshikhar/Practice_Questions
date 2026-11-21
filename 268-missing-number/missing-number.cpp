class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int t_sum=(n*(n+1))/2;
        int sum=0;
        int left=0;
        for(int i=0;i<n;i++){
            sum += nums[i];    
        }
        left=t_sum-sum;
        return left;
        
    }
    
};