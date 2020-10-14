Following are some important points about friend functions and classes:
1) Friends should be used only for limited purpose. too many functions or external classes are declared as friends of a class with protected or private data, it lessens the value of encapsulation of separate classes in object-oriented programming.

2) Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.

3) Friendship is not inherited (See this for more details)

4) The concept of friends is not there in Java.


### C++ program to demonstrate friend Class
```
#include <iostream> 
class A { 
private: 
	int a; 

public: 
	A() { a = 0; } 
	friend class B; // Friend Class 
}; 

class B { 
private: 
	int b; 

public: 
	void showA(A& x) 
	{ 
		// Since B is friend of A, it can access 
		// private members of A 
		std::cout << "A::a=" << x.a; 
	} 
}; 

int main() 
{ 
	A a; 
	B b; 
	b.showA(a); 
	return 0; 
} 

```
### C++ program to demonstrate friend function of another class
```
#include <iostream> 

class B; 

class A { 
public: 
	void showB(B&); 
}; 

class B { 
private: 
	int b; 

public: 
	B() { b = 0; } 
	friend void A::showB(B& x); // Friend function 
}; 

void A::showB(B& x) 
{ 
	// Since showB() is friend of B, it can 
	// access private members of B 
	std::cout << "B::b = " << x.b; 
} 

int main() 
{ 
	A a; 
	B x; 
	a.showB(x); 
	return 0; 
}

```
