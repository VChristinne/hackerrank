#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int len_a = a.size();
    int len_b = b.size();

    string c = a+b;
    cin >> c;

    cout << len_a << " " << len_b << endl;
    cout << c << endl;

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    cout << a << " " << b;

    return 0;
}
