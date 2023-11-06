class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[27] = {0};
        int n = s.length();
        if(n != t.length()) return false;
        for(int i = 0;i<n;i++) arr[s[i]-97]++;
        for(int i = 0;i<n;i++) arr[t[i]-97]--;

        for(int i = 0;i<=26;i++){
            if(arr[i] !=0 ) return false;

        }return true;
    //if we can't use extra space, just sort both string and check 
    }
};
