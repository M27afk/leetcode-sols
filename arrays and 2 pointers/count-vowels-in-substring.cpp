/*
Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.
*/

int maxVowels(string s, int k) {
        int l=0,r=0,maxi=0,c=0;

        while(r<s.length()){
            
            if(s[r]=='a'||s[r]=='e'||s[r]=='i'||s[r]=='o'||s[r]=='u')
            c++;

            if((r-l+1)==k){
                maxi=max(maxi,c);
                if(s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u')
                c--;

                l++;
            }
            
            r++;
        }   
        return maxi;
    }
