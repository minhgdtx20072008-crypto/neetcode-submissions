class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int n=matrix.size();
      int m=matrix[0].size();
      for (int i=0; i<n; i++)
      if (binary(matrix[i], target)) return true;
      return false;
    }
    bool binary(vector<int> a, int x)
    {
      int l=0, r=a.size()-1;
  
      while (l<=r)
      {
        int mid=l+(r-l)/2;
        if (a[mid]==x) return true;
        else if (a[mid]<x) l=mid+1;
        else r=mid-1; 
      }
      return false;
    }
};
