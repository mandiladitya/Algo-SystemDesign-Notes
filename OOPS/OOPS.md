# OOPS C++
## 1) CLASS
```
The building block of C++ that leads to Object-Oriented programming is a Class. 
It is a user-defined data type, which holds its own data members and member functions
```
```
A class is like a blueprint for an object.
```
----------------------------
## 2) Object
```
An Object is an identifiable entity with some characteristics and behaviour. An Object is an instance of a Class
```
```
When a class is defined, no memory is allocated but when it is instantiated 
(i.e. an object is created) memory is allocated.
```
----------------------------------
## 3) Polymorphism
```
The word polymorphism means having many forms. 
In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form
```
```
A real-life example of polymorphism, a person at the same time can have different characteristics. Like a man at the same time is a father, 
a husband, an employee. So the same person posses different behavior in different situations. This is called polymorphism. 
```
![](https://media.geeksforgeeks.org/wp-content/uploads/20200703160531/Polymorphism-in-CPP.png)
### Compile Time Polymorphism : 
#### * Function Overloading: 
When there are multiple functions with same name but different parameters then these functions are said to be overloaded. 
Functions can be overloaded by change in number of arguments or/and change in type of arguments.
```
#include <bits/stdc++.h> 
  
using namespace std; 
class Geeks 
{ 
    public: 
      
    // function with 1 int parameter 
    void func(int x) 
    { 
        cout << "value of x is " << x << endl; 
    } 
      
    // function with same name but 1 double parameter 
    void func(double x) 
    { 
        cout << "value of x is " << x << endl; 
    } 
      
    // function with same name and 2 int parameters 
    void func(int x, int y) 
    { 
        cout << "value of x and y is " << x << ", " << y << endl; 
    } 
}; 
  
int main() { 
      
    Geeks obj1; 
      
    // Which function is called will depend on the parameters passed 
    // The first 'func' is called  
    obj1.func(7); 
      
    // The second 'func' is called 
    obj1.func(9.132); 
      
    // The third 'func' is called 
    obj1.func(85,64); 
    return 0; 
}  

```
#### * Operator Overloading
```
#include<iostream> 
using namespace std; 

class Complex { 
private: 
	int real, imag; 
public: 
	Complex(int r = 0, int i =0) {real = r; imag = i;} 
	
	// This is automatically called when '+' is used with 
	// between two Complex objects 
	Complex operator + (Complex const &obj) { 
		Complex res; 
		res.real = real + obj.real; 
		res.imag = imag + obj.imag; 
		return res; 
	} 
	void print() { cout << real << " + i" << imag << endl; } 
}; 

int main() 
{ 
	Complex c1(10, 5), c2(2, 4); 
	Complex c3 = c1 + c2; // An example call to "operator+" 
	c3.print(); 
} 

```
### RunTime Polymorphism 
#### * Function Overriding
```
#include <bits/stdc++.h> 
using namespace std; 

class base 
{ 
public: 
	virtual void print () 
	{ cout<< "print base class" <<endl; } 

	void show () 
	{ cout<< "show base class" <<endl; } 
}; 

class derived:public base 
{ 
public: 
	void print () //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly 
	{ cout<< "print derived class" <<endl; } 

	void show () 
	{ cout<< "show derived class" <<endl; } 
}; 

//main function 
int main() 
{ 
	base *bptr; 
	derived d; 
	bptr = &d; 
	
	//virtual function, binded at runtime (Runtime polymorphism) 
	bptr->print(); 
	
	// Non-virtual function, binded at compile time 
	bptr->show(); 

	return 0; 
} 

```
---------------------------------
## 4) Encapsulation
```
#include<iostream> 
using namespace std; 

class Encapsulation 
{ 
	private: 
		// data hidden from outside world 
		int x; 
		
	public: 
		// function to set value of 
		// variable x 
		void set(int a) 
		{ 
			x =a; 
		} 
		
		// function to return value of 
		// variable x 
		int get() 
		{ 
			return x; 
		} 
}; 

// main function 
int main() 
{ 
	Encapsulation obj; 
	
	obj.set(5); 
	
	cout<<obj.get(); 
	return 0; 
} 

```
-----------------------------
## 5) Abstraction 
Data abstraction is one of the most essential and important feature of object oriented programming in C++. 
Abstraction means displaying only essential information and hiding the details. 
Data abstraction refers to providing only essential information about the data to the outside world, 
hiding the background details or implementation.
### Abstraction using Classes: 
* We can implement Abstraction in C++ using classes. 
* Class helps us to group data members and member functions using available access specifiers. 
A Class can decide which data member will be visible to outside world and which is not.

### Abstraction in Header files: 
One more type of abstraction in C++ can be header files. 
For example, consider the pow() method present in math.h header file. 
Whenever we need to calculate power of a number, we simply call the function pow() present in the math.h header file and 
pass the numbers as arguments without knowing the underlying algorithm according to 
which the function is actually calculating power of numbers. 

```
#include <iostream> 
using namespace std; 

class implementAbstraction 
{ 
	private: 
		int a, b; 

	public: 
	
		// method to set values of 
		// private members 
		void set(int x, int y) 
		{ 
			a = x; 
			b = y; 
		} 
		
		void display() 
		{ 
			cout<<"a = " <<a << endl; 
			cout<<"b = " << b << endl; 
		} 
}; 

int main() 
{ 
	implementAbstraction obj; 
	obj.set(10, 20); 
	obj.display(); 
	return 0; 
} 

```
------------------------------------------------

