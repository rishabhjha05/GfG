class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int mx=INT_MIN,mn=INT_MAX;
        for(int ele : arr){
            mx=max(mx,ele);
            mn=min(mn,ele);
        }
        return {mn,mx};
    }
};