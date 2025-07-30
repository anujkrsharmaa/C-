#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter a number: "; // Prompt the user for input
    cin >> x; // Read the input from the user
    float y = (float)x; // (float) typecasting integer to float
    int half = x / 2; // Calculate half of the integer
    cout << "Half of the integer is: " << half << endl; // Output the half value
    cout << "Half of the float is: " << y / 4 << endl; // Output the half value of the float
    return 0; // Indicate that the program ended successfully
}