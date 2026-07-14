class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int product = 1;
        int product_without_0 = 1;
        int zero_count = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == 0) {
                product *= nums[i];
                zero_count++;
            }
            else{
                product*=nums[i];
                product_without_0*=nums[i];
            }
        }
        for(int i=0; i<n; i++){
            if(nums[i] == 0) ans[i] = (zero_count > 1) ? 0 : product_without_0;
            else ans[i] = product/nums[i];
        }
        return ans;
    }
};
