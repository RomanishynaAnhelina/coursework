class CWorkers : public CEdit
{
public :
    char Workers(char choice, string name)
    {
        if (choice == '1') //Прочитати інформацію з файлу
        {
            Show_Info("Workers.txt", "Name", "Profession", "Salary($)", "Age");
            return choice = 'w';
        }
        if ((choice == '2')&&(name == "admin")) //Записати інформацію у файл, операція доступна тільки для адміністратора
        {
            Write_Info("Workers.txt", "Name : ", "Profession : ", "Salary($) : ", "Age : ");
            return choice = 'w';
        }
        if (choice == '3') //Знайти інформацію
        {
            Find_Info("Workers.txt");
            return choice = 'w';
        }
        if ((choice == '4')&&(name == "admin")) //Редагувати інформацію, операція доступна тільки для адміністратора
        {
            Edit_Info("Workers.txt", "Workers1.txt");
            return choice = 'w';
        }
        if ((choice == '5')&&(name == "admin")) //Видалити інформацію, операція доступна тільки для адміністратора
        {
            Delete_Info("Workers.txt");
            return choice = 'w';
        }
        if ((choice == 'b')||(choice == 'B')) //Повернення до попереднього меню
        {
            return choice = 'm';
        }

        if ((choice == 'q')||(choice == 'Q')) //Вихід з програми
            exit(0);
        else
            return choice = 'w';
    }
};
