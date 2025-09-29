class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        int dec=0,n=b.size(),i=n-1,j=0;
        while(j<n){
            int bit=(int)b[j]-'0';
            dec+=bit*pow(2,i);
            i--,j++;
        }
        return dec;
    }
};