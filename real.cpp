#include <iostream>
using namespace std;
void init(char f[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			f[i][j] = ' ';
		}
	}
}
void print(char f[3][3]) {
	for (int i = 0; i < 3; i++) {
		cout << "|---|---|---|" << endl;
		for (int j = 0; j < 3; j++) {
			cout << "| " << f[i][j] << ' ';
		}
		cout << "|" << endl;
	}
	cout << "|---|---|---|" << endl;
}
void plx(char f[3][3]) {
	int r, c;
	char s;
	do {
		cout << "введите номер строки";
		cin >> r;

	} while (r < 0 || r > 2);
	do {
		cout << "введите номер столбца";
		cin >> c;

	} while (c < 0 || c > 2);
	do {
		cout << "введите значок";
		cin >> s;
	} while (s != 'x' && s != 'o');
	f[r][c] = s;
	//завести переменную и проверять на четность
}
bool check(char f[3][3], char s) {
	if (f[0][0] == s && f[0][1] == s && f[0][2] == s)return true;
	if (f[1][0] == s && f[1][1] == s && f[1][2] == s)return true;
	if (f[2][0] == s && f[2][1] == s && f[2][2] == s)return true;

	if (f[0][0] == s && f[1][0] == s && f[2][0] == s)return true;
	if (f[0][1] == s && f[1][1] == s && f[2][1] == s)return true;
	if (f[0][2] == s && f[1][2] == s && f[2][2] == s)return true;

	if (f[1][1] == s && f[0][0] == s && f[2][2] == s)return true;
	if (f[0][2] == s && f[1][1] == s && f[2][0] == s)return true;
	return false;
}
bool checkd(char f[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (f[i][j] = ' ')return false;
		}
	}
	return true;
}