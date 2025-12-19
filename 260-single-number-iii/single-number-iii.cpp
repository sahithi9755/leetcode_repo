class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>v;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto itr:m){
            if(itr.second==1){
                v.push_back(itr.first);
            }
        }
        return v;
    }
};