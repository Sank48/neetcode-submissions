class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string a="";
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                a+=s[i];
            }
        }
        n=a.size();
        for(int i=0;i<n;i++){
            if(tolower(a[i])!=tolower(a[n-1-i]))return false;
        }

        return true;
    }
};
