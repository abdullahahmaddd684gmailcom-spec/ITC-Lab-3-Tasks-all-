#include <iostream>
using namespace std;
int main()
{
	cout << "Expression 1:" << 10 + 5 * 2 << endl;
	cout << "Expression 2:" << (10 + 5) * 2 << endl;
	cout << "Expression 3:" << 20 - 5 - 3 << endl;// The operators are evaluated from left to right.
	cout << "Expression 4:" << 100 / 7 << endl;
	cout << "Expression 5:" << 100 % 7 << endl;
	cout << "Expression 6:" << 2 * 3 + 8 / 4 - 1 << endl;
	cout << "Expression 6 (with brackets to produce 8): " << 2 * (3 + 8 / 4 - 1) << endl;
	return 0;
}
// My Prediction is that expression 1 will print 20, output was 20
// My Prediction is that expression 2 will print 30, output was 30
// My Prediction is that expression 3 will print 13, output was 12
// My prediction is that expression 4 will print 14, output was 14
// My prediction is that expression 5 will print 2,  output was 2
// My prediction is that expression 6 will print 7,  output was 2
// My prediction is that expression 6 (with Brackets) will print 8, output was 8
// All predictions were right 
 