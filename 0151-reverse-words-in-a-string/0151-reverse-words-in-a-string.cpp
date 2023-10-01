class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;

        // Tokenize the input string into words
        while (ss >> word) {
            words.push_back(word);
        }

        // Reverse the order of words
        string reversed;
        for (auto it = words.rbegin(); it != words.rend(); ++it) {
            if (!reversed.empty()) {
                reversed += " "; // Add a single space between words
            }
            reversed += *it;
        }

        return reversed;
    }
};