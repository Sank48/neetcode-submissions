class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(auto x: strs){
            ans+=x;
            ans+="\n";
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='\n'){
                ans.push_back(temp);
                temp="";
            }
            else{
                temp+=s[i];
            }
        }
        return ans;
    }
};
