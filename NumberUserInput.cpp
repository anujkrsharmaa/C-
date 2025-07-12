#include<iostream>
using namespace std;
int main(){
    int x;
    cout<< "Enter a number: "; // Prompt the user for input
    cin>> x; // >> Read the input from the user
    cout<< "The square of the number is: "; // Output a message before displaying the result
    cout<< x*x << endl; // Output the entered number
    return 0; // Indicate that the program ended successfully
}