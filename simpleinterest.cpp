#include<iostream>
using namespace std;
int main(){
    float p = 1000; // Principal amount
    float r = 10; // Rate of interest per annum
    float t = 2; // Time in years
    float si = (p * r * t) / 100; // Simple Interest formula
    cout << "The simple interest is: " << si << endl; // Output the simple interest
    return 0; // Indicate that the program ended successfully
}