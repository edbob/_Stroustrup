#include "../std_lib_facilities.h"
// Напишите программу. проверяющую четность или нечетность целых
// чисел. Как всегда. убедитесь, что вывод программы ясен и полон. Иначе
// говоря, не следует ограничиваться простой констатацией вроде
// "да" или "вет". Вывод должен быть информативным, например "Число
// 4 ЯВJJЯется четным" . Подсказка: см. оператор вычисления остатка

int main()
{
    vector<int> arr= {22,16,2,5,76,89,9,10,20};

    for(int t: arr)
    {
         int res = t % 2;
         if(res!=1)
         {
            cout << t << " Четное" << '\n';
         }else{
            cout << t << " Не четное" << '\n';
         }
    }
    return 0;
}