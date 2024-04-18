#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            // print English representation of i in lowercase
            string english[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
            cout << english[i-1] << endl;
        } else if (i > 9 && i % 2 == 0) {
            // print "even" for even numbers greater than 9
            cout << "even" << endl;
        } else if (i > 9 && i % 2 != 0) {
            // print "odd" for odd numbers greater than 9
            cout << "odd" << endl;
        }
    }
    
    return 0;
}

