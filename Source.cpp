# include <iostream>

using namespace std;
int main(int argc, char* argv[]) {

	if (argc != 2) {
		cout << "Invalid input" << endl;
		return -1;
	}
	if (argv[1][0] != '0') {
		cout << "here1" << endl;
		cout << "Invalid hexadecimal" << endl;
		return -1;
	}

	if (strlen(argv[1]) != 4) {
		cout << "here2" << endl;
		cout << "Invalid hexadecimal" << endl;
		return -1;

	}

	if (argv[1][1] == 120 || argv[1][1] == 88) {


		if (argv[1][2] < '0' || argv[1][2] > '9' && argv[1][2] < 'A' || argv[1][2] > 'F') {
			cout << "here3" << endl;
			cout << "Invalid hexadecimal" << endl;
			return -1;
		}


		if (argv[1][3] < '0' || argv[1][3] > '9' && argv[1][3] < 'A' || argv[1][3] > 'F') {
			cout << "here4" << endl;
			cout << "Invalid hexadecimal" << endl;
			return -1;
		}
	}

		else {
			cout << "here5" << endl;
			cout << "Invalid hexadecimal" << endl;
			return -1;
		}

	cout << "valid hexadecimal" << endl;
	return 0;

}