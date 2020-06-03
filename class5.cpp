class CGoods : public CEdit
{
public :
    char Goods(char choice, string name)
    {
        if (choice == '1') //Прочитати інформацію з файлу
        {
            Show_Info("Goods.txt", "Goods", "Number(pcs)", "Price($)", "ID");
            return choice = 'g';
        }
        if ((choice == '2')&&(name == "admin")) //Записати інформацію у файл, операція доступна тільки для адміністратора
        {
            Write_Info("Goods.txt", "Goods : ", "Number(pcs) : ", "Price($) : ", "ID : ");
            return choice = 'g';
        }
        if (choice == '3') //Знайти інформацію
        {
            Find_Info("Goods.txt");
            return choice = 'g';
        }
        if ((choice == '4')&&(name == "admin")) //Редагувати інформацію, операція доступна тільки для адміністратора
        {
            Edit_Info("Goods.txt", "Goods1.txt");
            return choice = 'g';
        }

        if ((choice == '5')&&(name == "admin")) //Видалити інформацію, операція доступна тільки для адміністратора
        {
            Delete_Info("Goods.txt");
            return choice = 'g';
        }
        if ((choice == 'b')||(choice == 'B')) //Повернення до попереднього меню
        {
            return choice = 'm';
        }
        if ((choice == 'q')||(choice == 'Q')) //Вихід з програми
            exit(0);
        else
            return choice = 'g';
    }
};
