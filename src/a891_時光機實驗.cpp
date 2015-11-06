#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int months[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int toSec(int M, int d, int h, int m, int s) {
	--M, --d;

	for (int i = 0; i < m; ++i)
		d += months[i];
	return d * 24 * 3600 + h * 3600 + m * 60 + s;
}

void Output(int sec) {
	bool sign = (sec < 0);
	sec = abs(sec);
	int d = sec / (24 * 3600);
	int h = sec % (24 * 3600) / 3600;
	int m = sec % 3600 / 60;
	int s = sec % 60;
	printf("%s%d %02d:%02d:%02d\n", sign ? "-" : "", d, h, m, s);
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		int M1, d1, h1, m1, s1, M2, d2, h2, m2, s2;
		scanf("%d-%d %d:%d:%d, %d-%d %d:%d:%d", &M1, &d1, &h1, &m1, &s1, &M2,
				&d2, &h2, &m2, &s2);
		int sec1 = toSec(M1, d1, h1, m1, s1);
		int sec2 = toSec(M2, d2, h2, m2, s2);

		Output(sec2 - sec1);
	}
	return 0;
}
