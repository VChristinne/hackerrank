#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;
    cin >> i >> l >> c >> f >> d;
    cout << i << "\n" << l << "\n" << c << "\n" << fixed << setprecision(3) << f << "\n" << setprecision(9) << d << "\n";
    return 0;
}
