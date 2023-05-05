#include <iostream>
using namespace std;

class LogicalElement {
public:
	bool Statement;
	LogicalElement() {
		Statement = false;
	}
};

int main() {
	LogicalElement A;
	LogicalElement B;

	cout << "Before:" << endl;
	cout << "A: " << A.Statement << endl;
	cout << "B: " << B.Statement << endl;

	A.Statement = true;
	B.Statement = true;

	cout << "After:" << endl;
	cout << "A: " << A.Statement << endl;
	cout << "B: " << B.Statement << endl;

    return 0;
}
