#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;

void AveScore(int a,int b,int c,int d,int e) {
	int sum;
	int ave;

	sum = a + b + c + d + e;
	ave = sum / 5.0;
	cout << "合計＝" << sum << "\n" << "平均＝" << ave << endl;
}

int main() {
	int a = 62;
	int b = 83;
	int c = 91;
	int d = 76;
	int e = 55;

	ofstream outfile("成績表.txt");
	outfile << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << endl;

	ifstream infile("成績表.txt");
	string str;
	while (infile >> a >> b >> c >> d >> e) {
		vector<int>v1;
		v1.push_back(a);
		v1.push_back(b);
		v1.push_back(c);
		v1.push_back(d);
		v1.push_back(e);

		sort(v1.rbegin(), v1.rend());
		for (auto i : v1)
			cout << i << endl;

		AveScore(a, b, c, d, e);
	}
}