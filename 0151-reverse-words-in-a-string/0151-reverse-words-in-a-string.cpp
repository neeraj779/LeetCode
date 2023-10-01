class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;
        while(ss >> word)
            words.push_back(word);
        
        string reversed;
        for(int i = words.size() - 1; i>=0; --i){
            if(reversed.empty() == false)
                reversed += ' ';
            reversed += words[i];
        }
        return reversed;
    }
};