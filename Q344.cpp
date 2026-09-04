class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0;
        int n=s.size();
        int end=n-1;
        while(st<end){
            swap(s[st++],s[end--]);
        }
    }
};