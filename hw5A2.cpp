#include <iostream>
#include <string>

using namespace std;

int daysToFund(int startBalance, int dailyDeposit) {
    int balance = startBalance;
    int days = 0;

    while (balance < 42500) {
        balance += dailyDeposit;
        days++;

        cout << "Day " << days << ": deposited " << dailyDeposit << ", balance now " << balance << endl;
    }

    return days;
}

int main() {
    cout << "Enter the starting Vault balance: ";
    int startingbalance;
    cin >> startingbalance;

    cout << "Enter the daily deposit amount: ";
    int dailydeposit;
    cin >> dailydeposit;

    cout << "--- Vault Savings Plan ---" << endl;

    int days = daysToFund(startingbalance, dailydeposit);

    cout << "The Vault was funded in " << days << " days!" << endl;

    return 0;
}