class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        set<int> se;

        for (int x : nums)
        {
            se.insert(x);
        }

        int cnt = 1;
        int maxValue = 1;

        for (auto it = se.begin(); it != se.end(); ++it)
        {
            auto nxt = next(it);

            if (nxt == se.end())
                break;

            if (*nxt - *it == 1)
            {
                cnt++;
            }
            else
            {
                cnt = 1;
            }

            maxValue = max(maxValue, cnt);
        }

        return maxValue;
    }
};
