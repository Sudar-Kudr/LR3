//ЧАСТЬ 4
//ЧАСТЬ 4
#include <iostream>
#include <string>

using namespace std;
int main()
{
    //1111111111
    string str1, str3;
    cout << "Введи строку" << endl;
    getline(cin, str1);
    cout <<"Вывод строки\n"<< str1 << endl;
    //2222222222
    int kol_3 = 0;
    for (int i = 0; i < str1.size(); ++i)
        if (str1[i] == '3') kol_3++;
    cout << "Длина строки равна: " << str1.size() << "\nДоля цифры 3 равна: " << kol_3 * 1.0 / str1.size() <<endl;
    //3333333333
    int l1, l2;
    cout << "Введи l1 и l2" << endl;
    cin >> l1 >> l2;
    cout << str1.substr(l1-1, l2 - l1 +1) << endl;
    //4444444444
    string str2 = "Can you can a can as a canner can can a can";
    cin.ignore(10, '\n');
    cout << "Введи замену" << endl;
    getline(cin, str3);
    string can = "can "; //ПРОБЕЛ

    while (str2.find(can) != string::npos)
    {
        auto pos = str2.find(can);
        str2.erase(pos, can.size());
        str2.insert(pos, str3+" ");
    }
    can = "Can";
    if ((str3[0] > 96) && (str3[0] < 123))
        str3[0] -= 32;
    while (str2.find(can) != string::npos) {
        auto pos = str2.find(can);
        str2.erase(pos, can.size());
        str2.insert(pos, str3);
    }
    cout <<"Вывод с заменой\n" <<str2 <<endl;
    return 0;
}

