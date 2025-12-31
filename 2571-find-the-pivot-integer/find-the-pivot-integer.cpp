class Solution {
public:
    int pivotInteger(int n) {
        int sum=n*(n+1)/2;
        int x=sqrt(sum);
        if(x*x==sum){
            cout<<sqrt(sum);
            return x;
        }
        return -1;
    }
};