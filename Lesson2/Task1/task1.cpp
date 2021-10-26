#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int result = 0;
    int temp = 0;

    cout << "Vvedite chislo: ";
    cin >> num;
    temp = num;

    for (int i = 0; temp > 0; i++){
        result += temp%10;
        temp/=10;

    }
    cout << result;

}
