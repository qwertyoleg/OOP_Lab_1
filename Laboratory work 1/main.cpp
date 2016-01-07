//
//  main.cpp
//  Laboratory work 1
//
//  Created by Oleg Petrushov on 11/26/15.
//  Copyright © 2015 XcoderUA. All rights reserved.
//

#include <iostream>

using namespace std;


//Метод, определяющий сброшен ли бит n и сброшен бит m в числе X.
bool  IfTheBitNAndBitMResetInNumberX(unsigned n,unsigned m, char* numX)
{
    if (numX[sizeof(unsigned)*8-n]=='0')
    {
        if (numX[sizeof(unsigned)*8-m]=='0')
            return true;
    }
    return false;
}

//Метод, который устанавливает шестой и старший бит в числе Y.
void SetSixthAndTheHighestBitInY(bool IsXResetNAndM,char* numY)
{
    numY[sizeof(unsigned)*8-6]='1';
    numY[0]='1';
}

/*
 Метод, приобразоаывающий число из дестичного
 в двоичное (десятичное целое число в массив нулей и едениц)
 */
char* UnsignedToBinaryArray(unsigned IntegerNumber)
{
    //initialisation of array BinaryArrayNumber
    char* BinaryArrayNumber = new char;
    for (int i=0; i<sizeof(unsigned)*8; i++)
    {
        BinaryArrayNumber[i]='0';
    }
    BinaryArrayNumber[sizeof(unsigned)*8]='\0';
    //BinaryArrayNumber = "0000 0000 0000 0000 0000 0000 0000 0000";
    unsigned BinaryArrayNumberCounter = 0;
    do {
        if (IntegerNumber & 1)
        {
            BinaryArrayNumber[(sizeof(unsigned)*8)-BinaryArrayNumberCounter] = '1';
        }
        else
        {
            BinaryArrayNumber[(sizeof(unsigned)*8)-BinaryArrayNumberCounter] = '0';
        }
        BinaryArrayNumberCounter++;
        IntegerNumber = IntegerNumber >> 1;
    } while (IntegerNumber);
    
    return BinaryArrayNumber;
}

//Функция печати
void PrintBinary(char* num)
{
    for (int i=0; i<=sizeof(unsigned)*8; i++)
    {
             cout<<num[i];
    }
         
}




int main(int argc, const char * argv[])
{

    //Вводим 4 десятичных числа
    unsigned x, y, m, n;
    /*
    cout << "Input Decimal numbers:\n";
    cout << "x >";
    cin >> x;
    cout << "y >";
    cin >> y;
    cout << "m >";
    cin >> m;
    cout << "n >";
    cin >> n;
    */
    
	x = 2;
	y = 30;

	n = 2;
	m = 4;
    
    /*if (x<0||y<0)
    {
        cout<<"You input negative numbers \n";
        return 0;
    }*/

    char* arrX = new char;
    
	arrX = UnsignedToBinaryArray(x);
    
    
    char* arrY = new char;
    
    arrY = UnsignedToBinaryArray(y);
    
    
    SetSixthAndTheHighestBitInY( IfTheBitNAndBitMResetInNumberX( n, m, arrX) ,arrY);
    
	//cout <<"array  arr \n";
    //PrintBinary(arrX);
    //cout<<"\n"<<arr<<"\n";
    
    
    cout << "\nYou have been inputed nambers:";
    //Выводим 4 десятичных числа
    cout<<"\nx: "<<x<<"\ny: "<<y<<"\nm: "<<m<<"\nn: "<<n<<endl;
    //Выводим 4 двоичные числа
    cout<<"\nx in binary will be:\n";
    PrintBinary(arrX);
    cout<<"\ny in binary will be:\n";
    PrintBinary(arrY);
    cout << "\nPress eny key to continue>";
    getchar();
    return 0;
}

