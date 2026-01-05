 #include<iostream>
 using namespace std;
 /*These lines include necessary header files for input and output operations and declare the usage of
 the standard namespace.*/
 class complex
 {
 float x;
 float y;
 public:
 complex()
 {
 x =0;
 y =0;
 }
 complex operator+(complex);
 complex operator*(complex);
 friend istream &operator >>(istream &input, complex &t)
 {
 cout << "Enter the real part";
 cin >> t.x;
 cout << "Enter the imaginary part";
 cin >> t.y;
 }
 friend ostream &operator<<(ostream &output, complex &t)
 {
 output << t.x << "+" << t.y << "i\n";
 }
 };
 /*This part defines a class named complex to represent complex numbers. It has two private
 data members (x and y) representing the real and imaginary parts.
 Public member functions include a default constructor, overloaded + and * operators for
 addition and multiplication, and friend functions for overloading input (>>) and output (<<)
 operators.*/
complex complex::operator+(complex c)
 {
 complex temp;
 temp.x = x + c.x;
 temp.y = y + c.y;
 return (temp);
 }
// This defines the overloaded + operator for adding two complex numbers.
 complex complex::operator*(complex c)
 {
 complex temp2;
 temp2.x = (x * c.x)- (y * c.y);
 temp2.y = (y * c.x) + (x * c.y);
 return (temp2);
 }
// This defines the overloaded * operator for multiplying two complex numbers.
 int main()
 {
 complex c1, c2, c3, c4;
 cout << "Default constructor value=\n";
 cout << c1;
 cout << "\nEnter the 1st number\n";
 cin >> c1;
 cout << "\nEnter the 2nd number\n";
 cin >> c2;
 c3 = c1 +c2;
 c4 = c1 * c2;
 cout << "\nThe first number is ";
 cout << c1;
 cout << "\nThe second number is ";
 cout << c2;
 cout << "\nThe addition is ";
 cout << c3;
 cout << "\nThe multiplication is ";
 cout << c4;
 return 0;
 }
 /*In the main function, objects of the complex class (c1, c2, c3, c4) are created and various
 operations are performed. It demonstrates the usage of the implemented constructors,
 input/output operators, and overloaded + and * operators.*/