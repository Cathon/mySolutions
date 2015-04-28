#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long tar = 600851475143; // int_max is about 2^31-1, 2*10^10
    int maxn = sqrt(double(tar)) + 1;
    for (int ans = maxn; ans >= 2; ans--) {
        int flag = true;
        if (tar % ans != 0) continue;
        for (int i = 2; i <= sqrt(ans) + 1; i++) {
            if (ans % i == 0) flag = false;
        }
        if (flag == true) {
            cout << ans << endl;
            break;
        }
    }
    return 0;
}
