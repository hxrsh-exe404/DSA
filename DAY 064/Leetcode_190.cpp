#include <iostream>
#include <cstdint>
using namespace std;

uint32_t reverseBits(uint32_t n) {
    uint32_t ans = 0;

    for (int i = 0; i < 32; i++) {
        ans = (ans << 1) | (n & 1);
        n >>= 1;
    }

    return ans;
}

int main() {
    uint32_t n;

    cout << "Enter a 32-bit number: ";
    cin >> n;

    uint32_t result = reverseBits(n);

    cout << "Reversed bits: " << result << endl;

    return 0;
}