class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt =0;
        
        unordered_map<int, int> mp;
        int psum =0;
        mp[0]=1;
        for(int i=0;  i<n; i++){
            psum += nums[i];
            
            if(mp.find((psum%k+k)%k) != mp.end()){
            
              cnt +=  mp[(psum%k+k)%k];
                
            }
            mp[(psum%k+k)%k]++;
           
        }

        return cnt;
    }
};