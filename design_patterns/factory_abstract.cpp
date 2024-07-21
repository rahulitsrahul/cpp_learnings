// Build Command: g++ factory_abstract.cpp -Wall -o ./output/factory_abstract
#include <iostream>
#include <string>

using namespace std;

class Door
{
    public:
        Door(){}
        virtual void Open()=0;

};


class GasCarDoor : public Door
{
    public:
        GasCarDoor()
        {
            cout << "making a door for a gas car" << endl;
        }

        void Open()
        {
            cout << "opening Door: click";
        }
};


class ElectricCarDoor : public Door
{
    public:
        ElectricCarDoor()
        {
            cout << "Making door for electric Car" << endl;
        }
        
        void Open()
        {
            cout << "opening Door: ssssh" << endl;
        }

};


class Engine
{
    protected:
        string _sound = "";

    public:
        virtual void Run()=0;
};

class GasCarEngine : public Engine
{
    public:
        GasCarEngine()
        {
            _sound = "VROOOM";
            cout << "Making a Gas Car Engine" << endl;
        }

        void Run()
        {
            cout << "Running Engine: " << _sound << endl;
        }
};

class ElectricCarEngine : public Engine
{
    public:
        ElectricCarEngine()
        {
            _sound = "SSSSSHHHHH";
            cout << "Making a Electric Car engine" << endl;
        }

        void Run()
        {
            cout << "Running Engine: " << _sound << endl;
        }
};


class CarFactory
{
    public:
        virtual Door * buildDoor()=0;
        virtual Engine * buildEngine()=0;
};


class GasCarFactory : public CarFactory
{
    public:
        Door * buildDoor()
        {
            return new GasCarDoor;
        }

        Engine * buildEngine()
        {
            return new GasCarEngine;
        }
};


class ElectricCarFactory : public CarFactory
{
    public:
        Door * buildDoor()
        {
            return new ElectricCarDoor;
        }

        Engine * buildEngine()
        {
            return new ElectricCarEngine;
        }
};


int main()
{
    CarFactory * CarPlant;

    int choice;
    cout << "Select a Car" << endl;
    cout << "1: Gasoline" << endl;
    cout << "2: Electric" << endl;
    cout << "Selection: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            CarPlant = new GasCarFactory;
            break;
        case 2:
            CarPlant = new ElectricCarFactory;
            break;
        default:
            cout << "Invalid Selection" << endl;
            CarPlant = NULL;
            break;
    };

    if (CarPlant!=NULL)
    {
        Door * myDoor = CarPlant->buildDoor();
        Engine * myEngine = CarPlant->buildEngine();

        myDoor->Open();
        myEngine->Run();
    }

    return 0;
}