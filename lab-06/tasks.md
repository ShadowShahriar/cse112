---
title: 'CSE 112: Object Oriented Programming Lab'
subtitle: 'Lab Mid (Intake 53/9)'
---

# Question Paper

## Task 01

You are building a health tracking system where a user can monitor their daily step count. The `FitnessTracker` class contains private attributes `username` (**string**) and `dailySteps` (**int**). The `HealthApp` class has a method `showDisplaySteps()` that is a friend of the `FitnessTracker` class. This method allows the app to access and display the private daily step count of the user.

## Task 02

You are building a car maintenance tracking system where each car's mileage needs to be monitored and adjusted. The `Car` class contains private attributes `carModel` (**string**) and `mileage` (**float**). Create a `Car` object with the model and mileage initialized upon creation. When a `Car` object is no longer needed (e.g. maintenance is complete), notify by invoking the destructor.

Implement a non-member function `updateMileage()` that takes a `Car` object as input, increases the mileage by a specific amount, and returns the updated `Car` object.

## Task 03

You are designing an inventory system for a bookstore to track stock levels and reorder recommendations for different books. The `Book` class contains private attributes `title` (**string**), `author` (**string**), `stock` (**int**), and `threshold` (**int**) representing the minimum stock level required.

1. Initialize each `Book` object with a title, author, stock, and threshold when created.

2. Create an array of `Book` object to represent the inventory.

3. Implement a non-member function `checkAndRestock()` that takes the inventory array as input. For each book, if its stock falls below its threshold, this function should recommend a reorder by updating the stock to the threshold level + a specific restock amount and print the updated array of `Book` objects along with the list of books that needed reordering.
