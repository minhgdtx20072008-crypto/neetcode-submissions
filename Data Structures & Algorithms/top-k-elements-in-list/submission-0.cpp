class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for (int x:nums)
        {
            mp[x]++;
        }
        vector <pair<int, int>> arr;
        for (const auto& p:mp)
        {
            arr.push_back({p.second, p.first});
        }
        sort(arr.rbegin(), arr.rend());
        vector<int>temp;
        for (int i=0; i<k; i++)
        temp.push_back(arr[i].second);
        return temp;

    }
};
