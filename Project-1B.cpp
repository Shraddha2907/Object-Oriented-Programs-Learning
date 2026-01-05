//Using the Increment and Decrement Operators

// C++ program to add two number using 
// increment/decrement operator 
#include <iostream> 
using namespace std; 
  
// Function to return sum 
// of two number 
int addTwoNumber(int A, int B) 
{ 
    // When A is positive 
    while (A > 0) { 
        A--; 
        B++; 
    } 
  
    // When A is negative 
    while (A < 0) { 
        A++; 
        B--; 
    } 
  
    // Return sum of A and B 
    return B; 
} 
  
// Driver Code 
int main() 
{ 
    // Given two number 
    int A = 4, B = 11; 
  
    // Function call 
    cout << "sum = " << addTwoNumber(A, B); 
    return 0; 
}