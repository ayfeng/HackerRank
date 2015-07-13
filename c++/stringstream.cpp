//https://www.hackerrank.com/challenges/c-tutorial-stringstream
#include <sstream>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> result;

    int num;
    char ch;

    while ((ss >> num >> ch)) {
        result.push_back(num);
    }
    ss >> num;
    result.push_back(num);
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (vector<int>::size_type i = 0; i != integers.size(); ++i) {
        cout << integers[i] << "\n";
    }
    return 0;
}
