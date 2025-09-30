class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            int sum=0,j=i;
            while(j<n && sum<target){
                sum+=arr[j++];
            }
            if(sum==target)
                return {i+1,j};
        }
        return {-1};
    }
};