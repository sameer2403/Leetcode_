class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        
        unordered_map<int, int> mp;
        
        int psum =0;
         mp[0]=1;
        int cnt  =0;
        
        for(int i=0; i<n; i++){
            psum +=nums[i];
            if(mp[psum-k]>0){
                cnt += mp[psum-k];
            }
            mp[psum]++;
        }
        
        return cnt;
        
    }
};