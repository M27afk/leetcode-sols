/*

Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

Input: s = "leetcode"
Output: "leotcede"

*/

string reverseVowels(string s) {
        string vow="aeiouAEIOU";
        int l=0,r=s.length()-1;
        while(l<r){
            while(l<r){
                size_t found=vow.find(s[l]);
                if(found!=string::npos)
                break;

                l++;
            }
            while(l<r){
                size_t found=vow.find(s[r]);
                if(found!=string::npos)
                break;

                r--;
            }
            swap(s[l],s[r]);
            l++;r--;
        }
        
    return s;
}
