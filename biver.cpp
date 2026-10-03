#include <iostream>
#include <string>
using namespace std;
class Book {
private:
	string title;
	double price;
	int quantity;

public:
	void setData(string t, double p, int q) {
		title = t;
		price = p;
		quantity = q;
	}

	void display() {
		cout << title << " | Rs." << price << " x " << quantity << endl;
	}

	double totalValue() { return price * quantity; }
};
int main() {
Book b[3];
b[0].setData("C++ Basics", 250, 4);
b[1].setData("DSA Guide", 400, 2);
b[2].setData("OOP Concepts", 300, 3);
double grandTotal = 0;
for (int i = 0; i < 3; i++) {
b[i].display();
grandTotal += b[i].totalValue();
}
cout << "Grand Total Inventory Value: Rs." << grandTotal << endl;
return 0;
}