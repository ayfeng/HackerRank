#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

void insertionSort(int ar_size, int *  ar) {
    int count = 0;
    for (int i = 1; i != ar_size; ++i) {
        int j = i;

        while (j > 0 && ar[j] < ar[j-1]) {
            int temp = ar[j-1];
            ar[j-1] = ar[j];
            ar[j] = temp;

            --j;
            ++count;
        }
    }
    cout << count << endl;
}

int main(void) {
    int _ar_size;
    cin >> _ar_size;
    int _ar[_ar_size], _ar_i;

    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        cin >> _ar[_ar_i];
    }

    insertionSort(_ar_size, _ar);
                  
    return 0;

}
