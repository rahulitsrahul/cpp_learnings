// Build Command: g++ factory_pattern.cpp -Wall -o ./output/my_program
#include <iostream>
#include <string>

using namespace std;

class Coffee
{
    protected:
        string _type = "";

    public:
        Coffee(){}
        string get_type()
        {
            return _type;
        }
};


class Espresso : public Coffee
{
    private:

    public:
        Espresso() : Coffee()
        {
            _type = "Espresso";
            cout << "Making a cup of Espresso" << endl;
            cout << "Grind and brew one scoop of Espresso beans" << endl;
        }
};

class Cappuccino : public Coffee
{
    public:
        Cappuccino() : Coffee()
        {
            _type = "Cappuccino";
            cout << "Making a cup of Cappuccino" << endl;
            cout << "Heat and foam Milk" << endl;
        }
};


class CoffeeMakerFactory
{
    private:

    public:
        Coffee * GetCoffee()
        {
            int choice;

            cout << "Select the type of coffee to make: " << endl;
            cout << "1: Espresso" << endl;
            cout << "2: Cappuccino" << endl;
            cout << "Selection: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    return new Espresso;
                
                case 2:
                    return new Cappuccino;
                default:
                    cout << "Invalid Choice" << endl;
                    return NULL;
            }
        }
};


int main()
{

    CoffeeMakerFactory coffeeMachine;
    Coffee *cup;
    cup = coffeeMachine.GetCoffee();
    cout << "You had asked for: " << cup->get_type() << endl;

    return 0;
}