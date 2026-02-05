class Solution {
  public:
    bool ispos(vector<int> & arr, int maxi,int st){
        int curr = 1;
        int sum = 0;
        for(int i = 0;i<arr.size();i++){
            sum += arr[i];
            if(sum > maxi){
                sum = arr[i];
                curr++;
            }
        }
        return curr <= st;  
        
    }
    int findPages(vector<int> &arr, int k) {
        int low = 0;
        int high = 0;
        for(int i : arr){
            low = max(low,i);
            high += i;
        }
        int ans = 0;
        while(low <= high){
            int mid = (low+high) / 2; 
            if(ispos(arr,mid,k)){
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};