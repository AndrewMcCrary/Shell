//
// substring.h
//
// Complete

#pragma once
#include <iostream>
#include <vector>

using namespace std;

vector<string> split(string str, const char Delim) {
	vector<string> buff;
	size_t f = str.find(Delim);

	while (f != string::npos) {
		buff.push_back(str.substr(0, f));
		str.erase(0, f + 1);
		f = str.find(Delim);
	}
	buff.push_back(str);

	return buff;
}