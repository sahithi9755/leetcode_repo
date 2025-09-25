class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        vector<int>x;
        map<int,int>m;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j]){
                    v.push_back(nums1[i]);
                }
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            m[v[i]]++;
        }
        for(auto itr:m)
        {
            x.push_back(itr.first);
        }
        return x;
    }
};