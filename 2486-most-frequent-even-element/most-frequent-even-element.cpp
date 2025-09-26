class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>m;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                m[nums[i]]++;
            }
        }
        int max=0;                                 
        for(auto itr:m){
            if(max<=itr.second){
                max=itr.second;
            }
        }
        for(auto itr:m){
            if(itr.second==max){
                v.push_back(itr.first);
            }
        }
        if(v.size()==0){
            return -1;
        }
        return v[0];
    }
};