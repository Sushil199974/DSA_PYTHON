#include <iostream>
using namespace std;

// Function to print numbers from 1 to 10
void print1to10() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;  // To move the cursor to the next line after printing all numbers
}

int main() {
    // Call the function to print numbers from 1 to 10
    print1to10();
    return 0;
}
