class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> temp;
        int w=0;
        while (temp.size()!=nums.size())
        {
            int prod=1;
            for (int i=0; i<nums.size(); i++)
            {
                if (i==w) continue;
                 prod*=nums[i];
            }
            temp.push_back(prod);
            w++;
        }
        return temp;
    }
};
