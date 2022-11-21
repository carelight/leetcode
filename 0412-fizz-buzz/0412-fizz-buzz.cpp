class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>num;
        for (int i=1; i<=n; i++)
        {
            if (!(i % 3))
            {
                if (!(i % 5))
                    num.push_back("FizzBuzz");
                else
                    num.push_back("Fizz");
            }
            else if (!(i % 5))
                num.push_back("Buzz");
            else
                num.push_back(to_string(i));
        }
        return num;
    }
};