class CEdit
{
protected :
    string info1, info2, info3, info4, findInfo, info, repInfo, edInfo;
    bool isFound = false;
public :
    void Show_Info(char fileName[], string header1, string header2, string header3, string header4) //Показати інформацію
    {
        fstream infile(fileName); //Відкрити файл для зчитування
        while (!infile)
        {
            cout << "Cannot open file!\n";
            exit(0);
        }
cout<<setw(15)<<left<<header1<<setw(15)<<header2<<setw(15)<<header3<<setw(15)<<header4<<'\n'; //Вивід шапки таблиці
        while (!infile.eof())
        {
            infile>>info1>>info2>>info3>>info4; //Зчитування даних з файлу для виводу
            if(!infile.eof())
cout<<setw(15)<<left<<info1<<setw(15)<<info2<<setw(15)<<info3<<setw(15)<<info4<<'\n'; //Вивід даних
        }
        system("pause");
        infile.close(); //Закрити файл для зчитування
    }
    void Write_Info(char fileName[], string header1, string header2, string header3, string header4) //Записати інформацію
    {
        cout << header1;
        cin >> info1;
        cout << header2;
        cin >> info2;
        cout << header3;
        cin >> info3;
        cout << header4;
        cin >> info4;
        fstream outfile(fileName, ios::app); //Відкрити файл для запису
        if (!outfile)
        {
            cout << "Cannot open file!\n";
            exit(0);
        }
        outfile<<setw(9)<<left<<info1<<' '<<setw(9)<<info2<<' '<<setw(9)<<info3<<' '<<setw(9)<<info4<<'\n'; //Запис
        cout << "Data was successfully writen.\n";
        system("pause");
        outfile.close();
    }
    void Find_Info(char fileName[]) //Знайти інформацію
    {
        cout << "Information to find : "; //Ввести інформацію для пошуку
        cin >> findInfo;
        fstream infile(fileName); //Відкрити файл для зчитування
        while (!infile)
        {
            cout << "Cannot open file!\n";
            exit(0);
        }
        while (!infile.eof())
        {
            infile >> info;
            if (findInfo == info)
            {
                cout << "Information was successfully found.\n";
                isFound = true;
            }
        }
        if(!isFound)
            cout << "Not found!\n";
        system("pause");
        infile.close(); //Закрити файл для зчитування
    }
    void Edit_Info(char fileName[], char fileName1[]) //Редагувати інформацію
    {
        cout << "Information to edit : "; //Ввести слово, яке треба замінити
        cin >> edInfo;
        cout << "Information to replace by : "; //Ввести слово, яким замінити
        cin >> repInfo;
        fstream infile(fileName); //Відкрити файл для зчитування
        while (!infile)
        {
            cout << "Cannot open file!\n";
            exit(0);
        }
        fstream outfile(fileName1, ios::out); //Відкрити файл перезапису
        if (!outfile)
        {
            cout << "Cannot open file!\n";
            exit(0);
        }
        while (!infile.eof())
        {
            infile>>info1>>info2>>info3>>info4; //Зчитування даних з файлу для виводу
            if (edInfo == info1)
            {
                 info1 = repInfo;
                 isFound = true;
            }
            if (edInfo == info2)
            {
                info2 = repInfo;
                isFound = true;
            }
            if (edInfo == info3)
            {
                info3 = repInfo;
                isFound = true;
            }
            if (edInfo == info4)
            {
                info4 = repInfo;
                isFound = true;
            }
            if (!infile.eof())
                outfile<<setw(9)<<left<<info1<<' '<<setw(9)<<info2<<' '<<setw(9)<<info3<<' '<<setw(9)<<info4<<'\n'; //Перезапис
        }
        if(!isFound)
            cout << "Not found!\n";
        else
            cout << "Data was successfully edited.\n";
        system("pause");
        infile.close(); //Закрити файл для рзчитування
        outfile.close(); //Закрити файл для перезапису
        remove(fileName);
        rename(fileName1, fileName);
    }
    void Delete_Info(char fileName[]) //Видалити інформацію
    {
        fstream outfile(fileName, ios::out); //Відкрити файл для видалення
        cout << "Data was successfully deleted.\n";
        system("pause");
        outfile.close();
    }
};
