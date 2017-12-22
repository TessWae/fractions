/*

 Tess Waerneman
 11/25/17

 This program will be centered around the class named Fraction.
 It will use the set function to assign the values of two fractions.
 The class Fraction and its member functions will add, subtract, multiply
 and divide the fractions and report the result with the help of the member
 function print. The program will also compare the two fractions to see if
 they are equal and report the result on the screen.

 */


#include <iostream>
using namespace std;


class Fraction {

public:

    Fraction();
    Fraction(int inNumerator, int inDenominator);

    void print() const;
    bool isEqualTo(const Fraction f2) const;
    Fraction multipliedBy(const Fraction tempFraction) const;
    Fraction dividedBy(const Fraction tempFraction) const;
    Fraction addedTo(const Fraction tempFraction) const;
    Fraction subtract(const Fraction tempFraction) const;

private:
    int numerator;
    int denominator;


};






Fraction::Fraction()
{
    numerator = 0;
    denominator = 1;
}



Fraction::Fraction(int inNumerator, int inDenominator)
{
    numerator = inNumerator;
    denominator = inDenominator;
}






void Fraction::print() const
{
    cout << numerator << "/" << denominator;
}






bool Fraction::isEqualTo(const Fraction f2) const
{

    if ((f2.denominator * numerator) == (f2.numerator * denominator)){
        return true;
    }

    return false;

}



Fraction Fraction::multipliedBy(const Fraction tempFraction) const
{

    int tempNumerator;
    int tempDenominator;

    tempNumerator = tempFraction.numerator * numerator;
    tempDenominator = tempFraction.denominator * denominator;
    Fraction tempResult(tempNumerator, tempDenominator);

    return tempResult;

}





Fraction Fraction::dividedBy(const Fraction tempFraction) const
{
 
 int tempNumerator;
 int tempDenominator;

 tempNumerator = tempFraction.denominator * numerator;
 tempDenominator = tempFraction.numerator * denominator;
 Fraction tempResult(tempNumerator, tempDenominator);

 return tempResult;

}






Fraction Fraction::addedTo(const Fraction tempFraction) const
{
 
 int tempNumerator;
 int tempDenominator;

 tempNumerator = (tempFraction.denominator * numerator) + (tempFraction.numerator *
                                                           denominator);
 tempDenominator = tempFraction.denominator * denominator;
 Fraction tempResult(tempNumerator, tempDenominator);

 return tempResult;


}







Fraction Fraction::subtract(const Fraction tempFraction) const
{

 int tempNumerator;
 int tempDenominator;

 tempNumerator = (tempFraction.denominator * numerator) - (tempFraction.numerator *
                                                           denominator);
 tempDenominator = tempFraction.denominator * denominator;
 Fraction tempResult(tempNumerator, tempDenominator);

 return tempResult;

}






int main()
{

    Fraction f1(9,8);
    Fraction f2(2,3);
    Fraction result;

    cout << "The result starts off at ";
    result.print();
    cout << endl;

    cout << "The product of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.multipliedBy(f2);
    result.print();
    cout << endl;

    cout << "The quotient of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.dividedBy(f2);
    result.print();
    cout << endl;

    cout << "The sum of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.addedTo(f2);
    result.print();
    cout << endl;

    cout << "The difference of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.subtract(f2);
    result.print();
    cout << endl;

    if (f1.isEqualTo(f2)){
        cout << "The two Fractions are equal." << endl;
    } else {
        cout << "The two Fractions are not equal." << endl;
    }

    const Fraction f3(12, 8);
    const Fraction f4(202, 303);
    result = f3.multipliedBy(f4);
    cout << "The product of ";
    f3.print();
    cout << " and ";
    f4.print();
    cout << " is ";
    result.print();
    cout << endl;

}

/*

 The result starts off at 0/1
 The product of 9/8 and 2/3 is 18/24
 The quotient of 9/8 and 2/3 is 27/16
 The sum of 9/8 and 2/3 is 43/24
 The difference of 9/8 and 2/3 is 11/24
 The two Fractions are not equal.
 The product of 12/8 and 202/303 is 2424/2424
 Program ended with exit code: 0

 */


