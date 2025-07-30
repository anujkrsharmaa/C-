#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter 1st number: "; // Prompt the user for the first number
    cin >> x; // Read the first number from user input
    int y;
    cout << "Enter 2nd number: "; // Prompt the user for the second number  
    cin >> y; // Read the second number from user input
    int z; // Declare a variable to hold the sum of the two numbers
    cout << "Enter 3rd number: "; // Prompt the user for the third number
    cin >> z; // Read the third number from user input
    int sum = x + y + z; // Calculate the sum of the two numbers
    cout << "The sum of the two numbers is: " << sum << endl; // Output the sum of the two numbers
    return 0; // Indicate that the program ended successfully
}
