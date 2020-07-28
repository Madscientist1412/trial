#pragma once
#include <iostream>
using namespace std;

class Sort {
public:
	void bubble(int data[], int size) {
		int i, j, ref;
		for (i = 0; i < size; i++) {               
			for (j = 0; j < size - i - 1; j++) {   
				if (data[j] > data[j + 1]) {       
					ref = data[j];
					data[j] = data[j + 1];
					data[j + 1] = ref;
				}
			}
		}
		cout << "Array after sorting: " << endl;
		for (int i = 0; i < size; i++)
			cout << data[i] << " ";
		cout << endl;
	}
	void select(int data[], int size) {
		int ref, max_index, right_ref, cur;
		for (right_ref = size - 1; right_ref > 0; right_ref--) {
			max_index = 0;
			for (cur = 1; cur <= right_ref; cur++) {      //<---
				if (data[cur] > data[max_index])          //<---Choosing the largest value
					max_index = cur;
			}
			if (data[max_index] > data[right_ref]) {      //<---Swapping the largest value
				ref = data[max_index];                    //    of the list to the end
				data[max_index] = data[right_ref];
				data[right_ref] = ref;
			}
		}
		cout << "Array after sorting: " << endl;
		for (int i = 0; i < size; i++)
			cout << data[i] << " ";
		cout << endl;
	}
};