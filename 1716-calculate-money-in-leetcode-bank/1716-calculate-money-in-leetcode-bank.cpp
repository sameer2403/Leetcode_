class Solution {
public:
    int totalMoney(int n) {
         int div = n/7;
        int rem = n%7;
        int start = 1;
        int sum = 0;
        for(int i=0; i<div; i++) {
            // 7 days a week. If start = 1, then end should be 1 + 6 = 7
            // similarly in next case when start = 2, end = 2+6 = 8
            int end = start+6;
            // Gauss Theorem. From start to end there's 7 numbers
            int tmp = ((start+end)*7)/2;
            sum += tmp;
            // increase for next week
            start++;
        }
        // if there's any remaining days
        for(int i=0; i<rem; i++) {
            sum+=start++;
        }
        return sum;  
    }
};