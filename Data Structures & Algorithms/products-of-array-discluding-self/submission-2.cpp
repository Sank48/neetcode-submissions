class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<long long>s,e(nums.size(),1);
        s.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            s.push_back(s[i-1]*nums[i]);
        }
        e[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            e[i]=e[i+1]*nums[i];
        }

        vector<int>ans;

        for(int i=0;i<nums.size();i++){
            if(i==0){
                ans.push_back(e[1]);
            }else if(i==nums.size()-1){
                ans.push_back(s[i-1]);
            }else{
                ans.push_back(s[i-1]*e[i+1]);
            }
        }

        return ans;
    }
};
