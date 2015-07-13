//https://www.hackerrank.com/challenges/plus-minus
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    double positive_count, negative_count, zero_count;
    cin >> n;

    int temp;
    for (int i = 0; i != n; ++i) {
        cin >> temp;
        
        if (temp > 0) {
            ++positive_count;
        } else if (temp < 0) {
            ++negative_count;
        } else {
            ++zero_count;
        }
    }

    printf("%.3f\n%.3f\n%.3f", positive_count/n, negative_count/n, zero_count/n);
}
