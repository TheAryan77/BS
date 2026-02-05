//Simple intution : jo iska minimum ki index hogi wahi hamara , number of rotation hoga.. 
//cause minimum should be at 0 , but if it's not that means it's rotated 
//that times , that the index of minimum at right now 

class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int low = 0;
        int ind = 0;
        int ans = INT_MAX;
        int high = arr.size() -1 ;
        while(low<=high){
            int mid = (low + high) / 2;
            if(arr[low] <= arr[mid]){
                if(arr[low] < ans){
                    ans = arr[low];
                    ind = low;
                }
                low = mid + 1;
            }
            else{
                if(arr[mid] < ans){
                    ans = arr[mid];
                    ind  = mid; 
                }
                high = mid - 1; 
            }
        }
        return ind;
    }
};
