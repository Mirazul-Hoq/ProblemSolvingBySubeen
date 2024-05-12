#include <iostream>
using namespace std;

int main ()
{
    int total, number;
    cin >> total;
    for (int i = 0; i < total; i++)
    {
        cin >> number;
        string result;

        result = number%2 == 0 ? "even" : "odd";
        cout << result << '\n';
    }

    return 0;
}
