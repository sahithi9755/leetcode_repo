class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left=0;
        int right=k;
        int sum=0;
        vector<double>v;
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
        }
        v.push_back((double)sum/k);
        cout<<sum<<" ";
        while(right<nums.size()){
            sum=sum-nums[left];
            left++;
            sum=sum+nums[right];
            right++;
            cout<<sum<<" ";
            v.push_back((double)sum/k);
        }
        sort(v.rbegin(),v.rend());
        return v[0];
    }
};