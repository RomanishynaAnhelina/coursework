class CPrimary : public CEdit
{
public :
    char Primary(char choice, string name)
    {
        if (choice == '1') //Прочитати інформацію з файлу
        {
            Show_Info("Primary information.txt", "Cafe name", "Director", "Opening date", "Price($)");
            return choice = 'p';
        }
        if ((choice == '2')&&(name == "admin")) //Записати інформацію, операція доступна тільки для адміністратора
        {
            Write_Info("Primary information.txt", "Cafe name : ", "Director : ", "Opening date : ", "Price($) : ");
            return choice = 'p';
        }
        if (choice == '3') //Знайти інформацію
        {
            Find_Info("Primary information.txt");
            return choice = 'p';
        }

        if ((choice == '4')&&(name == "admin")) //Редагувати інформацію, операція доступна тільки для адміністратора
        {
            Edit_Info("Primary information.txt", "Primary information1.txt");
            return choice = 'p';
        }
        if ((choice == '5')&&(name == "admin")) //Видалити інформацію, операція доступна тільки для адміністратора
        {
            Delete_Info("Primary information.txt");
            return choice = 'p';
        }
        if ((choice == 'b')||(choice == 'B')) //Повернення до попереднього меню
        {
            return choice = 'm';
        }
        if ((choice == 'q')||(choice == 'Q')) //Вихід з програми
            exit(0);
        else
            return choice = 'p';
    }
};
