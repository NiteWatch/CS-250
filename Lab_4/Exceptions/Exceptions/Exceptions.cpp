#include <iostream>
using namespace std;

#include "List.hpp"

int main()
{
	List myList;

	string menu[] = { "Insert", "Delete", "Get Item" };

	while (true)
	{
		//format the user interaction
		cout << endl << "-------------------------" << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << i << ". " << menu[i] << endl;
		}

		//declare and ask user for information
		int choice;
		cout << "Which? ";
		cin >> choice;

		if (choice == 0)
		{
			int position;
			string newItem;

			//take in user information
			cout << "Index: ";
			cin >> position;
			cout << "New value: ";
			cin >> newItem;

			//try catch block to throw errors
			try
			{
				myList.Insert(newItem, position);
			}
			catch (out_of_range& e)
			{
				cout << "Exception: " << e.what() << endl;
			}
			
			
		}
		else if (choice == 1)
		{
			int position;
			
			//take in user information
			cout << "Index: ";
			cin >> position;

			//try catch block to throw exceptions
			try
			{
				myList.Delete(position);
			}
			catch (out_of_range& e)
			{
				cout << "Exception: " << e.what() << endl;
			}	
		}
		else if (choice == 2)
		{
			int position;
			
			//take in user information
			cout << "Index: ";
			cin >> position;

			//try catch block to throw exceptions
			try
			{
				string item = myList.GetItem(position);
				cout << "Item is " << item << endl;
			}
			catch (out_of_range& e)
			{
				cout << "Exception: " << e.what() << endl;
			}
		}
	}
	return 0;
}