// 3x+1 paradoksu

#include<iostream>

using namespace std;

int main() {
    static unsigned int a = 9;
    static int b = 1;
    while (1) {
        a = b;
        cout << "***** b = " << b << "********" << endl;
        while (a != 1) {
            if (a < 0)
                break;
            if (a % 2 == 0)
                a = a / 2;
            else
                a = 3 * a + 1;
            cout << a << endl;
        }
        if (b < 0)
            break;
        cout << "\n";
        b++;
    }
    return 0;
}