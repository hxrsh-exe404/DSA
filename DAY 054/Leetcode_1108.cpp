#include <iostream>
#include <string>
using namespace std;

string defangIPaddr(string address) {
    string ans = "";

    for (int i = 0; i < address.length(); i++) {
        if (address[i] == '.') {
            ans += "[.]";
        } else {
            ans += address[i];
        }
    }

    return ans;
}

int main() {
    string address;

    cout << "Enter IP Address: ";
    cin >> address;

    cout << "Defanged IP Address: " << defangIPaddr(address);

    return 0;
}