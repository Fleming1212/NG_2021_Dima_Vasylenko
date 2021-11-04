#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int result = 0;


    cout << "Vvedite chislo: ";
    cin >> num;


    for (int i = 0; num > 0; i++)
    {
        result += num%10;
        num/=10;
    }

    cout << "sum = ";
    cout << result;

}
