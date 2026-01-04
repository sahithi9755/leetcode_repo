class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int j=0;
        int sum=0;
        int c=0;
        int sum1=0;
        while(j<nums.size()){
            sum=nums[j]+1;
            c=2;
            for(int i=2;i<=nums[j]/2;i++){
                if(nums[j]%i==0){
                    c++;
                    sum+=i;
                } 
                if(c>4){
                    break;
                }
            }
            if(c==4){
                sum1+=sum;
            }
            j++;
        }
        return sum1;
    }
};