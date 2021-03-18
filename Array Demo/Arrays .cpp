#include<iostream>
using namespace std;

int main()

{

	const int ARRAY_VALUE = 10;
	int num[ARRAY_VALUE];

	// get the values 

	cout << "Enter the values on the arrays" << ARRAY_VALUE << "numbers" << endl;

	cin >> num[0];
	cin >> num[1];
	cin >> num[2];
	cin >> num[3];
	cin >> num[4];
	cin >> num[5];
	cin >> num[6];
	cin >> num[7];
	cin >> num[8];
	cin >> num[9];

	// show thr cout numbers 

	cout << " THis are the display values" << endl;
	cout << " " << num[0];
	cout << " " << num[1];
	cout << " " << num[2];
	cout << " " << num[3];
	cout << " " << num[4];
	cout << " " << num[5];
	cout << " " << num[6];
	cout << " " << num[7];
	cout << " " << num[8];
	cout << " " << num[9];

	system("pause");

	return 0;

}



}
