#include <iostream>
using namespace std;
int main() {
    int nums[] = { 5, 15, 22, 1, -15, 1, -24};
    int n = 7;

    int smallest = INT_MAX ;
    for (int i=0; i<n; i++) {

        if(nums[i] < smallest) {
            smallest = nums[i];

        }

    }
    cout<< "smallest = " << smallest << endl;
    return 0;
}