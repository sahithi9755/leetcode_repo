class Solution {
public:
    int totalMoney(int n) {
        int x=n;
        int sum=0;
        vector<int>v;
        while(n--){
            sum=sum+1;
            v.push_back(sum);
        }
        sum=0;
        int cnt=0;
        if(x<=7){
            for(int i=0;i<x;i++){
                sum+=v[i];
                cout<<v[i]<<" ";
            }
        }
        else
        {
            sum = 0;
            for(int i=0;i<v.size();i++)
            {
                int j = i+6;
                for(int k = i ; k <= j ; k++){
                    if(cnt < x){
                        sum += v[k];
                        cnt++;
                    }
                    else return sum;
                }
            }
        }
        return sum;
    }
};