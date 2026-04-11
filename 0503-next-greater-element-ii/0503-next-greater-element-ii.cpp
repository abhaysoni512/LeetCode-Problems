class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;
        // last index ele need to 0 at stack top
        for(int i=n-2; i>=0 ; --i){
            st.push(nums[i]);
        }
        // note: n-1
        for(int i=n-1; i>=0 ; --i){
            // strictly greater than current required
            while(!st.empty() && st.top()<=nums[i]){
                st.pop();
            }
            if(st.empty()) ans[i] = -1;
            else{
                ans[i] = st.top();
            }
            st.push(nums[i]);
        }
        return ans;




       
    }
};