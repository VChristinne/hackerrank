#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    return std::max(std::max(a, b), std::max(c, d));
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max_of_four(a, b, c, d);
    return 0;
}