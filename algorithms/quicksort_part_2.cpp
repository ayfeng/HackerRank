#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

using std::vector;
using std::cout; using std::cin; using std::endl;
using std::copy;
using std::ostream_iterator;

vector<int> quickSort(vector <int>&  ar) {
    vector<int> left, right;

    if (ar.size() <= 1) {
        return ar;
    }

    int pivot = ar.front();
    
    for (vector<int>::iterator it = ar.begin()+1; it != ar.end(); ++it) {
        if (*it < pivot) {
            left.push_back(*it);
        } else {
            right.push_back(*it);
        }
    }


    
    left = quickSort(left);
    right = quickSort(right);
    left.push_back(pivot);
    left.insert(left.end(), right.begin(), right.end());


    copy(left.begin(), left.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return left;
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

    _ar = quickSort(_ar);

    return 0;

}
