//https://www.hackerrank.com/challenges/staircase
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> lines;

    for (int i = 0; i != n; ++i) {
        lines.push_back(string(n-i-1, ' ') + string(i+1, '#'));
        cout << lines[i] << endl;
    }
}
