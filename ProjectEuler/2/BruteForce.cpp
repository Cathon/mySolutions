#include <iostream>
using namespace std;

int main() {
    int ans = 2;
    int a = 1, b = 2, tmp = a+b;
    while (tmp <= 4000000) {
        if (tmp % 2 == 0) ans += tmp;
        a = b;
        b = tmp;
        tmp = a+b;
    }
    cout << ans << endl;
    return 0;
}
