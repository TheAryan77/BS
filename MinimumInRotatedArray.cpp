class Solution {
public:
//jisme sorted ho waha se lowest element utha lenge ,
// or doosre mein bhej denge.. left ka lowest ,arr[low] hoga , 
//phir right mein bhej denge (low = mid + 1) or right ka arr[mid],
// minimum or left mein bhej denge which is high = mid - 1;
    int findMin(vector<int>& arr) {
        int low = 0;
        int high = arr.size() - 1;
        int ans = INT_MAX;
        while(low <= high){
            int mid = (low + high ) /2 ;
            if(arr[low] <= arr[mid]){
                ans = min(ans,arr[low]);
                low = mid + 1;

            }
            else{
                ans = min(ans,arr[mid]);
                high = mid -1;
            }
        }
        return ans;
    }
};