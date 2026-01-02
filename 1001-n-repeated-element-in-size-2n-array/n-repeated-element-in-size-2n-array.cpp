class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int>m;
        int n;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto itr:m){
            if(itr.second>1){
                n=itr.first;
                break;
            }
        }
        return n;
    }
};