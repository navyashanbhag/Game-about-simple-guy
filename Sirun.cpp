//Just another stupid program
//Whose made for fun
#include <iostream>
using namespace std;

int poop = 0;
int food = 0;
int pis_pis = 0;
int drink = 0;
int drink_alc = 0;
int market = 0;
int nut = 0;
int score = 0;
int choose;
void _poop_();
void _food_(); 
void _pis_();
void _drink_();
void _drinkAlc_();
void _market_();
void _nut_();
void _end_();

int main()
{
    cout << "Hello Sirun" << endl;
    cout << "What are you gonna do?" << endl;
    cout << endl;

    while (true) // Main game cycle
    {
        cout << "1-Make poo-poo, 2-Eat something, 3-Make pee-pee," << endl;
        cout << "4-Drink something, 5-Drink beer, 6-Go to the market," << endl;
        cout << "7-It's Nut Time!!!, 19-End game" << endl;
        cout << endl;
        cout << "Your choise: ";
        cin >> choose;
        cout << endl;
        cout << "AVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVA" << endl;
        cout << "VAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVA" << endl; //Just GREAT WALL
        cout << "AVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVAVA" << endl;
        cout << "\n";
        if (choose != 19)
        {
            switch (choose)
            {
                case 1:
                    _poop_(); //1-Make poo-poo
                    poop++;
                    break;
                case 2:
                    _food_(); //2-Eat something
                    food++;
                    break;
                case 3:
                    _pis_(); //3-Make pee-pee
                    pis_pis++;
                    break;
                case 4:
                    _drink_(); //4-Drink something
                    drink++;
                    break;
                case 5:
                    _drinkAlc_(); //5-Drink beer
                    drink_alc++;
                    break;
                case 6:
                    _market_(); //6-Go to the market
                    market++;
                    break;
                case 7:
                    _nut_(); //7-It's Nut Time!!!
                    nut++;
                    break;
                default: 
                    continue; /*Continue cycle if you enter something wrong 
                                        (12 or 15 for example)*/
            }
        }
        else if (choose == 19)
        {
            break;
        }

    }
    score = (poop*10)+(pis_pis*5)+(drink*15)+(drink_alc*30)+(market*4)+(nut*50)+(food*20);
    _end_();
}

void _poop_()
{
    cout << "You're made poo-poo" << "\n\n";
}

void _food_()
{
    cout << "You ate something" << "\n\n";
}

void _pis_()
{
    cout << "You're made pee-pee. My congrats" << "\n\n";
}

void _drink_()
{
    cout << "You drank some Cola" << "\n\n";
}

void _drinkAlc_()
{
    cout << "You drank some Beer. Nice";
}

void _market_()
{
    cout << "In a market you bought something tasty" << "\n\n";
}
void _nut_()
{
    cout << "Nut is very fun. Cum in the Pot" << "\n\n";
}

void _end_()
{
    cout << "Your stats: " << endl;
    cout << "Poo-poo " << poop << endl;
    cout << "Pee-pee " << pis_pis << endl;
    cout << "Eated food " << food << endl;
    cout << "Drink " << drink << endl;
    cout << "Alcohol drinks " << drink_alc << endl;
    cout << "Market shops " << market << endl;
    cout << "Nut " << nut << endl;
    cout << "Total score " << score << endl;
    cin.get();
    cin.get();
}