class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int a;
        int diff;
        for(int i=0;i<nums.size();i++){
            a=nums[i];
            diff=target-a;
            if(mp.find(diff)!=mp.end()){
                return{mp[diff],i};
            }
            mp[a]=i;
            
            
        }
        return{};
        
        
    }
};