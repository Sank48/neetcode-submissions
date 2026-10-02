class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long prod=1;
        for(auto x: nums)prod*=x;
        vector<int>ans;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                ans.push_back(prod/nums[i]);
            }else{
                long long p=1;
                for(int j=0;j<nums.size();j++){
                    if(j!=i)p*=nums[j];
                }
                ans.push_back(p);
            }
        }

        return ans;
    }
};
