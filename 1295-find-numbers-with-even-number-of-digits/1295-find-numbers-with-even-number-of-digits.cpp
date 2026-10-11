class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evencount = 0;
        for (int num : nums){
            int len = to_string(num).length();
            if (len % 2 == 0){
                evencount ++;
            }
        }
      return evencount;  
    }
};