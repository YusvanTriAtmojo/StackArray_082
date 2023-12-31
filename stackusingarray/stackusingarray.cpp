#include <iostream>
#include <string>

using namespace std;
class StackArray {
private:
	int stack_array[5];
	int top;

public:
	//constructor
	StackArray() {
		top = -1;
	}

	void push() {
		int element;
		cout << "Masukkan element: ";
		cin >> element;
		if (top == 4) {
			cout << "Number of data exceed the Limit" << endl;
			return;
		}

		top++; //step 2
		stack_array[top] = element; //step 3
		cout << endl;
		cout << element << "\nDitambahkan(pushed)" << endl;
	}

	void pop() {
		if (empty()) { //step 1
			cout << "\nStack is empty. Cannot pop." << endl; //1.a
			return; //1.b
		}

		cout << "\nThe popped element is : " << stack_array[top] << endl; //step 2
		top--; //step 3 decrement
	}

	//method for check if data is empty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() 
{
	StackArray data;
	char pilih;

	while (true) {
		cout << endl;
		cout << "\n**Menu**\n";
		cout << "1. Menambahkan data\n";
		cout << "2. Menghapus data\n";
		cout << "3. Menampilkan data\n";
		cout << "4. EXIT\n";
		cout << "Masukkan pilihan : ";
		cin >> pilih;

		switch (pilih)
		{
		case '1': {
			data.push();
			break;
		}
		case '2':
			if (data.empty()) {
				cout << "\nStack is empty." << endl;
				break;
		}
			data.pop();
			break;
		case '3': 
			data.display();
			break;
		case '4': 
			return 0;
		default:
			cout << "\nInvalid choice." << endl;
			break;
		}
	}
}
	