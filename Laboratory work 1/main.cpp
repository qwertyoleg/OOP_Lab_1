//
//  main.cpp
//  Laboratory work 1
//
//  Created by Oleg Petrushov on 11/26/15.
//  Copyright © 2015 XcoderUA. All rights reserved.
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[])
{

    //Вводим 4 десятичных числа
    int x, y, m, n;
    cout<<"Input Decimal numbers:\n";
    cout << "x >";
    
    //cin >> x;
    
	x = 21;
	y = 3;

	n = 2;
	m = 4;
    
    if (x<0||y<0)
    {
        cout<<"You input negative numbers \n";
        return 0;
    }

	char *arr;
	IntegerToBinaryArray(x, arr);
	cout <<"array  arr "<< arr<<"  /n/n\n\n";
    /*
     cout << "y >";
     cin >> y;
     cout << "m >";
     cin >> m;
     cout << "n >";
     cin >> n;
     */
    
    cout << "\nYou have been inputed nambers:";
    //Выводим 4 десятичных числа
    cout<<"\nx: "<<x<<"\ny: "<<y<<"\nm: "<<m<<"\nn: "<<n<<endl;
    //Выводим 4 двоичные числа
    bool isX = false;
    cout<<"x in binary will be:\n";
    cout<<"y in binary will be:\n";
    cout << "Press eny key to continue>";
    getchar();
    return 0;
}

//Метод, определяющий сброшен ли бит n и сброшен бит m в числе X.

//Метод, который устанавливает шестой и старший бит в числе Y.

/*
Метод, приобразоаывающий число из дестичного
в двоичное (десятичное целое число в массив нулей и едениц)
*/
void IntegerToBinaryArray(int IntegerNumber, char BinaryArrayNumber[])
{
	int BinaryArrayNumberCounter = 0;
	do {
		if (IntegerNumber & 1)
		{
			BinaryArrayNumber[BinaryArrayNumberCounter] = '1';
		}
		else
		{
			BinaryArrayNumber[BinaryArrayNumberCounter] = '0';
		}
		BinaryArrayNumberCounter++;
		IntegerNumber = IntegerNumber >> 1;
	} while (IntegerNumber);
}

//Функция печати
void PrintIntegerAsBinary(int x, int y)
{

}


