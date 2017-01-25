#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
	float balance = 0.0;

	// Create a queue of floats, named transactions
	queue<float> transactions;

	// Push some + and - floats into the transactions queue.
	transactions.push(200.50);
	transactions.push(152);
	transactions.push(20);
	transactions.push(68.23);
	transactions.push(90.50);

	// Loop through all the transactions - while the queue is empty.
	// Within the loop, whatever amount is at the front of the queue,
	// add it to the balance and then pop it off the queue.
	while (!transactions.empty())
	{
		float amount = transactions.front();
		cout << amount << " is pushed to the account" << endl;
		balance += amount;
		transactions.pop();
	}

	cout << "Final balance: $" << balance << endl;

	return 0;
}