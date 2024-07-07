class Solution
{
public:
    bool isPalindrome(string s)
    {
        string res = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ' and isalnum(s[i]))
            {
                res += tolower(s[i]);
            }
        }
        int i = 0;

        int h = res.length() - 1;
        while (i <= h)
        {
            if (res[i] != res[h])
            {
                return false;
            }
            i++;
            h--;
        }
        return true;
    }
};
