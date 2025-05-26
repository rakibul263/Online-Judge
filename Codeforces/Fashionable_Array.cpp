#include <bits/stdc++.h>
using namespace std;

int main() {
    int number_of_test_cases;
    cin >> number_of_test_cases;
    while (number_of_test_cases--) {
        int array_size;
        cin >> array_size;
        vector<int> integer_array(array_size);
        for (int input_index = 0; input_index < array_size; ++input_index) {
            cin >> integer_array[input_index];
        }

        if (array_size <= 1) {
            cout << 0 << endl;
        } else {
            int minimum_total_operations = array_size - 1;

            for (int first_candidate_index = 0; first_candidate_index < array_size; ++first_candidate_index) {
                for (int second_candidate_index = 0; second_candidate_index < array_size; ++second_candidate_index) {

                    int chosen_minimum_value = integer_array[first_candidate_index];
                    int chosen_maximum_value = integer_array[second_candidate_index];

                    if (chosen_minimum_value > chosen_maximum_value) {
                        continue;
                    }

                    if ((chosen_minimum_value + chosen_maximum_value) % 2 != 0) {
                        continue;
                    }

                    int current_removals_count = 0;
                    for (int array_check_index = 0; array_check_index < array_size; ++array_check_index) {
                        if (integer_array[array_check_index] < chosen_minimum_value || integer_array[array_check_index] > chosen_maximum_value) {
                            current_removals_count++;
                        }
                    }
                    minimum_total_operations = min(minimum_total_operations, current_removals_count);
                }
            }
            cout << minimum_total_operations << '\n';
        }
    }
    return 0;
}