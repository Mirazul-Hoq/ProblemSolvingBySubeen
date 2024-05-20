#include  <iostream>
using namespace std;

int main ()
{
    int total, input;
    cin >> total;
    for (int i = 0; i < total; i++)
    {
        cin >> input;
        for (int j = 1; j <= input; j++)
        {
            for (int k = 1; k <= input; k++)
            {
                cout << "*";
                if (k == input) cout << '\n';
            }
        }
    }
    return 0;
}
