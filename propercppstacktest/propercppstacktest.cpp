#include <iostream>
#include <stack>
#include <vector>
#include <string>

/// locale ???
#include <cstdio>
#include <clocale>
#include <ctime>
#include <cwchar>
#include <Windows.h>

using namespace std;

int main()
{
	locale swedish("swedish");
	locale::global(swedish);

	stack<string> tal;
	/*
	stack<command> commandStack;
	cout << "Hello World!\n";

	tal.push(50);
	tal.push(30);
	tal.push(2);

	cout << tal.size() << endl;

	int n = tal.top();

	cout << n << endl;

	tal.pop();

	cout << tal.size() << endl;
	*/
	int option = 1;

	while (true) {
		cout << "\n1. lägg till ord i stack" << endl;
		cout << "2. visa stack" << endl;
		cout << "3. undo stack" << endl;

		cin >> option;

		if (option == 1) {
			string cmd1;
			cout << "Ange tal: " << endl;
			cin >> cmd1;
			tal.push(cmd1);
		}
		else if (option == 2)
		{
			cout << tal.top() << endl;
			cout << "stacken är " << tal.size() << " object";
		}
		else if (option == 3)
		{
			if (tal.empty() == true) {
				cout << "din stack är empty" << endl;
			}
			else {
				tal.pop();
			}

		}
		else {
			cout << "välj en option" << endl;
		}
	}
}

class command {
public:
	string connandName;

};

