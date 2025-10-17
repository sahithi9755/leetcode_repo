class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            int start=max(0,i-nums[i]);
            int sum=0;
            for(int j=start;j<=i;j++){
                sum+=nums[j];
            }
            res+=sum;
        }
        return res;
    }
};