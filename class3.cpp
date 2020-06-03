class CFinances : public CEdit
{
public :
    char Finances(char choice, string name)
    {
        if (choice == '1') //Прочитати інформацію з файлу
        {
            Show_Info("Finances.txt", "Date", "Income($)", "Expense($)", "Total($)");
            return choice = 'f';
        }

        if ((choice == '2')&&(name == "admin")) //Записати інформацію у файл, операція доступна тільки для адміністратора
        {
            Write_Info("Finances.txt", "Date : ", "Income($) : ", "Expense($) : ", "Total($) : ");
            return choice = 'f';
        }
        if (choice == '3') //Знайти інформацію
        {
            Find_Info("Finances.txt");
            return choice = 'f';
        }
        if ((choice == '4')&&(name == "admin")) //Редагувати інформацію, операція доступна тільки для адміністратора
        {
            Edit_Info("Finances.txt", "Finances1.txt");
            return choice = 'f';
        }
        if ((choice == '5')&&(name == "admin")) //Видалити інформацію, операція доступна тільки для адміністратора
        {
            Delete_Info("Finances.txt");
            return choice = 'f';
        }
        if ((choice == 'b')||(choice == 'B')) //Повернення до попереднього меню
        {
            return choice = 'm';
        }
        if ((choice == 'q')||(choice == 'Q')) //Вихід з програми
            exit(0);
        else
            return choice = 'f';
    }
};
