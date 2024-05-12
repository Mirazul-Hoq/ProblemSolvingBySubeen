#include <iostream>
using namespace std;

int main ()
{
    int max_number = 1000, min_number = 1, countExecution = 0;
    while (max_number != 0)
    {
        countExecution++;
        cout << max_number << '\t';
        if (countExecution == 5)
        {
            cout << '\n';
            countExecution = 0;
        }
        max_number--;
    }
    return 0;
}

