#pragma once
#include <iostream>

using namespace std;

class Stack {
private:
	struct Node {
		int value;
		Node* next;

		Node(int value, Node* next = NULL) {
			this->value = value;
			this->next = next;
		}
	};
	Node* top;

public:
	Stack() {
		top = NULL;
	}
	void push(int num) {
		top = new Node(num, top);
	}
	int pop() {
		if (isEmpty()) {
			cout << "Stack is EMPTY! Default value: ";
			return 0;
		}
		else {
			int num = top->value;
			Node* ref_node = top;
			top = top->next;
			delete ref_node;

			return num;
		}
	}
	bool isEmpty() {
		Node* ref = top;
		if (ref == NULL)
			return true;
		else
			return false;
	}
	void display() {
		Node* ref = top;

		if (isEmpty())
			cout << "Stack is EMPTY!";
		else {
			while (ref != NULL){
				cout << ref->value << " ";
				ref = ref->next;
			}
		}
		cout << endl;
	}
	bool isPalindrome(int line[], int len) {
		bool pal = true;
		for (int i = 0; i < len; i++) {
			int ref = pop();
			if (line[i] != ref) {
				pal = false;
			}
		}
		return pal;
	}
};