class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>v;
        vector<long long>v1(nums.size(),0);
        int max1=0;
        for(int i=0;i<nums.size();i++){
                max1=max(max1,nums[i]);
                v.push_back(nums[i]+max1);
        }
        v1[0]=v[0];
        for(int i=1;i<v.size();i++){
            v1[i]=v1[i-1]+v[i];
        }
        return v1;
    }
};