class Solution {
public:
    int maxFreqSum(string s) {
        string vowels = "aeiou";
        int vowel[26] = {0};  
        int consonant[26] = {0};  
        
        for(char c : s) {
            c = tolower(c);  
            
            if(c >= 'a' && c <= 'z') { 
                bool isVowel = false;
                

                for(char v : vowels) {
                    if(c == v) {
                        isVowel = true;
                        break;
                    }
                }
                
                if(isVowel) {
                    vowel[c-'a']++;  
                } else {
                    consonant[c-'a']++;  
                }
            }
        }
    
        int maxVowel = 0;
        for(int i=0; i<26; i++) {
            if(vowel[i] > maxVowel) {
                maxVowel = vowel[i];
            }
        }
        
       
        int maxConsonant = 0;
        for(int i=0; i<26; i++) {
            if(consonant[i] > maxConsonant) {
                maxConsonant = consonant[i];
            }
        }
        
        return maxVowel + maxConsonant;
    }
};