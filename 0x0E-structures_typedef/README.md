# C - Structures, typedef
![](https://i.giphy.com/media/yxrRWuLhRwcTgEZ7np/giphy.webp)

It would be much better if you could somehow group a sets of variables together!
Well.. This is precisely what the structure in C allows you to do.

## Define a structure
In C, structures are used to define custom data types that can hold multiple variables of different data types under a single name. To define a structure, use the `struct` keyword followed by the structure name and a list of its members.
```
// Example: Defining a Date Structure
struct date
    int month;
    int day;
    int year;
};
```
## Setting Variables
```
// Example: Setting Values in a Date Structure
struct date today;
today.day = 21;
today.month = 8;
today.year = 2023;
```
## Getting Variables
```
// Example: Accessing Values in a Date Structure
int day = today.day;
int month = today.month;
int year = today.year;
```
## Arrays of Structures

Suppose you want to store information about students, including their names and ages, using a structure:
```
struct Student {
    char name[50];
    int age;
};
```
Now, you want to create an array of structures to hold information for multiple students:
```
struct Student studentArray[5];  // Creates an array of 5 Student structures
```
**Setting Values :** You can set the values for each student in the array by accessing individual elements using array indexing and the dot `.` operator:
```
strcpy(studentArray[0].name, "Monica");
studentArray[0].age = 20;

strcpy(studentArray[1].name, "Bob");
studentArray[1].age = 22;
```
**Accessing Values:** You can also retrieve the values stored in the array using similar syntax:
```
printf("Student 1: Name - %s, Age - %d\n", studentArray[0].name, studentArray[0].age);
```
## Structures of Structures
Suppose you want to represent information about a person, including their name, age, and address. You can create two separate structures for person details and address details:
```
struct Address {
    char street[50];
    char city[30];
};

struct Person {
    char name[50];
    int age;
    struct Address addr; // The 'addr' member is a structure of type Address
};
```
1. **Defining the Inner Structure:** First, you define the `Address` structure to hold address-related attributes like street and city.
2. **Defining the Outer Structure:** Next, you define the `Person` structure. Within this structure, you include a member `addr` of type `struct Address`. This creates a relationship where each `Person` structure contains an `Address` structure.
3. **Setting Values:** You can set values for both the `Person` and `Address` structures:
```
struct Person person1;
strcpy(person1.name, "Alice");
person1.age = 25;

strcpy(person1.addr.street, "123 Main St");
strcpy(person1.addr.city, "Cityville");
```
5. **Accessing Values:** To access the values within the nested structures, you use the dot `.` operator to navigate through the structure members:
## typedef keyword

The typedef keyword is like a naming wizard. It lets us give the `char *` declaration a friendlier name, such as `string`, making our code easier to understand, for exemple:
```
typedef chat* string;
```
Now we can declare a string just like the following:
```
string languageLover = "In a committed relationship with language!";
```
See?? Is it more readable now? 👀

When it comes to structures, `typedef` can be used to create more readable and concise names for structure types.
Suppose you have a structure definition like this:
```
struct ComplexStructure {
    int data1;
    double data2;
};
```
You can create a custom type alias for this structure using typedef like this:
```
typedef struct ComplexStructure Complex;
```
Now, you can use `Complex` as a shorthand for `struct ComplexStructure`. Here's how you can declare variables of this structure type:
```
// Equivalent to: struct ComplexStructure var1;
Complex var1;
// Equivalent to: struct ComplexStructure var2;
Complex var2;
```
![](https://media0.giphy.com/media/SSFBdmmKG3jK9GqDbt/giphy.gif?cid=ecf05e47f0es1gwfumh3crp7xu7ke9z2lmt4m6d0h5mbm5er&ep=v1_gifs_related&rid=giphy.gif&ct=g)

