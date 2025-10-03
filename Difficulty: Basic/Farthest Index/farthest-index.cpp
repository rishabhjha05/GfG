class Solution {
  public:
    int findIndex(vector<int>& arr, int x) {
        int i=arr.size()-1;
        while(i>=0){
            if(arr[i]==x)
                return i+1;
            i--;
        }
        return -1;
    }
};