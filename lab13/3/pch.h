//
// pch.h
//

#pragma once

#include "gtest/gtest.h"
#include <string>

using namespace std;

class BankAccount
{
private:
	string lastName;
	string accountNumber;
	double balance;
public:
	BankAccount(string lastName1, string accountNumber1, double balance1);
	~BankAccount();
	
	void getLastName(string lastName1)
	{
		lastName = lastName1;
	}
	void getAccountNumber(string accountNumber1)
	{
		accountNumber = accountNumber1;
	}
	void setBalance(double balance1)
	{
		balance = balance1;
	}
	string getLastName()
	{
		return lastName;
	}

	string getAccountNumber()
	{
		return accountNumber;
	}
	double getBalance()
	{
		return balance;
	}

	void add(double kwota)
	{
		if (kwota <= 0)
			throw invalid_argument("Dodawana kwota musi byc nieujemna");

		balance += kwota;
	}

	void withdraw(double kwota)
	{
		if (kwota <= 0)
			throw invalid_argument("Dodawana kwota musi byc nieujemna");
		if(balance - kwota < 0)
			throw runtime_error("Przekroczono depozyt");

		balance -= kwota;
	}

	bool isMillionaire()
	{
		return getBalance() >= 1000000;
	}

};

BankAccount::BankAccount(string lastName1, string accountNumber1, double balance1)
	:lastName(lastName1), accountNumber(accountNumber1), balance(balance1)
{}

BankAccount::~BankAccount()
{}