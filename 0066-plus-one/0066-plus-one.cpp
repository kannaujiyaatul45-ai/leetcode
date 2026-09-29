class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carray = 1;
        vector<int>answer(digits.size());
        int i = digits.size()-1;

        while(i>=0){
            int sum = digits[i] + carray;
             int digit = sum%10;
            carray = sum/10;

            answer[i] = digit;
            i--;
        }
        if (carray!=0){
            answer.insert(answer.begin(),carray);
        }
        return answer;
    }
};