#include <iostream>
using namespace std;

int main()
{
    char input, number = '1';

    cout << "Enter the number character you want to print in the last row: ";
    cin >> input;

    for(int i = 1; i <= (input-'1'+1); ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << number << " ";
        }
        ++number;

        cout << endl;
    }
    return 0;
}
