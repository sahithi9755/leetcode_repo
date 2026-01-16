class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        float avg;
        vector<int>v;
        int x=nums1.size()+nums2.size();
        for(int i=0;i<nums1.size();i++)
        {
            v.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        if(x%2!=0)
        {
            return v[v.size()/2];
        }
        else{
            return (v[v.size()/2]+v[(v.size()/2)-1])/2.00000;
        }
    }
};