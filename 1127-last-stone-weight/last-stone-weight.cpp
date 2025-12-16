class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        vector<int> v;
        int n = stones.size();
        sort(stones.begin(), stones.end());
        if(stones.size()==2){
            return stones[n-1]-stones[n-2];
        }
        int ct=0;
        while(ct<stones.size()-1){
            ct++;
            for(int i=0;i<stones.size();i++)
            {
                cout<<stones[i]<<" ";
            }
            cout<<endl;
            if(stones[n-1]==stones[n-2]){
                stones[n-1]=0;
                stones[n-2]=0;
            }
            else{
                stones[n-1]=stones[n-1]-stones[n-2];
                stones[n-2]=0;
            }
            sort(stones.begin(),stones.end());
        }
        int c = 0;
        for (int i = 0; i < n; i++) {
            if (stones[i] == 0) {
                c += 1;
            } else {
                v.push_back(stones[i]);
            }
        }
        cout<<c;
        if (c == n) {
            return 0;
        }
        int v1 = v[0];
        return v1;
    }
};