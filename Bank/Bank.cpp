#include <iostream>

using namespace std;

struct account
{
	int account_number;
	int Balance_number;
	char name[20];
};

struct account person;
int ID;
char name[20];

void make_account(void)
{
	cout << endl << "[계좌개설]" << endl;
	cout << "고객이름:"; cin >> person.name;
	cout << "계좌ID:";	cin >> person.account_number;
	cout << "입금액:";	cin >> person.Balance_number;
	cout << endl;
}

void deposit(void)
{
	int balance;
	cout << endl << "[입금]" << endl;
	cout << "계좌ID:"; cin >> ID;

	if (ID == person.account_number)
	{
		cout << "이름:"; cin >> name;
		if (!strcmp(name, person.name))
		{
			cout << "입금액:"; cin >> balance;
			person.Balance_number += balance;
			cout << "입금완료" << endl;
		}
		else if
			(cout << "일치하지 않는 이름" << endl);
	}
	else if (cout << "일치하지 않는 계좌ID" << endl);
}

void Withdrawal(void)
{
	int Withdrawal_number;
	cout << endl << "[출금]" << endl;
	cout << "계좌ID:"; cin >> ID;

	if (ID == person.account_number)
	{
		cout << "이름:"; cin >> name;
		if (!strcmp(name, person.name))
		{
			cout << "출금액:"; cin >> Withdrawal_number;
			if (person.Balance_number >= Withdrawal_number)
			{
				person.Balance_number -= Withdrawal_number;
				cout << "출금완료" << endl;
			}

			else
				cout << "잔액 부족!" << endl;
		}
		else if
			(cout << "일치하지 않는 이름" << endl);
	}
	else if
		(cout << "일치하지 않는 계좌ID" << endl);
}

void account_information(void)
{
	cout << endl << "[계좌정보]" << endl;
	cout << "계좌ID: " << person.account_number << endl;
	cout << "이름: " << person.name << endl;
	cout << "입금액: " << person.Balance_number << endl;
	cout << endl;

};

int main(void)
{
	int num;
	int end = 0;

	while (1)
	{
		cout << "-----Menu-----" << endl;
		cout << "1. 계좌개설" << endl;
		cout << "2. 입금" << endl;
		cout << "3. 출금" << endl;
		cout << "4.계좌정보 전체 출력" << endl;
		cout << "5.프로그램 종료" << endl;
		cout << "선택:";
		cin >> num;

		switch (num)
		{
		case 1:
			make_account();
			break;
		case 2:
			deposit();
			break;
		case 3:
			Withdrawal();
			break;
		case 4:
			account_information();
			break;
		case 5:
			end = 1;
			break;
		default:
			cout << endl << "재입력" << endl << endl;
			break;
		}
		if (end == 1)
		{
			cout << "프로그램을 종료 합니다";
			break;
		}
	}
	return 0;
}
