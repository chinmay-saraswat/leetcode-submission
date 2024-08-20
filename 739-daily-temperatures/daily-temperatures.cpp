class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       
       int n = temperatures.size();
       vector<int> result(n,0);
       stack<int> s ;
       for(int i = 0 ; i<n;++i){
            while(!s.empty()&&temperatures[i]>temperatures[s.top()]){
                int prev=s.top();
                s.pop();
                result[prev]=i-prev;
            }
            s.push(i);
       }
       return result;
    }
};