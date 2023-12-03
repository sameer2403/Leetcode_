class Solution {
public:
    int solve(vector<int>&from, vector<int>&to){
        int x = abs(from[0] - to[0]);
         int y = abs(from[1] - to[1]);
        
        return max(x,y);
    }
    
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int minTime =0;
        
        int n= points.size();
        for(int i=1; i<n; i++){
            minTime += solve(points[i-1], points[i]);
        }
        return minTime;
    }
};