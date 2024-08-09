class Solution {
public:
    int strStr(string haystack, string needle) {
        int nlen=needle.size();
        int hlen=haystack.size();
        int nindex=0;
        for(int i= 0;i<hlen;i++){
            if(haystack[i]==needle[nindex]){
                nindex++;
            }
            else{
                i=i-nindex;
                nindex=0;
            }
            if(nindex==nlen){
                return i-nlen+1;
            }
        }
        return -1;
    }
};