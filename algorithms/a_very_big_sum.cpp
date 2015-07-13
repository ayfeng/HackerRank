//https://www.hackerrank.com/challenges/a-very-big-sum
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size;
    long long int sum = 0;
    cin >> size;

    int numbers[size];
    for (size_t i = 0; i != sizeof(numbers)/sizeof(numbers[0]); ++i) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << sum;

    return 0;
}
