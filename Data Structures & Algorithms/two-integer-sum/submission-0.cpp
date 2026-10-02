class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,vector<int>>mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }

        for(int i=0;i<nums.size();i++){
            int val=target-nums[i];
            if(mp.find(val)!=mp.end()){
                if(nums[i]==val && mp[val].size()>1){
                    return vector<int>{mp[val][0], mp[val][1]};
                }else if(nums[i]!=val){
                    return vector<int>{i, mp[val][0]};
                }
            }
        }

        return vector<int>{};
    }
};
