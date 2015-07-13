#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    const char* mapping[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    scanf("%d%d", &a, &b);

    for (int i = a; i <= b; ++i) {
        if (i > 9) {
            cout << ((i%2==0) ? "even" : "odd") << endl;
        } else {
            cout << mapping[i-1] << endl;
        }
    }

    return 0;
}
