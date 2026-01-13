class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>m;
        int flag=1;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto itr:m){
            if(itr.second>1){
                flag=0;
            }
        }
       int i,j;
       if(flag==0){
        for(i=0;i<nums.size();i++)
       {
        for(j=0;j<nums.size();j++)
        {
            if(nums[i]==nums[j] && abs(i-j)<=k &&i!=j)
            {
                return true;
                break;
            }
        }
       } 
       }
       return false;
    }
};