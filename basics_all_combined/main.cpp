#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Person
{
    public:
        string name;
        int age;

        Person(string _name, int _age) : name(_name), age(_age) {}

        void show()
        {
            cout << "My name: " << name <<", Age: " << age << endl;
        }

};


class People
{
    public:
        vector<Person> members;

        void display_members()
        {
            int i = 0;
            cout << "Members list :" << endl;
            for (Person& person : members)
            {
                ++i;
                cout << "   -> Member: " << i << " Name: " << person.name << ", Age: " << person.age << endl;
            }
        }

        Person& find_member_by_name(const string& _name)
        {
            for (Person& person : members)
            {
                if(person.name == _name)
                {
                    return person;
                }
            }
        }

        void add_member(const Person& _member)
        {
            members.push_back(_member);
        }

        void modify_member(const int& index, const string& new_name, const int& new_age)
        {
            members[index].name = new_name;
            members[index].age = new_age;
        }
        
};


int main()
{
    People* people = new People;
    people->add_member(Person("tom", 5));
    people->add_member(Person("jerry", 3));

    people->display_members();

    people->modify_member(1, "Jerricho", 6);
    people->display_members();

    Person& _person = people->find_member_by_name("tom");
    _person.show();

    return 0;
}