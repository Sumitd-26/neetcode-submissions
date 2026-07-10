class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mpp;
        int n = strs.size();
        for(int i=0; i<n; i++){
            vector<int>freq(26, 0);
            for(auto& it: strs[i]){
                freq[it-'a']++;
            }
            string key = "";
            for(int i=0; i<26; i++){
                key += to_string(freq[i]) + "#";
            }
            mpp[key].push_back(strs[i]);
        }
        for(auto it: mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
