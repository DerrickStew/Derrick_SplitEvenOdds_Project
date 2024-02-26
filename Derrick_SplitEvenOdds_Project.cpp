// Derrick_SplitEvenOdds_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "intLinkedList.h"

using namespace std;

int main()
{
	intLinkedList originalList, evensList, oddsList;
	int userInput;

	// get user generated list
	cout << "Enter integers ending with -999" << endl;
	cin >> userInput;
	while ( userInput != -999)
	{
		originalList.insertLast(userInput);
	}

	// print original list
	cout << "list:";
	linkedListIterator<int> it;
	for (it = originalList.begin(); it != originalList.end(); ++it)
		cout << " " << *it;

	// seperate integers
	originalList.splitEvenOddsList(evensList, oddsList);

	// print even list
	for (it = evensList.begin(); it != evensList.end(); ++it)
		cout << " " << *it;

	// print odd list
	for (it = oddsList.begin(); it != oddsList.end(); ++it)
		cout << " " << *it;
}