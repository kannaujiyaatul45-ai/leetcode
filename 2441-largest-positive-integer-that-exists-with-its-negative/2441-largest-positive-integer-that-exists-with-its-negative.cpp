class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n = nums.size();
        sort (nums.begin(),nums.end());
        int neg =0, pos = n-1;
        while (neg<pos&&nums[neg]<0){
            if (abs(nums[neg])==
            nums[pos]){
                return nums[pos];
            }
            else if 
            (abs(nums[neg])>nums[pos]){
                neg++;
            }
            else {
                pos--;
        }
    }
         return -1;
    }

};