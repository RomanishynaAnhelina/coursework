class CInventory : public CEdit
{
public :
    char Inventory(char choice, string name)
    {
        if (choice == '1') //Прочитати інформацію з файлу
        {
            Show_Info("Inventory.txt", "Object", "Number(pcs)", "Price($)", "ID");
            return choice = 'i';
        }
        if ((choice == '2')&&(name == "admin")) //Записати інформацію у файл, операція доступна тільки для адміністратора
        {
            Write_Info("Inventory.txt", "Object : ", "Number(pcs) : ", "Price($) : ", "ID : ");
            return choice = 'i';
        }

        if (choice == '3') //Знайти інформацію
        {
            Find_Info("Inventory.txt");
            return choice = 'i';
        }
        if ((choice == '4')&&(name == "admin")) //Редагувати інформацію, операція доступна тільки для адміністратора
        {
            Edit_Info("Inventory.txt", "Inventory1.txt");
            return choice = 'i';
        }
        if ((choice == '5')&&(name == "admin")) //Видалити інформацію, операція доступна тільки для адміністратора
        {
            Delete_Info("Inventory.txt");
            return choice = 'i';
        }
        if ((choice == 'b')||(choice == 'B')) //Повернення до попереднього меню
        {
            return choice = 'm';
        }
        if ((choice == 'q')||(choice == 'Q')) //Вихід з програми
            exit(0);
        else
            return choice = 'i';
    }
};
