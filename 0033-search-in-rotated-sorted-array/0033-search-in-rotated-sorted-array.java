class Solution {
    static int findpivotindex(int[] nums){
        int n=nums.length;
        int s=0;
        int e=n-1;
        int ans=-1;

        if(nums[s] < nums[e]){
            return -1;

        }
        while( s<= e){
            int mid=s+(e-s)/2;
            if(nums[mid] <= nums[n-1]){
                e=mid-1;
            }
            else{
                ans=mid;
                s=mid+1;
            }
        }
        return ans;
    }
    static int binarysearch(int nums[],int s,int e,int target){
        int n=nums.length;
        while( s<= e){
            int mid=s+(e-s)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(target < nums[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return -1;
    }
    public int search(int[] nums, int target) {
        int pivotindex=findpivotindex(nums);
        int n=nums.length;
        if(pivotindex == -1){
            int ans=binarysearch(nums,0,n-1,target);
            return ans;
        }
        else{
            int startarr1=0;
            int endarr1=pivotindex;

            if(target >= nums[startarr1] && target <= nums[endarr1]){
                int ans=binarysearch(nums,startarr1,endarr1,target);
                return ans;
            }

            int startarr2=pivotindex + 1;
            int endarr2=n-1;

            if(target >= nums[startarr2] && target <= nums[endarr2]){
                int ans=binarysearch(nums,startarr2,endarr2,target);
                return ans;
            }
        }
        return -1;
    }
}