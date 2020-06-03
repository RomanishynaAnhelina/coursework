#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std; 

 int Main()
    {
        while (true)
        {
            Menu0(); //Стартове меню
            getChoice();
            if ((choice == 'm')||(choice == 'M')) //Перехід в меню авторизації
            {
                Menu1(); //Меню авторизації
                getName();
                getMoney();
            }
            while ((choice == 'm')||(choice == 'M')) //Перехід в головне меню
            {
                Menu2();
                getChoice();
                while ((choice == 'p')||(choice == 'P')) //Перехід в розділ основної інформації
                {
                    Menu3("Primary information", name);
                    getChoice();
                    choice = Primary(choice, name);
                }
                while (((choice == 'f')||(choice == 'F'))&&(name == "admin")) //Перехід в розділ фінансів
                {
                    Menu3("Finances", name);
                    getChoice();
                    choice = Finances(choice, name);
                }
                while ((choice == 't')||(choice == 'T')) //Перехід в меню графіку роботи
                {
                    Menu3("Timetable", name);
                    getChoice();
                    choice = Timetable(choice, name);
                }
                while ((choice == 'g')||(choice == 'G')) //Перехід в меню товарів
                {
                    Menu3("Goods", name);
                    getChoice();
                    choice = Goods(choice, name);
                }
                while (((choice == 'i')||(choice == 'I'))&&(name == "admin")) //Перехід в меню інвентарю
                {
                    Menu3("Inventory", name);
                    getChoice();
                    choice = Inventory(choice, name);
                }
                while (((choice == 'w')||(choice == 'W'))&&(name == "admin")) //Перехід в меню працівників
                {
                    Menu3("Workers", name);
                    getChoice();
                    choice = Workers(choice, name);
                }
                if ((choice == 'b')||(choice == 'B')) //Повернення до попереднього меню
                    break;
                if ((choice == 'q')||(choice == 'Q')) //Вихід з програми
                    exit(0);
                else
                    choice = 'm';
            }
            if ((choice == 'q')||(choice == 'Q')) //Вихід з програми
                exit(0);
        }
    }
};
int main()
{
    CMain main;
    main.Main();
    return 0;
}
