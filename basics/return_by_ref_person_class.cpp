#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define the Person Class
class Person
{
    public:
        string name;
        int age;

    public:
        Person(string _name, int _age) : name(_name), age(_age) {}
        void display()
        {
            cout << "Name: " << name << " Age: " << age << endl;
        }
};

// Create a function that return reference
Person& findPerson(vector<Person>& people, const string& name)
{
    for (Person& person : people)
    {
        if (person.name == name)
        {
            return person;
        }
    }
}

int main() {
    std::vector<Person> people = {
        Person("Alice", 30),
        Person("Bob", 25),
        Person("Charlie", 35)
    };

    try {
        Person& person = findPerson(people, "Bob");
        person.display();  // Outputs: Name: Bob, Age: 25

        // Modify the age
        person.age = 26;
        person.display();  // Outputs: Name: Bob, Age: 26
    } catch (const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}

