
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    double mas[10],n;
    srand(time(0)); // или srand(time(nullptr));
    for (int i=0;i<10;i++)
    {
        mas[i]=rand()% 21 -10;
        cout <<"mas[" << i << "] = "<< mas[i]  << endl;
    }
    cout << "\n====ДЕЛЕНИЕ НА ПРЕДПОСЛЕДНЫЙ МАССИВ====\n\n";
    n=mas[8];
    for (int i=0;i<10;i++)
    {
        mas[i]=mas[i]/n;
        cout <<"mas[" << i << "] = "<< mas[i]  << endl;
    }
    return 0;
}
