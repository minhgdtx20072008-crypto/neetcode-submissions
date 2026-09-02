class Solution {
public:
    int maxArea(vector<int>& heights) {
       vector <int> temp;
       int n=heights.size();
       int i=0, j=n-1;
       while (i<j)
       {
        int index=j-i;
        int height=min(heights[i], heights[j]);
        int store=index*height;
        temp.push_back(store);
        if (heights[i]<heights[j])
        {
            i++;
        }
        else if (heights[i]>heights[j])
        {
            j--;
        }
        else
        {
            i++;
        }
       }
       int result=*max_element(temp.begin(), temp.end());
       return result; 
    }
};
