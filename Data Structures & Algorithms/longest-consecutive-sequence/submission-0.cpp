class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(auto x: nums)st.insert(x);

        int ans=0,cnt=0;

        for(auto x: st){
            if(st.find(x-1)==st.end()){
                cnt++;
                int val=x;
                while(st.find(val+1)!=st.end()){
                    val++;
                    cnt++;
                }
                ans=max(ans,cnt);
                cnt=0;
            }
        }

        return ans;
    }
};
