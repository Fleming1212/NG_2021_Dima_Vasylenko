#include <iostream>

using namespace std;

int main() {
    int pincode[10] = {
        1111,
        2222,
        3333,
        4444,
        5555,
        6666,
        7777,
        8888,
        9999,
        0000
    };
    int money[10];
    int bankAccount;
    int currentpin;
    int currentmoney;
    int operation;
    int moneyfstart = 500;

    for (int i = 0; i < 10; i++) {
        money[i] = moneyfstart;
    }
    while (true) {
        cout << "Enter your bank account" << endl;
        cin >> bankAccount;

        while (bankAccount < 0 && bankAccount > 10) {
            cout << "You entered wrong bank account, enter again: " << endl;
            cin >> bankAccount;
        }

        cout << "Enter your pincode " << bankAccount << endl;
        cin >> currentpin;

        while (currentpin != pincode[bankAccount - 1]) {
            cout << "Your pincode is wrong ,enter your pincode one more time, please: " << endl;
            cin >> currentpin;
        }
        cout << "Successful pin" << endl << endl;

        cout << "Your money " << money[bankAccount - 1] << endl <<
            "What can i do" << endl <<
            "1 - add money" << endl <<
            "2 - withdraw money" << endl;
        cin >> operation;

        switch (operation) {
        case 1:
            cout << "How much do you want to put?" << endl;
            cin >> currentmoney;

            money[bankAccount - 1] += currentmoney;

            cout << "Money in your bank account: " << money[bankAccount - 1] << endl;
            break;
        case 2:
            cout << "How much do you want to take?" << endl;
            cin >> currentmoney;

            while (money[bankAccount - 1] < currentmoney) {
                cout << " You don't have much money,enter again: " << endl;
                cin >> currentmoney;
                if (money[bankAccount - 1] >= currentmoney) {
                    money[bankAccount - 1] -= currentmoney;
                    break;
                }
            }

            cout << "Money in your bank account: " << money[bankAccount - 1] << endl;
            break;
        default:
            cout << "Enter your operation again :" << endl;
            cin >> operation;

        }
    }

}
