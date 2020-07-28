#include <iostream>
#include <string>
#include "Stack.h"
#include "Sort.h"
using namespace std;

int main() {
	Stack stack1;
	
	int num[]{ 1,2,3,4,4,3,2,1 };
	int size1 = sizeof(num) / sizeof(num[0]);

	for (int n = 0; n < size1; n++)
		stack1.push(num[n]);

	cout << "List that is Palindrome: ";
	stack1.display();
	cout << "Display (1) if list is Palindrome, (0) if not: " << stack1.isPalindrome(num, size1) << endl;
	
	Stack stack2;
	Sort sort;

	int number;

	cout << "Enter your student id: 0";
	cin >> number;
	
	int id[6] { 0 };
	int res;
	int i = 5;

	int ref = number;
	while (ref != 0) {
		res = ref % 10;
		id[i] = res;
		ref /= 10;
		i--;
	}

	for (int j = 0; j < 6; j++) {
		for (int k = j + 1; k < 6; k++) {
			if (id[j] == id[k])
				id[k] = id[k] + 10;
		}
		stack2.push(id[j]);
	}

	cout << "Display (1) if student id 0" << number << " is a Palindrome, (0) if not: " << stack2.isPalindrome(id, 6) << endl;

	sort.bubble(id, 6);
}