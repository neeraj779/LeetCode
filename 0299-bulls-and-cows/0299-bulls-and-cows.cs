public class Solution {
    public string GetHint(string secret, string guess) {
        int bulls = 0;
        int cows = 0;
        int n = secret.Length;
        char[] secretArr = secret.ToCharArray();
        char[] guessArr = guess.ToCharArray();

        for(int i = 0; i < n; ++i) {
            if(secretArr[i] == guessArr[i]) {
                bulls++;
                guessArr[i] = '-';
                secretArr[i] = '-';
            }
        }

        for(int i = 0; i < n; i++) {
            int index = Array.IndexOf(secretArr, guessArr[i]);
            if(index != -1 && guessArr[i] != '-') {
                cows++;
                secretArr[index] = '-';
            }
        }

        string hint = bulls + "A" + cows + "B";
        return hint;
    }
}