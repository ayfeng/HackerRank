#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

using std::vector;
using std::cout; using std::cin; using std::endl;
using std::copy;
using std::ostream_iterator;

void partition(vector <int>  ar) {
    vector<int> left, right;
    int pivot = ar.front();

    for (auto it = ar.begin()+1; it != ar.end(); ++it) {
        if (*it < pivot) {
            left.push_back(*it);
        } else {
            right.push_back(*it);
        }
    }

    left.push_back(pivot);
    left.insert(left.end(), right.begin(), right.end());

    copy(left.begin(), left.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
}

int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;

    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    partition(_ar);

    return 0;

}
