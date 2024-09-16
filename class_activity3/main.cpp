//
//  main.cpp
//  class_activity3
//
//  Created by Sonia Lopchan on 9/15/24.

//[rand() %(maxValue – minValue +1)] + minValue

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main ()
{
    srand(int (time(0)));
    
    int minValue = 1;
    int maxValue = 6;
    
    //Roll the dices
    int dice1 = (rand() %(maxValue-minValue +1)) + minValue;
    int dice2 = (rand() %(maxValue-minValue +1)) + minValue;
    
    //Display two sides
    cout << "Dice 1: " <<dice1 << endl;
    cout << "Dice 2: " <<dice2 << endl;
    
    return 0;
}
