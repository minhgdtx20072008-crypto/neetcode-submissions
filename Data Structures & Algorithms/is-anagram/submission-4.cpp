class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()) return false;
        multiset<char>se_1;
        multiset<char>se_2;
        int n1=s.length();
        for (int i=0; i<n1; i++)
        {se_1.insert(s[i]);
        se_2.insert(t[i]);
        }
        if (se_1==se_2) return true;
        return false;
    }
};
