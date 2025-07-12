#include<iostream>
using namespace std;
int main(){
    int x = 10;
    cout<<x<<endl; // Output the initial value of x
    x += 5; // Update the value of x by adding 5
    cout<<x<<endl; // Output the updated value of x
    x -= 3; // Update the value of x by subtracting 3
    cout<<x<<endl; // Output the final value of x
    x *= 2; // Update the value of x by multiplying by 2
    cout<<x<<endl; // Output the final value of x after multiplication
    x /= 4; // Update the value of x by dividing by 4
    cout<<x<<endl; // Output the final value of x after division
    x %= 3; // Update the value of x by taking modulo 3
    cout<<x<<endl; // Output the final value of x after modulo operation
    return 0; // Indicate that the program ended successfully   
}