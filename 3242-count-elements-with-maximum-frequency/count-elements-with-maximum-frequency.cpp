class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>m;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto itr:m){
            v.push_back(itr.second);
        }
        sort(v.rbegin(),v.rend());
        int c=v[0];
        int x=0;
        for(int i=0;i<v.size();i++){
            if(c==v[i]){
                x+=v[i];
            }
        }
        return x;
    }
};