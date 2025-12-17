class Solution {
public:
    int addDigits(int num) {
        int rem=0;
        while((num/10)!=0){
            int n=0;
            while(num>0){
                rem=num%10;
                n+=rem;
                num=num/10;
            }
            num=n;
        }
        return num;
    }
};