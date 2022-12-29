//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        // code here
        stack<int> st;
        st.push(asteroids[0]);
        for(int i=1;i<N;i++)
        {
            if(st.top()<0 && asteroids[i]>0)
            {
                st.push(asteroids[i]);
                continue;
            }
            if(!st.empty() && st.top()>0 && asteroids[i]<0)
            {
                while(!st.empty() && st.top()<abs(asteroids[i]) && st.top()>0 )
                {
                    st.pop();
                }
                if(!st.empty() && st.top()>abs(asteroids[i]) && st.top()>0)
                {
                    continue;
                }
                else if(!st.empty() && st.top()==abs(asteroids[i]) && st.top()>0)
                {
                    st.pop();
                    continue;
                }
            }
            st.push(asteroids[i]);
        }
        vector<int> v;
        while(!st.empty())
        {
            int k=st.top();
            st.pop();
            v.push_back(k);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends