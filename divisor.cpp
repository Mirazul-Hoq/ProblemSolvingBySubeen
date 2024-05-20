#include <iostream>
using namespace std;

int main ()
{
    int total, input;
    cin >> total;

    for(int i = 1; i <= total; i++)
    {
        cin >> input;
        cout << "Case " << i <<": ";
        for (int j = 1; j <= input; j++)
        {
            if (input%j == 0)
            {
                cout << j << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}
