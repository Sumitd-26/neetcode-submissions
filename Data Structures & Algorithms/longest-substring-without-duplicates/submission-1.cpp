class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int ans = 0;
        for(int i=0; i<n; i++){
            int cnt = 0;
            unordered_set<char> st;
            for(int j=i; j<n; j++){
                if(st.count(s[j])){
                    break;
                }
                    st.insert(s[j]);
                    cnt++;
            }
            ans = max(cnt, ans);
        }
        return ans;
    }
};
