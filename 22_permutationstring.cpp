#include <iostream>
#include <string>
#include <array>
using namespace std;
int main()
{
    char chars[] = {'a', 'a', 'a', 'b', 'b', 'c', 'd', 'd', 'd', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e','e','e'};
    string s;
    int count = 1;
    s.push_back(chars[0]);
    for (int i = 1; i < size(chars); i++)
    {
        while (i < size(chars) && chars[i] == s.back())
        {
            count++;
            i++;
        }
        if (count > 1)
        {
            while (count >= 10)
            {
                int quot = count / 10;
                char c = '0' + quot;
                s.push_back(c);
                count = count % 10;
            }
            char c = '0' + count;
            s.push_back(c);
        }
        count = 0;
        if (i < size(chars))
        {
            s.push_back(chars[i]);
            count++;
        }
    }
    cout << s;
}