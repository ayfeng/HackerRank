//https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    int number;
    string mapping[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    scanf("%d", &number);

    if (number > 9) {
        cout << "Greater than 9";
    } else {
        cout << mapping[number-1];
    }
}
