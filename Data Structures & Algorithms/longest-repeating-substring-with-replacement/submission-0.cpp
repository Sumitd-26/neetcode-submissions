class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int l=0, r=0;
        unordered_map<char, int> mpp;
        int ans = 0;
        while(r<n){
            int maxf = 0;
            mpp[s[r]]++;
            for(auto& it: mpp){
                maxf = max(maxf, it.second);
            }
            while((r-l+1) - maxf > k){
                mpp[s[l]]--;
                l++;
            }
            ans = max(ans, r-l+1);
            
            r++;
        }
        return ans;
    }
};
