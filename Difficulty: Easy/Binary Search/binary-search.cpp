class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int i=0,j=arr.size()-1,idx=-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid]==k)
            {
                idx=mid;
                j=mid-1;
            }
            else if(arr[mid]<k)
                i=mid+1;
            else
                j=mid-1;
        }
        return idx;
        
    }
};