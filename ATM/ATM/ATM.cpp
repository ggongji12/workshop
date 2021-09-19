// ATM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

using namespace std;

void showMenu() {

    cout << "**********MENU**********" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "********************" << endl;
}

int main() {

    int option;
    int recieptOption;
    double balance = 1000;

    do {
        showMenu();
        cout << "Option: ";
        cin >> option;
        system("cls");

        if (option >= 5) {
            cout << "Invalid Entry!\t\n";
            Sleep(2500);
            system("cls");
            showMenu();
            
        }

        switch (option) {
        case 1: cout << "Balance is:" << balance << " $ " << endl; break;
        case 2: cout << "Deposit amount: ";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3: cout << "Withdraw amount: ";
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                cout << "Insufficient Funds!\t\n";

            cout << "Would you like a reciept? 1. YES   2. NO\t\n";
            cin >> recieptOption;
            if (recieptOption == 1) {
                cout << "Your Balance is: " << balance << " $ " << endl; 
                cout << "You withdrew: " << withdrawAmount << "$" << endl; 
                cout << "Thank you! Have a good day!\t\n";
                break;
            }
            else if (recieptOption == 2) {
                cout << "Thank you! Have a good day!\t\n";               
                break;
            }
            else {
            }
            break;
        }
        //check balance, deposit, withdraw, show menu
        system("pause>0");
    } while (option != 4);
}