#include <iostream>
#include <string>

using namespace std;


class Entree
{
    protected:
        string _entree = "";
    public:
        string get_entree()
        {
            return _entree;
        }
};


class Burger : public Entree
{
    public:
        Burger()
        {
            cout << "\n Grill Burger Patty, add tomatoes and place them into a bun";
            _entree = "hamburger";
        }
};


class Hotdog : public Entree
{
    public:
        Hotdog()
        {
            cout << "Cook a sausage and place it in a bun";
            _entree = "hotdog";
        }
};

class Slide
{
    protected:
        string _slide = "";
    
    public:
        string get_slide()
        {
            return _slide;
        }
};


class Fries : public Slide
{
    public:
        Fries()
        {
            _slide = "fries";
            cout << "Fry and Season Potatoes";
        }
};


class Salad : public Slide
{
    public:
        Salad()
        {
            _slide = "salad";
            cout << "prepare Salad with Fruits" << endl;
        }
};

class Drink
{
    private:
        string _drink = "";

    public:
        Drink()
        {
            _drink = "Soda";
            cout << "Fill cup with Soda" << endl;
        }

        string get_drink()
        {
            return _drink;
        }
};

class MealCombo
{
    private:
        Entree * entree;
        Slide * slide;
        Drink * drink;
        string bag = "";

    public:
        MealCombo(string type)
        {
            cout << "Meal Combo: " << type << endl;
        }
        void set_entree(Entree * e)
        {
            entree = e;
        }
        void set_slide(Slide * s)
        {
            slide = s;
        }
        void set_drink(Drink * d)
        {
            drink = d;
        }

        string open_Mealbag()
        {
            return bag + " " + entree->get_entree() + " " + slide->get_slide() + " " + drink->get_drink();
        }
};


class MealBuilder
{
    protected:
        MealCombo * _meal;
    public:
        virtual void cookEntree() {};
        virtual void cookSlide() {};
        virtual void fillDrink() {};

        MealCombo *getMeal()
        {
            return _meal;
        }
};


class BurgerMeal : public MealBuilder
{
    public:
        BurgerMeal()
        {
            _meal = new MealCombo("Burger");
        }
        void cookEntree()
        {
            Burger *burger = new Burger;
            _meal->set_entree(burger);
        }
        void cookSlide()
        {
            Fries *fries = new Fries;
            _meal->set_slide(fries);
        }
        void fillDrink()
        {
            Drink *drink = new Drink;
            _meal->set_drink(drink);
        }
};


class HotDogMeal : public MealBuilder
{
    public:
        HotDogMeal()
        {
            _meal = new MealCombo("HotDog");
        }
        void cookEntree()
        {
            Hotdog *hotdog = new Hotdog;
            _meal->set_entree(hotdog);
        }
        void cookSlide()
        {
            Salad *salad = new Salad;
            _meal->set_slide(salad);
        }
        void fillDrink()
        {
            Drink *drink = new Drink;
            _meal->set_drink(drink);
        }
};

int main()
{
    int choice;
    MealBuilder * cook = new MealBuilder;
    MealCombo * meal;

    cout << "Select a meal: " << endl;
    cout << "1: Hamburger Meal" << endl;
    cout << "2: HotDog Meal" << endl;
    cout << "Selection: ";
    cin >> choice;
    cout << endl;

    switch (choice)
    {
        case 1:
            cook = new BurgerMeal;
            break;
        case 2:
            cook = new HotDogMeal;
            break;
        default:
            cout << "invalid Selection" << endl;
            cook = NULL;
            break;
    }

    cout << "Making selected Meal" << endl;

    // Build the complex object
    cook->cookEntree();
    cook->cookSlide();
    cook->fillDrink();
    meal = cook->getMeal();

    cout << meal->open_Mealbag() << endl;

    return 0;
}