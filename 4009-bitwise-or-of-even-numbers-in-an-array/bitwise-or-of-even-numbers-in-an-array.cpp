class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                v.push_back(nums[i]);
            }
        }
        int c=0;
        for(int i=0;i<v.size();i++){
            c=c|v[i];
        }
        return c;
    }
};