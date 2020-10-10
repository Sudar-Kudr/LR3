#include <iostream>

using namespace std;

int main()
{
    int n;
    int *arr; //дин выд памяти
    cout << "Введите размер массива >10\n";
    cin >> n;
    arr=new int[n]; //дин выд памяти
    int i, a, k1, k2, SUM;
    for (i=0; i<n; i++)
    {
        cout << "Введите число для " << i+1 << "-ого массива: "<< endl;
        cin >> a;
        arr[i]=a;
    }
    cout << "\n1=========1====ВЫВОД МАССИВА====1=========1\n\n";
    for (i=0; i<n; i++)
        cout <<"arr[" << i << "] = "<< arr[i]  << endl;
    cout << "\n=============ВЫВОД ОКОНЧЕН=============\n";
    
    cout << "\n2=========2====ВЫВОД МАССИВА====2=========2\n\n";
    
    for (i=0; i<n; i++)
        if (arr[i]<0)
            arr[i]=arr[i]+5;
    for (i=0; i<n; i++)
        cout <<"arr[" << i << "] = "<< arr[i]  << endl;
    cout << "\n=============ВЫВОД ОКОНЧЕН=============\n\n";
    
    cout << "Введите интервал через пробел\n";
    cin >> k1 >> k2;
    SUM=0;
    for (i=k1; i<k2; i++)
        SUM=SUM+arr[i];
    cout <<"Сумма элементов в выбранном вами интервале: "<< SUM  << endl;
    cout << "\n=============ЗАДАЧА ОКОНЧЕНА=============\n";
    
    return 0;
}
