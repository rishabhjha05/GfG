class Solution {
  public:
    int maxPerimeter(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int i=arr.size()-1;
        if(arr.size()<3)
            return -1;
        else{
        while(i>=2){
            if((arr[i]+arr[i-1])>arr[i-2] && (arr[i]+arr[i-2])>arr[i-1] &&(arr[i-2]+arr[i-1])>arr[i] )
                return arr[i]+arr[i-1]+arr[i-2];
            i--;
        }}
        return -1;
    }
};