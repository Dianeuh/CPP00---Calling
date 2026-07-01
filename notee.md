## CPP00 - Namespaces, Classes, Member Functions, STDIO streams, initialization lists, static, const and more basic stuff

**Namespaces**: breaks down your code into distinct scopes / blocks

**STDIO-streams**
Syntax:
```C++
	#include <iostream>

	std::cout << "Hi Shepherd !" << std::endl
```

**Classes and instances**:
Classes in C++.
For a given class GoodNews, we need:
	Declaration -> GoodNews.hpp
	Definition -> GoodNews.cpp
How to instanciate an object:
```C++
	GoodNews	Mt;
```

**Member Attributes and member functions (méthodes)**

**this**  
A cool pointer to the current object instance  
(un pointeur spécial sur l'instance courante)

**Init_List**  
Allows you to initialize an attribute directly without having to assign it.   
Syntax:
```C++
class	Child
{
	private:
		int				_age;
		std::string		_name;
		std::string		_new_name;
	public:
		Child(std::string n, std::string new, int a) : _name(n), _new_name(new), _age(a);
		~Child();
}
```

**const**
It basically tells you that what you are `const`-ing cannot be changed, 
it means *read-only*.   
It can be a variable, a class member attribute or a class member function.  
When it's a variable, you must set its value at initialization.  
When it's a member function, it means you cannot change the value of any of the member attributes in any way. 

**Accessors in classes**

**Comparisons**

**Non-member attributes & Non-member functions - static**

**Pointers to members**
