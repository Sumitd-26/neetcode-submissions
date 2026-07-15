class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        set<vector<int>> st;
        for(int i=0; i<n; i++){
            if(i>0 && nums[i]== nums[i-1]) continue;
            int temp = nums[i];
            int l=i+1;
            int r=n-1;
            while(l<r){
                int sum = nums[l] + temp + nums[r];
                if(sum == 0){
                    st.insert({nums[l], temp, nums[r]});
                    l++;
                    r--;
                }
                else if(sum >0) r--;
                else l++;
            }
        }
        for(auto& it: st){
            ans.push_back(it);
        }
        return ans;
    }
};
