#include<iostream>
using namespace std;
int main() {
    float r = 4.3; // Radius of the sphere
    float v = (4.0 / 3.0) * 3.141592 * r * r * r; // Volume of sphere formula: (4/3)πr³
    cout << "The volume of the sphere is: " << v << endl; // Output the volume
    return 0; // Indicate that the program ended successfully
}