class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n=arr.size(),i=0,k=0,j=n-1;
        while(k<=j){
            if(arr[k]==2)
            {
                arr[k]=arr[j];
                arr[j]=2;
                j--;
            }
            else if(arr[k]==0){
                arr[k]=arr[i];
                arr[i]=0;
                i++;
            }
            else
                k++;
            if(k<i)
                k=i;
        }
    }
};