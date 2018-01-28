# Chapter 03
# The C in C++
[HTML](/home/tuturu/Books/TICPP/Lesson1/Chapter02.html)

Thanks to prior knowledge, I have skipped to the section titled *Introduction to pointers*.

## Introduction to pointers
A program is loaded from the disk onto the computer's memory.

- Memory is located on bytes.
- These bytes are distinguishable from one another by its address.

In C++, the & symbol will tell you the address of an element.

- Precede an identifier name with '&' and the address of that identifier would be produced.
- Usually the addresses would be printed in hexadecimal, using the \(long\) cast would print it out in a easier to understand format.

Pointers are variables that hold addresses.

- Pointers are made by putting a '*' between the type and the identifier.
- Pointers are defined with one definition per line.

```c++
	int* ip; // ip points to an int variable
	int* ipa; // ipa points to another int variable
```
- You should always initialize a variable at point of definition, however.

```c++
	int a = 47;
	int* ipa = &a;
```
- With an initialized pointer, you can modify the value it points to.

```c++
	*ipa = 100;
```
- Now **a** has a value of 100.

## Modifying the outside object
Pointers are useful to modify objects that are outside of a scope.
```c++
    //: C03:PassAddress.cpp
    #include <iostream>
    using namespace std;

    void f(int* p) {
    cout << "p = " << p << endl;
      cout << "*p = " << *p << endl;
      *p = 5;
      cout << "p = " << p << endl;
    }

    int main() {
      int x = 47;
      cout << "x = " << x << endl;
      cout << "&x = " << &x << endl;
      f(&x);
      cout << "x = " << x << endl;
    } ///:~
```
The value of p is the *address* of **x**, whereas the *pointer* p points to **x**. When the pointer is dereferenced to assign the value of 5, the value of **x** is changed as well.

## Introduction to C++ references
Calling a function that takes references is **cleaner**, syntactically, than calling a function that takes pointers.
```c++
    //: C03:PassReference.cpp
    #include <iostream>
    using namespace std;

    void f(int& p) {
      cout << "p = " << p << endl;
      cout << "&p = " << &p << endl;
      p = 5;
      cout << "p = " << p << endl;
    }

    int main() {
      int x = 47;
      cout << "x = " << x << endl;
      cout << "&x = " << &x << endl;
      f(x);
      cout << "x = " << x << endl;
    } ///:~
```
## Specifying storage allocation
### Global variables
Global variables are defined out of all function bodies and are available to all parts of the program. If the existence of a global variable in one file is declared using the extern keyword in another file, the data is available for use by the second file. 

### Local variables
Local variables occur within a scope.

#### Register variables
The register keyword tells the compiler, "Make accesses to theis variable as fast as possible".

 - You cannot take or compute the address of a register variable.
 - Can be declared only within a block.
 - The register keyword is best avoided.
 
### static
Static can apply to both variables and functions. Static variables are not re-initialized when leaving the function scope.

```c++
    //: C03:Static.cpp
    // Using a static variable in a function
    #include <iostream>
    using namespace std;

    void func() {
      static int i = 0;
      cout << "i = " << ++i << endl;
    }

    int main() {
      for(int x = 0; x < 10; x++)
        func();
    } ///:~
```

In this example, the variable **i** would print a different value, instead of printing the value of 1 every call.

However, the static variable or function are unavailable outside the scope of which it is initialized.

### extern
Extern applies to functions or variables that may be defined in another file, or are further down the file. 

#### Linkage
Internal linkage means that storage is create to represent the identifier only for the file being compiled.

- Internal linkage is specified by the keyword static in C and C++.

External linkage pertains to one piece of storage used for an identifier for all files compiled.

- Global variables and functions have external linkage.
- The keyword **extern** is used to access these functions and variables.
- Variables defined outside all functions default to external linkage.

### Constants and constant values
The modifier **const** tells the compiler that a name represents a constant. 

You **cannot** modify a const.

```c++
	const int x = 10;
```

A const must have an initialization value. The compiler assumes a constant value is a decimal number. A constant value with a leading 0 is treaded as an octal number (base 8). A constant value with a leading 0x is treated as a hexadecimal number (base 16). 

Floating point numbers can contain decimal points and exponential powers. Both the decimal point and the e are optional. It is a good idea to use either a decimal point or an e to remind the reader that you are using a floating-point number.

- 1e4
- 1.001

Character constants are characters surrounded by single quotes.

### volatile

The qualifier **volatile** tells the compiler "You never know when this will change," and prevents the compiler from performing any optimizations based on the stability of that variable. *Use this keyword when you read some value outside the control of your code.* 

A multithreaded program is a case where storage is outside the control of your code.

## Operators and their use 
