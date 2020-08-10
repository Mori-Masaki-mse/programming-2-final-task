#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;

//関数の定義
void AveScore(int a,int b,int c,int d,int e) {
	int sum;//合計の変数の定義
	int ave;//平均の変数の定義

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

	//ファイルの出力
	ofstream outfile("成績表.txt");
	outfile << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << endl;

	//ファイルの入力
	ifstream infile("成績表.txt");
	string str;
	while (infile >> a >> b >> c >> d >> e) {
		//空のvecotrの構築
		vector<int>v1;
		v1.push_back(a);//要素の追加
		v1.push_back(b);
		v1.push_back(c);
		v1.push_back(d);
		v1.push_back(e);

		//降順に並び替え
		sort(v1.rbegin(), v1.rend());
		for (auto i : v1)
			cout << i << endl;

		AveScore(a, b, c, d, e);
	}
}