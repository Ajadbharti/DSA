class Solution {

    static boolean isvalidans(int[] arr,int h,int mid){
        long bananacount=0;
        for(int n : arr){
            bananacount+=(n +( long) mid-1)/mid;
        }
        if(bananacount <= h){
            return true;
        }
        else{
            return false;
        }
    }
    public int minEatingSpeed(int[] piles, int h) {
        
        int max=-1;
        for(int i=0;i<piles.length;i++){
            if(piles[i] > max){
                max=piles[i];
            }
        }
        int s=1;
        int e=max;
        int ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;

            if(isvalidans(piles,h,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
}