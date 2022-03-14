#include <iostream>
using namespace std;
int main() {
	float A, B, C;
	cout << "Please declare the word count, A, B, C" << endl;
	int word_count;
	float price;
	cin >> word_count >> A >> B >> C;
	if (word_count <= 20) {    // проверка дали думите са <= от 20
		price = 0.5;
	}
	else {
		price = А + B + C * (word_count - 20);      // цената = бланката + цената на първите 20думи + цената умножена по общият брой думи -20
	}
	cout << "The price is: " << price << endl;
}