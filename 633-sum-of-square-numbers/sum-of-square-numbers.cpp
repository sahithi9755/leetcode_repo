class Solution {
public:
    bool judgeSquareSum(int c) {
        long long pro=1;
        long left=0;
        long right=sqrt(c);
        while(left<=right){
            pro=(left*left)+(right*right);
            if(pro==c){
                return true;
            }
            if(pro>c){
                pro=pro/right;
                right--;
            }
            left++;
        }
        return false;
    }
};