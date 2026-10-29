class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int product = 1;
       int sum = 0;
       while (temp != 0){
        int digit = temp % 10;
        product *= digit;
        sum += digit;
        temp = temp / 10;
       }
       int ans = product + sum;
         return n % ans ==0;
    }
};