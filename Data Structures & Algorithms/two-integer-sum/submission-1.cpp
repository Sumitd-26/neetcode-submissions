class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int curr = nums[i];
            int left = target-curr;
            if(mpp.find(left) != mpp.end()) return {mpp[left], i};
            mpp[curr] = i;
        }
        return {-1, -1};
    }
};
