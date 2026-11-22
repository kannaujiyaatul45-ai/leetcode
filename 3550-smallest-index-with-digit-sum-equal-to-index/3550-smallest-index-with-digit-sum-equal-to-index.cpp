class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            int sum = 0, t =nums[i];
            while(t){
                sum += t % 10;
                t/=10;
            }
            if(i==sum)
            return i;
        }
        return -1;
    }
};