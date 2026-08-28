class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        set<vector<int>> temp;

        for (int i = 0; i < n - 2; i++) {
            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum == 0) {
                    temp.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if (sum > 0) {
                    k--;
                }
                else {
                    j++;
                }
            }
        }

        return vector<vector<int>>(temp.begin(), temp.end());
    }
};