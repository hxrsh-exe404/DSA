#include <iostream>
#include <vector>
using namespace std;

vector<int> getRow(int rowIndex) {
    vector<int> row(rowIndex + 1, 1);

    for (int i = 1; i < rowIndex; i++) {
        row[i] = row[i - 1] * (rowIndex - i + 1) / i;
    }

    return row;
}

int main() {
    int rowIndex = 3;

    vector<int> result = getRow(rowIndex);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}