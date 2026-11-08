#include <iostream> // Provides cout and endl for displaying output.
#include <vector> // Provides the vector container for storing numbers.
using namespace std; // Allows using standard library names without std::.

int main() { // Program execution starts here.

    vector<int> nums = {2, 2, 1, 1, 1, 2, 2}; // Stores the input numbers.
    int freq = 0, ans = 0; // freq stores the count and ans stores the candidate.

    for (int i = 0; i < nums.size(); i++) { // Visits every number in the vector.
        if (freq == 0) { // Chooses a new candidate when the count reaches zero.
            ans = nums[i]; // Sets the current number as the candidate.
        }

        if (ans == nums[i]) { // Checks whether the number matches the candidate.
            freq++; // Increases the count for a matching number.
        } else { // Runs when the number differs from the candidate.
            freq--; // Decreases the count for a different number.
        }
    }

    cout << ans << endl; // Prints the majority-element candidate.
    return 0; // Ends the program successfully.
}
