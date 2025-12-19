class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        stack<int>st;
        stack<int>st1;
        stack<int>st2;
        vector<int>v;
        st.push(nums[0]);
        st1.push(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(st.top()>st1.top()){
                st.push(nums[i]);
            }
            else{
                st1.push(nums[i]);
            }
        }
        while(!st.empty()){
            st2.push(st.top());
            st.pop();
        }
        while(!st2.empty()){
            v.push_back(st2.top());
            st2.pop();
        }
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        while(!st2.empty()){
            v.push_back(st2.top());
            st2.pop();
        }
        return v;
    }
};