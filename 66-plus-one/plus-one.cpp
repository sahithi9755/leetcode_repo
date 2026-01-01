class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        vector<int>result;
        int res=0;
        for(int i=digits.size()-1;i>=0;i--){
            res=carry+digits[i];
            result.push_back(res%10);
            carry=res/10;
        }
        if(carry!=0){
            result.push_back(carry);
        }
        reverse(result.begin(),result.end());
        return result;
    }
};