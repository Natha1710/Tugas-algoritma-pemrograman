#include <iostream>
using namespace std;

int main(){
    char num;
    cout << "Enter a number: ";
    cin >> num;

    switch (num) {
        case '1':
            cout << "One" <<
endl;
            break;
        case '2':
            cout << "two" <<
endl;
            break;
        default:
            cout << "Other number" << endl;
    }

    return 0;
}
