#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    vector<int> v;
    int m;
    cout << "Введите размер массива >5\n";
    cin >> m;
    int i, a, SUM;
    for (i=0; i<m; i++)
    {
        cout << "Введите число для " << i+1 << "-ого массива: "<< endl;
        cin >> a;
        v.push_back(a);
    }
    cout << "\n1=========1====ВЫВОД МАССИВА====1=========1\n\n";
    for (i=0; i<v.size(); i++)
        cout <<"v[" << i << "] = "<< v[i] << endl;
    cout << "\n===============ВЫВОД ОКОНЧЕН===============\n";
    
    cout << "\n2=========2====ВЫВОД МАССИВА c номером варианта=2\n\n";
    v.push_back(27) ;
    for (i=0; i<v.size(); i++)
        cout <<"v[" << i << "] = "<< v[i] << endl;
    cout << "\n===============ВЫВОД ОКОНЧЕН===============\n";
    
    cout << "\n3====3======ВЫВОД СУММЫ МАССИВА=====3=====3\n\n";
    SUM=0;
    for (i=0; i<(m+1); i++)
        SUM=SUM+v[i];
    cout <<"Сумма элементов массива: "<< SUM << endl;
    cout << "\n===============ВЫВОД ОКОНЧЕН===============\n";
    
    cout << "\n4====4======ВЫВОД МАССИВА без 0=====4=====4\n\n";
    for (i=0; i<v.size(); i++)
        if (v[i]==0)
        {
            v.erase(v.begin() + i);
            break;
        }

    for (i=0; i<v.size(); i++)
        cout <<"v[" << i << "] = "<< v[i] << endl;
    cout << "\n===============ВЫВОД ОКОНЧЕН===============\n";
    cout << "=============ЗАДАЧА ОКОНЧЕНА=============\n";
    return 0;
}
