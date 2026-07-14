class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int n = nums.size();
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }
        int longest = 0;
        for(int i=0; i<n; i++){
            int x = nums[i];
            int cnt = 1;
            while(st.count(x+1)){
                cnt++;
                x = x+1;
            }
            longest = max(longest, cnt);
        }
        return longest;
    }
};
