#include <iostream>
#include<ctime>
using namespace std;
/*void qw(int*a, const int b, int c, int d) {
	srand(time(0));
	for (int i = 0; i < b; i++) {
		a[i] = rand() % (d - c + 1) + c;
	}
}
void er(int* a, const int b) {
	for (int i = 0; i < b; i++) {
		cout << a[i] <<' ';
	}
}

int main()
{
	const int n = 15;
	int a[n];
	int c = -10;
	int d = 10;
	qw(a, n, c, d);
	er(a, n);
	return 0;
}*/
/*void qw(int* a, const int b, int c, int d) {
	srand(time(0));
	for (int i = 0; i < b; i++) {
		a[i] = rand() % (d - c + 1) + c;
	}
}
void er(int* a, const int b) {
	for (int i = 0; i < b; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
}
int ty(int* a, const int b) {
	int max = a[0];
	int s = 0;
	for (int i = 1; i < b; i++) {
		if (a[i] > max) {
			max = a[i];
			s = i;
		}

	}
	return s;
}
int ui(int* a, const int b) {
	int s = 0;
	for (int i = 1; i < b; i++) {
		s += a[i];
	}
	cout << endl;
	return s;
}
int op(int* a, const int b) {
	int s = 1;
	for (int i = 0; i < b; i++) {
		if (a[i] % 2 != 0) {
			s *= a[i];
		}
	}
	cout << endl;
	return s;
}
int as(int* a, const int b) {
	int s = 0;
	for (int i = 0; i < b; i++) {
		if (i % 2 == 0) {
			s += a[i];
		}
	}
	cout << endl;

	return double(s/b);
}
int main()
{
	const int n = 15;
	int a[n];
	int c = -10;
	int d = 10;
	qw(a, n, c, d);
	er(a, n);
	cout<<ty(a, n);
	cout << ui(a, n);
	cout << op(a, n);
	cout << as(a, n);

	return 0;
}*/

bool ch(char f[][3], char m) {

	if (f[0][0] == m && f[0][1] == m && f[0][2] == m)return true;
	if (f[1][0] == m && f[1][1] == m && f[1][2] == m)return true;
	if (f[2][0] == m && f[2][1] == m && f[2][2] == m)return true;

	if (f[0][0] == m && f[1][0] == m && f[2][0] == m)return true;
	if (f[0][1] == m && f[1][1] == m && f[2][1] == m)return true;
	if (f[0][2] == m && f[1][2] == m && f[2][2] == m)return true;

	if (f[1][1] == m && f[0][0] == m && f[2][2] == m)return true;
	if (f[0][2] == m && f[1][1] == m && f[2][0] == m)return true;
}
bool dr(char f[][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; i < 3; j++) {
			if (f[i][j] == ' ')return false;
		}
	}
	return true;
}
int main()
{

	return 0;
}
