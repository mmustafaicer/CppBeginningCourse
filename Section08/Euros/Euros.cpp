// Section 8
// Convert EUR to USD

#include <iostream>

using namespace std;

int main() {
    
    // our conversion rate is a constant
    const double usd_per_eur {1.14};
    
    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR : ";
    
    // declare our variables.
    double euros {0.0};
    double dollars {0.0};
    
    // prompt user to enter EUR amount
    cin >> euros;
    dollars = euros * usd_per_eur;
    
    // display the output
    cout << euros << " euros is equivalent to " << dollars << " dollars" << endl;

    cout  << endl;
    return 0;
}