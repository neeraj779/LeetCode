class Solution
{
public:
    int getLucky(string s, int k)
    {
        int num = 0;

        // Convert the string to an integer by replacing letters with their positions
        for (int i = 0; i < s.length(); ++i)
        {
            int letterPosition = s[i] - 'a' + 1;
            if(letterPosition >= 10)
                num += letterPosition%10 + letterPosition/10; // since digit is only 2 digit
            else
                num += letterPosition;
        }

        k--;
        // Perform the transformations k times
        while (k--)
        {
            int digitSum = 0;

            // Calculate the sum of digits
            while (num)
            {
                int digit = num % 10;
                digitSum += digit;
                num /= 10;
            }

            // Update num for the next iteration
            num = digitSum;
        }

        return num;
    }
};
