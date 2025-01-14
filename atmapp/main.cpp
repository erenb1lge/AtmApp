#include <iostream>
using namespace std;

void showMenu()
{
    cout << "**********Menu**********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "************************" << endl;
}

int main()
{

    // check balance, deposit, withdraw, show menu
    int option;
    double balance = 500;
    do
    {
        showMenu();

        cout << "Option: ";
            cin >> option;
        switch (option)
        {
        case 1:
            cout << "Your balance is :" << balance << "$" << endl;
            break;
        case 2:
            cout << "Deposit amount ? ";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3:
            cout << "Withdraw amount ? ";
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                cout << "Not enough Money :(" << endl;
            break;
        }
    } while (option != 4);
    return 0;
}

