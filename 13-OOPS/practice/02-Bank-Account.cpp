#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
  int accountNumber;
  string accountHolder;
  int balance;

public:
  BankAccount(int accountNumber, string accountHolder, int balance)
  {
    this->accountNumber = accountNumber;
    this->accountHolder = accountHolder;
    this->balance = balance;
  }

  void deposit(int money)
  {
    balance += money;
  }
  int withdraw(int amountNeed)
  {
    if (balance >= amountNeed)
    {
      balance -= amountNeed;
    }
    else
    {
      cout << "Insufficient balance." << endl;
    }
  }

  int getBalance()
  {
    return balance;
  }
};
int main()
{
  BankAccount ac1(1234, "Neha", 30);
  ac1.deposite(10);
  cout << ac1.getBalance();
  return 0;
}
