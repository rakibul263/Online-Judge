#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; // Input the number of elements
    vector<int> numbers(n);
    vector<int> even_indices, odd_indices;

    // Input the numbers
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        // Store indices of even and odd numbers separately
        if (numbers[i] % 2 == 0) {
            even_indices.push_back(i + 1); // Store 1-based index
        } else {
            odd_indices.push_back(i + 1); // Store 1-based index
        }
    }

    // Determine which group has only one number
    if (even_indices.size() == 1) {
        cout << even_indices[0] << endl;
    } else {
        cout << odd_indices[0] << endl;
    }

    return 0;
}
