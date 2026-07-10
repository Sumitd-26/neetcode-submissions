class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mpp1, mpp2;
        if(s.length()!=t.length()) return false;
        for(auto& it: s){
            mpp1[it]++;
        }
        for(auto& it: t){
            mpp2[it]++;
        }
        for(auto& it: s){
            if(mpp1[it] != mpp2[it]) return false;
        }
        return true;
    }
};
