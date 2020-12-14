﻿#include "computer.h"
#include <ctime>
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout << "请输入你要运行的ERISC文件：";
	string filename;
	cin >> filename;
	Computer computer(filename);
	auto begin = clock();
	computer.main();
	auto end = clock();
#if defined WINDOWS
	cout << "程序运行时间：" << (end - begin) / 1000 << "s" << endl;
#elif defined LINUX || defined UNIX
	cout << "程序运行时间：" << (end - begin) / 1000000 << "s" << endl;
#endif
	return 0;
}