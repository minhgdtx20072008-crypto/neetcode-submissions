class Solution {
public:
    bool isValid(string s) {
        stack <char> temp;
        int n=s.length();
        for (int i=0; i<n; i++)
        {
            if (s[i]=='(' || s[i]=='{' || s[i]=='[')
            {temp.push(s[i]);
            }
            if (temp.empty()) return false;
            if (((s[i]==']' || s[i]=='}') && temp.top()=='(') || ((s[i]==')' || s[i]==']') && temp.top() == '{') || ((s[i]== ')' || s[i]=='}') && temp.top()=='['))
            return false;  
            if ((s[i]==')' && temp.top()=='(') || (s[i]=='}' && temp.top() == '{') || (s[i]== ']' && temp.top()=='['))
             {
                    temp.pop();
                }
                
            
         
        }
         
         if (temp.empty()) return true;
         return false;
    }
};
