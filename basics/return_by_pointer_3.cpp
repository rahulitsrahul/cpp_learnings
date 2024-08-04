#include <iostream>
#include <string>

// Define the Person structure
struct Person {
    std::string name;
    int age;
};

// Function that creates a Person and returns a pointer to it
Person* createPerson(const std::string& name, int age) {
    // Dynamically allocate memory for a Person
    Person* newPerson = new Person;

    // Initialize the fields
    newPerson->name = name;
    newPerson->age = age;

    // Return the pointer to the newly created Person
    return newPerson;
}

int main() {
    // Call the function and store the returned pointer
    Person* personPtr = createPerson("John Doe", 30);

    // Use the structure
    std::cout << "Name: " << personPtr->name << std::endl;
    std::cout << "Age: " << personPtr->age << std::endl;

    // Remember to free the allocated memory
    delete personPtr;

    return 0;
}