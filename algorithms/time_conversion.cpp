#include <string>
#include <iostream>
#include <sstream>
#include <cstdio>

using namespace std;

int main() {
    string time;
    cin >> time;

    stringstream ss, result_stream;
    int hour, minutes, seconds;
    char ch;
    string suffix;
    ss << time;
    ss >> hour >> ch >> minutes >> ch >> seconds >> suffix;
    printf("%02d:%02d:%02d", hour+(suffix == "PM" ? 12:0), minutes, seconds);

    cout << result_stream.str();
}
