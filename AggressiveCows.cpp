class Solution {
  public:
    int place(vector<int> &st,int c, int dist){
        int cnt = 1;
        int last = st[0];
        for(int i = 1;i<st.size();i++){
            if(st[i] - last >= dist){
                cnt++;
                last = st[i];
            }
        }
        return cnt >= c;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(),stalls.end());
        int low = 1;
        int n = stalls.size();
        int ans = 0;
        int high =  stalls[n-1] - stalls[0];
        while(low <= high){
            int mid = (low + high) / 2;
            if(place(stalls,k,mid)){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        
        return ans ;
    }
};