class Solution {
public:
    int maximum69Number (int num) {
        int temp = num;
         int  idx = -1;
        int i = 0;
        while(temp > 0){
            int digit = temp % 10;
            temp = temp / 10;
            if (digit == 6){
                idx = i;
            }
            i++;
        }
        return num + 3 * (int)pow(10, idx );
    }
};