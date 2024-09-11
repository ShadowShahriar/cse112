---
title: Object Oriented Programming (OOP)
---

# Question Paper 3

## 1. Write down the answers.

### **(a).** Define the class for the following code:

```CPP
int main()
{
	People p1;
	People p2;
	p2.display();
	return 0;
}
```

**Ans.:** Here is the definition of the given class:

```CPP
#include <iostream>
using namespace std;

class People
{
	string name;
	int age;

public:
	People()
	{
		name = "Unknown";
		age = 0;
	}

	void display()
	{
		cout << name << " " << age << endl;
	}
};

int main()
{
	People p1;
	People p2;
	p2.display();
	return 0;
}
```

### **(b).** How can you access the private variable data of the class `Item` outside of the class? Write the code:

```CPP
class Item{
	private:
		int data;
};
```

**Ans.:** We can define a public setter and getter function to access the private variable. Here is an example code:

```CPP
#include <iostream>
using namespace std;

class Item
{
private:
	int data;

public:
	void setData(int d)
	{
		data = d;
	}

	int getData()
	{
		return data;
	}
};

int main()
{
	Item i;
	i.setData(42);
	cout << i.getData() << endl;
	return 0;
}
```

### **(c).** Define the functions of `Rectangle` class outside the class:

```CPP
class Rectangle{
	public:
		int length, width;
		void setData(int l, int w);
		void showArea();
}
```

**Ans.:** We can define the functions outside the class using the following syntax:

```CPP
#include <iostream>
using namespace std;

class Rectangle
{
public:
	int length, width;
	void setData(int l, int w);
	void showArea();
};

void Rectangle::setData(int l, int w)
{
	length = l;
	width = w;
}

void Rectangle::showArea()
{
	cout << length * width << endl;
}

int main()
{
	Rectangle r1;
	r1.setData(10, 20);
	r1.showArea();
	return 0;
}
```

## 2. Write down the code for solving the given problems.

### **(a).** Design a Product class:

-   The class should have attributes for its name, price, and quantity. Implement a function called `setProduct()` within the class to input the product details from the user. Additionally, create a function named `printProduct()` to display the product details.

-   Ensure that `setProduct()` is not directly called in the `main()` function. Add a destructor to print **"Product object destroyed"** when an object is destroyed.

**Ans.:**

```CPP
#include <iostream>
using namespace std;

class Product
{
	string name;
	float price;
	int quantity;

public:
	Product(string n, float p, int q)
	{
		setProduct(n, p, q);
	}

	~Product()
	{
		cout << "Product object destroyed" << endl;
	}

	void setProduct(string n, float p, int q)
	{
		name = n;
		price = p;
		quantity = q;
	}

	void printProduct()
	{
		cout << "Name:     " << name << endl;
		cout << "Price:    " << price << endl;
		cout << "Quantity: " << quantity << endl;
	}
};

int main()
{
	Product p("Biscuits", 10.00, 1);
	p.printProduct();
	return 0;
}
```

### **(b).** Create a Student class:

-   It should have attributes such as name, roll number, class, and marks. Implement a parameterized constructor allowing the specification of these attributes.

-   If any attribute is not provided, use a default constructor to set the values: name = "Unknown", roll number = 0, class = "Not Assigned", and marks = 0.0.

**Ans.:**

```CPP
#include <iostream>
using namespace std;

class Student
{
	string name;
	int rollNumber;
	string cls;
	float marks;

public:
	Student()
	{
		name = "Unknown";
		rollNumber = 0;
		cls = "Not Assigned";
		marks = 0.0;
	}

	Student(string n, int r, string c, float m)
	{
		name = n;
		rollNumber = r;
		cls = c;
		marks = m;
	}

	void display()
	{
		cout << "Name:     " << name << endl;
		cout << "Roll No.: " << rollNumber << endl;
		cout << "Class:    " << cls << endl;
		cout << "Marks:    " << marks << endl;
	}
};

int main()
{
	Student s1("Shahriar", 408, "13th", 97.00);
	s1.display();

	Student s2;
	s2.display();
	return 0;
}
```

# Code

You can find all the code snippets [**here**](https://github.com/ShadowShahriar/cse112/tree/main/practice-06/set-03).
