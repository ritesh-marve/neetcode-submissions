class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxarea=0;
        int l=0;
        int r=heights.size()-1;
        while(l<r)
        {
            int currarea=min(heights[l],heights[r])*(r-l);
            maxarea=max(currarea,maxarea);
            if(heights[l]<heights[r]) l++;
            else r--;

        }
        return maxarea;
    }
};
