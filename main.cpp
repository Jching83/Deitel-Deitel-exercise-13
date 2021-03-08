/*
 * ****************************************************************
 * 2.19 (Arithmetic, Smallest and Largest) Write a program that   *
 * inputs three integers from the keyboard and prints the sum,    *
 * average, product, smallest and largest of these numbers. The   *
 * screen dialog should appear as follows:                        *
 * Input three different integers: 13 27 14                       *
 * Sum is 54                                                      *
 * Average is 18                                                  *
 * Product is 4914                                                *
 * Smallest is 13                                                 *
 * Largest is 27                                                  *
 * ****************************************************************
 */

#include <iostream> // enable input and output of program

using namespace std; // use standard library namespace
//begin main function
int main() {
    int num1{0}; //first integer (initialized at 0)
    int num2{0}; //second integer (initialized at 0)
    int num3{0}; //third integer (initialized at 0)

    int min, max;

    cout << "Please provide three integers\n"; //statement informing user the program needs three integers
    cout << "Please enter first integer: ";  //prompts user for input of first integer
    cin >> num1; //reads input of first integer
    cout << "Please enter second integer: ";  //prompts user for input of second integer
    cin >> num2; //reads input of second integer
    cout << "Please enter third integer: ";  //prompts user for input of third integer
    cin >> num3; //reads input of third integer

    cout << "The sum of the provided integers is " << num1 + num2 + num3 << endl; //Calculates the sum of given numbers
    cout << "The average of the provided integers is " << num1 + num2 + num3 / 3
         << endl; //Calculates the average of given numbers
    cout << "The product of the provided integers is " << num1 * num2 * num3
         << endl; // Calculates the product of given numbers

    // determines the smallest integer
    min = num1;
    if (num2 < min)
        min = num2;
    if (num3 < min)
        min = num3;
    cout << "The smallest integer is " << min << endl;

    //determines the largest integer
    max = num1;
    if (num2 > max)
        max = num2;
    if (num3 > max)
        max = num3;
    cout << "The largest integer is " << max << endl;
    return 0;
} //end main function
