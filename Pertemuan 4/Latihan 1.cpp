#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "enter two numbers: ";
    cin >> a >> b;

    if (a > b)
        cout << "a lebih besar dari b" << endl;
    else if (a < b)
        cout << "b lebih besar dari a" << endl;

    return 0;
}
