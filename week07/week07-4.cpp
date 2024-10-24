class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            //甚麼事都不用做
        }
        return word.length();
    }
};
