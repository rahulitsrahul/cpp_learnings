#include <iostream>
#include <string>

// Define the Person class
class Person {
public:
    std::string name;
    int age;

    // Constructor
    Person(const std::string& name, int age) : name(name), age(age) {
        std::cout << "Person created: " << name << std::endl;
    }

    // Destructor
    ~Person() {
        std::cout << "Person destroyed: " << name << std::endl;
    }

    // Member function to display the person's details
    void display() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

// Function that creates a Person and returns a pointer to it
Person* createPerson(const std::string& name, int age) {
    // Dynamically allocate memory for a Person
    Person* newPerson = new Person(name, age);

    // Return the pointer to the newly created Person
    return newPerson;
}

int main() {
    // Call the function and store the returned pointer
    Person* personPtr = createPerson("John Doe", 30);

    // Use the class member function to display the details
    personPtr->display();

    // Remember to free the allocated memory
    delete personPtr;

    return 0;
}