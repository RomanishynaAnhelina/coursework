class CMain : public CPrimary, public CFinances, public CTimetable, public CGoods, public CInventory, public CWorkers
{
private :
    char choice;
    string name;
    float money;
public :
    void getChoice()
    {
        cin >> choice;
    }
    void getName()
    {
        cout << "Enter your name : "; //Ввід ім'я користувача
        cin >> name;
    }
    void getMoney()
    {
        cout << "Enter your money ($) : "; //Ввід грошового балансу користувача
        cin >> money;
    }
    void Menu0()
    {
        system("cls"); //Очистити екран
        system("color 1F");
        cout << "Cafe management : \n"; //Стартове меню
        cout << "Main menu - press 'm'\n"; //Перехід в головне меню кнопкою 'm'
        cout << "Quit - press 'q'\n"; //Вихід з програми кнопкою 'q'
    }
    void Menu1()
    {
        system("cls"); //Очистити екран
        cout << "Authorization : \n"; //Меню авторизації
    }
    void Menu2()
    {
        system("cls"); //Очистити екран
        cout << "Cafe management -> Main menu : \n";
        cout << "Primary information - press 'p'\n"; //Перехід в розділ основної інформації кнопкою 'p'
        if (name == "admin") //Операція доступна тільки для адміністратора
            cout << "Finances - press 'f'\n"; //Перехід в розділ фінансів кнопкою 'f'
        cout << "Timetable - press 't'\n"; //Перехід в меню графіку роботи кнопкою 't'
        cout << "Goods - press 'g'\n"; //Перехід в меню товарів кнопкою 'g'
        if (name == "admin") //Операція доступна тільки для адміністратора
            cout << "Inventory - press 'i'\n"; //Перехід в меню інвентарю кнопкою 'i'
        if (name == "admin") //Операція доступна тільки для адміністратора
            cout << "Workers - press 'w'\n"; //Перехід в меню працівників кнопкою 'w'
        cout << "Back - press 'b'\n"; //Повернення до попереднього меню кнопкою 'b'
        cout << "Quit - press 'q'\n"; //Вихід з програми кнопкою 'q'
    }
    void Menu3(string dirName, string name)
    {
        system("cls"); //Очистити екран
        cout << "Cafe management -> Main menu -> " << dirName << " : \n";
        cout << "Show data - press '1'\n"; //Показати інформацію
        if (name == "admin") //Операція доступна тільки для адміністратора
            cout << "Write data - press '2'\n"; //Записати інформацію
        cout << "Find data - press '3'\n"; //Знайти інформацію
        if (name == "admin") //Операція доступна тільки для адміністратора
            cout << "Edit data - press '4'\n"; //Знайти інформацію
        if (name == "admin") //Операція доступна тільки для адміністратора
            cout << "Delete data - press '5'\n"; //Видалити інформацію
        cout << "Back - press 'b'\n"; //Повернутися до попереднього меню
        cout << "Quit - press 'q'\n"; //Вихід з програми кнопкою 'q'
    }
