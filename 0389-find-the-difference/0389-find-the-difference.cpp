class Solution {
public:
    char findTheDifference(string s, string t) {
        int n1=s.length();
        int n2=t.length();
        int sum1=0;
        int sum2=0;
        //add ascy values
        for(int i=0;i<n1;i++){
            sum1+=s[i]-'0';
        }
        for(int i=0;i<n2;i++){
            sum2+=t[i]-'0';
        }
        //difference 
        int diff=abs(sum1-sum2);
        return (diff+'0');
    }
};