#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int matrix[n][n];
    for (size_t i = 0; i != n; ++i) {
        for (size_t j = 0; j != n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int difference = 0;
    for (size_t i = 0; i != n; ++i) {
        difference += matrix[i][i];
        difference -= matrix[(n-i)-1][i];
    }

    cout << abs(difference);
}
