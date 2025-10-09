class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        vector<int>v(nums.size());
        for(int i=0;i<nums.size();i++){
            if(i%2!=0){
                odd.push_back(nums[i]);
            }
            else{
                even.push_back(nums[i]);
            }
        }
        sort(odd.rbegin(),odd.rend());
        int j=0,k=0;
        sort(even.begin(),even.end());
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                nums[i]=even[j++];
            }
            else{
                nums[i]=odd[k++];
            }
        }
        return nums;
    }
};