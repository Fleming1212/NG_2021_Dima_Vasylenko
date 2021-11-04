#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Size: ";
    cin >> num;
    cout << endl;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if ((i == 0) || (j == 0) || (i == num - 1) || (j == num - 1))
            {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
