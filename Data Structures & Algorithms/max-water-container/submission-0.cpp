class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int ans=0;

        int s=0,e=n-1;

        while(s<e){
            ans=max(ans, (e-s)*min(heights[s], heights[e]));
            if(heights[e]<heights[s])e--;
            else s++;
        }

        return ans;
    }
};
