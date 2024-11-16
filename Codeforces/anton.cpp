#include <iostream>
#include <set>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    set<char> unique_letters;

    // Traverse the string and collect distinct letters
    for (char ch : input) {
        if (ch >= 'a' && ch <= 'z') {
            unique_letters.insert(ch);
        }
    }

    // Output the size of the set, which represents the number of distinct letters
    cout << unique_letters.size() << endl;
    return 0;
}
