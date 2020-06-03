class CTimetable : public CEdit
{
public :
    char Timetable(char choice, string name)
    {
        if (choice == '1') //Прочитати інформацію з файлу
        {
            Show_Info("Timetable.txt", "Day", "Date", "Opening", "Closing");
            return choice = 't';
        }
        if ((choice == '2')&&(name == "admin")) //Записати інформацію у файл, операція доступна тільки для адміністратора
        {
            Write_Info("Timetable.txt", "Day : ", "Date : ", "Opening : ", "Closing : ");
            return choice = 't';
        }
        if (choice == '3') //Знайти інформацію
        {
            Find_Info("Timetable.txt");
            return choice = 't';
        }
        if ((choice == '4')&&(name == "admin")) //Редагувати інформацію, операція доступна тільки для адміністратора
        {
            Edit_Info("Timetable.txt", "Timetable1.txt");
            return choice = 't';
        }
        if ((choice == '5')&&(name == "admin")) //Видалити інформацію, операція доступна тільки для адміністратора
        {
            Delete_Info("Timetable.txt");
            return choice = 't';
        }
        if ((choice == 'b')||(choice == 'B')) //Повернення до попереднього меню
        {
            return choice = 'm';
        }
        if ((choice == 'q')||(choice == 'Q')) //Вихід з програми
            exit(0);
        else
            return choice = 't';
    }
};
