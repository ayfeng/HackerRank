//https://www.hackerrank.com/challenges/c-tutorial-functions
#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    return (((((a > b ? a : a = b) > c) ? a : a = c) > d) ? a: a = d);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
