#include <iostream>
using namespace std;
#include <string>

int main() {

    string ID;

    cout << " Enter your ID please " << endl;
    cin >> ID;

    if (ID [6] >4) {

        cout << "Male" << endl;
    }
    else if (ID [6] <4) {

        cout << "Female" << endl;
    }

    return 0;

}
