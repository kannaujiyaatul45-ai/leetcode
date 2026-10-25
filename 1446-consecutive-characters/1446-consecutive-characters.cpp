class Solution {
public:
    int maxPower(string s) {
        int maxi =1;
       int cSteak =0;
       int j = 0;
       for (int i = 0; i < s.size(); i++){
        if (s[i] == s[j]){
           cSteak++;
        }
        else{
            maxi=max(maxi,cSteak);
            j=i;
            cSteak = 1;
        }
       }
       maxi=max(maxi,cSteak);
       return maxi;
    }
};