#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int partition(vector<int>& arr, int wallIndex, int pivotIndex) {
    int pivot = arr[pivotIndex];

    int wall = wallIndex;

    for (int i = wallIndex; i < pivotIndex; ++i) {
        if (arr[i] < pivot) {
            swap(arr[wall], arr[i]);
            ++wall;
        }
    }
    swap(arr[wall], arr[pivotIndex]);

    copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return wall;
}

void quickSort(vector<int>& arr, int wallIndex, int pivotIndex) {
    if (wallIndex < pivotIndex) {
        //cout << wallIndex << " " << pivotIndex << endl;
        int new_wall = partition(arr, wallIndex, pivotIndex);

        quickSort(arr, wallIndex, new_wall-1);
        quickSort(arr, new_wall+1, pivotIndex);
    }
}

int main() {
    int array_size;
    cin >> array_size;

    vector<int> arr;
    for (int i = 0; i != array_size; ++i) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    quickSort(arr, 0, arr.size()-1);

    return 0;
}
