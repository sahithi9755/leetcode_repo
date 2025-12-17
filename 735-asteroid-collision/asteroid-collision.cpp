class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int>v;
        st.push(asteroids[0]);
        int c=0;
        for(int i=1;i<asteroids.size();i++){
            if(st.empty()||(asteroids[i]>0&&st.top()>0)||(asteroids[i]<0&&st.top()<0)||(asteroids[i]>0&&st.top()<0)){
                st.push(asteroids[i]);
            }
            else{
                    int x=asteroids[i];
                    while(!st.empty()&&st.top()>0&&x<0)
                    {
                        if(st.top()>abs(x)){
                            x=st.top();
                            st.pop();
                        }
                        else if(st.top()==abs(x)){
                            x=0;
                            st.pop();
                            c++;
                        }
                        else{
                            st.pop();
                        }
                    }
                    if(x!=0){
                        st.push(x);
                    }
            }
            
        }
        while(!st.empty()){
             v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(), v.end());
        return v;
    }
};