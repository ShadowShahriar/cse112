---
title: Object Oriented Programming
author: S. Shahriar <shadowshahriar@gmail.com>
subject: Assignment 2 (Section 4)
keywords: oop, cse, cpp
colorTheme: light
codeTheme: stackoverflow-light
fonts: ['Nunito:ital,wght@0,200..1000;1,200..1000', 'JetBrains+Mono:ital,wght@0,100..800;1,100..800']
cssFontText: ['Nunito']
cssFontCode: ['JetBrains Mono']
specialWords: ['Ans.', 'Note:', 'Output:']
cssPageHeader: ['']
headerClass: new-page
lang: none
addCover: true
coverPageName: Cover Page
cssPageNumberPlacement: right
preset: none
---

::: {#cover.border}

<section>
	<img id="watermark" class="round" src="./bubt.png" width="200px" />
</section>
<section>
	<p class="h1 w800 underline text-upr">Assignment</p>
	<table class="compact borderless table-large table-upr padless" style="width: 5.1in">
		<tr>
			<th>Course Title</th>
			<th>:</th><td>Object Oriented Programming</td>
		</tr>
		<tr>
			<th>Course Code</th>
			<th>:</th><td>CSE 111</td>
		</tr>
		<tr>
			<th>Assignment No.</th>
			<th>:</th><td>02</td>
		</tr>
		<tr>
			<th>Submission Date</th>
			<th>:</th><td>N/A</td>
		</tr>
	</table>
</section>
<section style="--hw: 7.2rem;">
	<p class="h2 w800 text-upr">Submitted To</p>
	<table class="compact borderless table-large table-upr padless withleader">
		<tr>
			<th>Name</th>
			<td>N/A</td>
		</tr>
		<tr>
			<th>Dept. of</th>
			<td>N/A</td>
		</tr>
		<tr>
			<th></th>
			<td>Bangladesh University of Business & Technology (BUBT)</td>
		</tr>
	</table>
</section>
<section style="--hw: 7.2rem;">
	<p class="h2 w800 text-upr">Submitted By</p>
	<table class="compact borderless table-large table-upr padless withleader">
		<tr>
			<th>Name</th>
			<td>Shadman Shahriar</td>
		</tr>
		<tr>
			<th>ID No.</th>
			<td>20245103408</td>
		</tr>
		<tr>
			<th>Intake</th>
			<td>53</td>
		</tr>
		<tr>
			<th>Section</th>
			<td>9</td>
		</tr>
		<tr>
			<th>Program</th>
			<td>B.Sc. Engg. in CSE</td>
		</tr>
	</table>
</section>

:::

::: {.centered-heading}

# Object Oriented Programming

# Assignment 2

:::

## Theory

Write down the difference between **pass value** and **pass by reference** with code example.

**Ans.** In **pass-by-value**, a _copy_ of the variable is passed to the function. Modifying the parameter inside the function **does not** affect the original variable.

```CPP
#include <iostream>
using namespace std;

void edit(int x)
{
	x = 10;
	cout << "Value inside the function: " << x << endl;
}

int main()
{
	int a = 5;
	cout << "Before function call: " << a << endl;
	edit(a);
	cout << "After function call: " << a << endl;
	return 0;
}
```

In **pass-by-reference**, the _actual variable_ (not a copy) is passed to the function. Any changes made to the parameter inside the function **will affect** the original variable.

```CPP
#include <iostream>
using namespace std;

void edit(int &x)
{
	x = 10;
	cout << "Value inside the function: " << x << endl;
}

int main()
{
	int a = 5;
	cout << "Before function call: " << a << endl;
	edit(a);
	cout << "After function call: " << a << endl;
	return 0;
}
```

## Program

Design a class called `Distance` with an attribute `length`. Now **overload** + operator to add two `Distance` objects. If the `Distance` objects aren't equal, make the lesser object equal to the greater.

**Ans.** Here is a C++ program that satisfies the conditions above:

```CPP
#include <iostream>
using namespace std;

class Distance
{
public:
	float length;
	Distance(float l)
	{
		length = l;
	}

	Distance operator+(Distance &other)
	{
		if (length < other.length)
		{
			length = other.length;
		}
		else
		{
			other.length = length;
		}
		return Distance(length + other.length);
	}
};

int main()
{
	Distance d1(10.5), d2(20.3);
	Distance d3 = d1 + d2;

	cout << "d1 length: " << d1.length << endl;
	cout << "d2 length: " << d2.length << endl;
	cout << "d3 length: " << d3.length << endl;

	return 0;
}
```

**Output:** The code yields the following output in the terminal:

```diff
d1 length: 20.3
d2 length: 20.3
d3 length: 40.6
```
