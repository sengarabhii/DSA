#include <iostream>
using namespace std;

void pow()
{
    int a, b;
    cout << "Enter number:";
    cin >> a;
    cout << "Enter power:";
    cin >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    cout << "Answer is :" << ans << endl;
}
int main()
{
    while (true)
    {
        pow();
        char ch;
        cout << "For more enter y otherwise n:";
        cin >> ch;
        if (ch == 'n')
        {
            break;
        }
    }
}