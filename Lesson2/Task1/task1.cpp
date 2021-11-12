#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int result = 0;


    cout << "Vvedite chislo: ";
    cin >> num;


    for (int i = num; i > 0; i/=10)
    {
        result += i%10;
    }

    cout << "sum = ";
    cout << result;

}
