#include <iostream>
using namespace std;

int main()
{
    int Hcode = 0;
    int num = 0;


    cout << "Enter your number:" << endl;
    cin >> num;


    for ( int i = num % 10; num != 0; )
    {
        if ( num % 10 == num / 10 % 10 )
            Hcode += num % 10;

        if ( num < 10 && num == i )
            Hcode += num;
            num /= 10;
    }

    cout << "Your hashcode =  " << Hcode << endl<<endl;
}
