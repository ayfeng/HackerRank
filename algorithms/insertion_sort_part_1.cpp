#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

void insertionSort(vector<int> ar) {
    int value = ar.back();

    int index = ar.size()-1;

    while (index > 0 && ar[index-1] > value) {
        ar[index] = ar[index-1];

        copy(ar.begin(), ar.end(), ostream_iterator<int>(cout, " "));
        cout << endl;
        --index;
    }

    ar[index] = value;

    copy(ar.begin(), ar.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
}

int main(void) {
    vector<int> _ar;
    int _ar_size;
    cin >> _ar_size;
    
    for (int _ar_i=0; _ar_i < _ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp);
    }

    insertionSort(_ar);

    return 0;
}


