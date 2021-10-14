#include <iostream>
#include <Math.h>
using namespace std;

int main()
{   int a = 0;
    int b = 0;
    int c = 0;
    float D = 0;
    float x1 = 0;
    float x2 = 0;

    cout << " Enter the value a = ";
    cin >> a;
    cout << " Enter the value b = ";
    cin >> b;
    cout << " Enter the value c = ";
    cin >> c;

    D=b*b - 4*a*c;

    if(D>0) {
        x1= ((-b - sqrt(D))/2*a);
        x2= ((-b + sqrt(D))/2*a);

        cout << " D = " << sqrt(D) << endl;
        cout << " x1: " << x1 << endl;
        cout << " x2: " << x2 << endl;
    }
    else if (D<0) {
        cout << "Failed";

    }
    else {
        x1= (-b/(2*a));
        cout << " x1: " << x1<< endl ;
    }
}
