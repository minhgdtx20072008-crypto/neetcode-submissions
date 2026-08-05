class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0, high=matrix.size()-1, row=-1;
        while (low<=high)
        { 
            int mid=low+(high-low)/2;
            if (target==matrix[mid][0]) return true;
            else if (target>matrix[mid][0])
            { 
                row=mid;
                low=mid+1;
            }
            else {
                high=mid-1;
            }
        }
        if (row==-1) return false;
        return binary(matrix[row], target);
    }
    bool binary(vector<int>&a, int x)
    {
        int left=0, right=a.size()-1;
        while (left<=right)
        {
            int mid=left+(right-left)/2;
            if (a[mid]==x) return true;
            else if (a[mid]>x) 
            right=mid-1;
            else left=mid+1;
        }
        return false;
    }

};