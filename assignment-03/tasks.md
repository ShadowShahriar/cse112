---
title: 'CSE 112: Object Oriented Programming Lab'
subtitle: 'Lab Assignment (Intake 53/9)'
faculty: 'AHS'
---

# Question Paper

## Task 01. Hospital Management System

You are tasked with developing a **Hospital Management System** using object-oriented programming concepts. The system must handle the details of hospital staff, including doctors and nurses. Each staff member has some common attributes, but their behaviors vary based on their role.

Using this context, implement the following requirements:

1. **Base Class**
    - Create a base class `Staff` with the following:
    - Private attributes: `id` (**integer**) and `name` (**string**).
    - Protected attributes: `age` (**integer**).
    - A public method `displayDetails()` that prints the details of the staff member.
2. **Inheritance**
    - Derive two classes, `Doctor` and `Nurse`, from the `Staff` class.
3. **Overriding**
    - Override the `displayDetails()` method in both `Doctor` and `Nurse` classes to include their specific information:
    - For **Doctor**: Add `specialization` (**string**).
    - For **Nurse**: Add `shift` (**day/night**).
4. **Overloading**
    - Implement a method `calculateSalary()` in both `Doctor` and `Nurse` classes using function overloading to calculate salary:
    - For **Doctor**: `calculateSalary(int hours, int hourlyRate)` returns `hours * hourlyRate`.
    - For **Nurse**: `calculateSalary(int days, int dailyRate)` returns `days * dailyRate`.
5. **Access Modifier Usage**
    - Ensure id and name are **only accessible within the class**.
    - Allow age to be **accessible in the derived classes**.
6. **Implementation**
    - Write a small program that creates a `Doctor` and a `Nurse` object, sets their attributes, and displays their details. Also, calculate and display their salaries.

## Task 02. Vehicle Rental System

You are designing a **Vehicle Rental System** for a rental company that manages different types of vehicles (e.g., cars and bikes). Each vehicle has some common attributes, but their behaviors differ depending on the type of vehicle.

Implement the following requirements:

1. **Base Class**

    Create a base class Vehicle with:

    - Private attributes: `registrationNumber` (**string**) and `brand` (**string**).
    - Protected attributes: `rentalRate` (**float**).
    - A public method `displayDetails()` to show common details of the vehicle.

2. **Inheritance**

-   Derive two classes, `Car` and `Bike`, from the `Vehicle` class.

3. **Overriding**

    Override the `displayDetails()` method in both derived classes to include specific attributes:

    - For **Car**: Add `numberOfDoors` (**integer**).
    - For **Bike**: Add `isElectric` (**boolean**).

4. **Overloading**
   Implement a method calculateRentalCost() in both derived classes using function overloading:

    - For **Car**: Overload it to accept days (**integer**) and return the rental cost as `days * rentalRate`.
    - For **Bike**: Overload it to accept hours (**integer**) and return the rental cost as `hours * (rentalRate / 24)`.

5. **Access Modifier Usage**

    - Ensure `registrationNumber` and `brand` are **only accessible within the base class**.
    - Allow rentalRate to be **accessible in the derived classes**.

6. **Implementation**
    - Create instances of `Car` and `Bike` in the main function, set their attributes, display their details, and calculate their rental costs.
