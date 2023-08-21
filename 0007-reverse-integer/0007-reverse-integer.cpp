class Solution {
public:
    int reverse(int x) {
         int ans = 0;
        while (x) {
            if(ans>INT_MAX/10 || ans<INT_MIN/10)return 0;
        ans = ans * 10 + x % 10;
          // if (temp / 10 != ans)
             //   return 0;
            
            x /= 10;
        }
        return ans;
    }
};