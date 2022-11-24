#include <iostream>
#include <stdio.h>
using namespace std;

float add(int first_num, int second_num)
{
    int result = first_num + second_num;
    return result;
}

float sub(int first_num, int second_num)
{
    int result = first_num - second_num;
    return result;
}

float multip(int first_num, int second_num)
{
    int result = first_num * second_num;
    return result;
}

float divide(float first_num, float second_num)
{
    float result;
    try
    {
        if (second_num != 0)
        {
            result = first_num / second_num;
            return result;
        }
        else
        {
            throw result;
        }
    }
    catch (float result)
    {
        cout << endl
             << "Denominator must not be 0. Please enter another number exit of 0" << endl;
        return 0;
    }
}
main()
{
    float first_num, second_num;
    float result;
    string parameters;
    cout << "Please choose type of process '+', '-', '*' or '/': ";
    cin >> parameters;
    while (parameters == "+" || parameters == "-" || parameters == "*" || parameters == "/")
    {
        if (parameters == "+")
        {

            cout << "Enter the first number: ";
            cin >> first_num;
            cout << "Enter the second number: ";
            cin >> second_num;
            result = add(first_num, second_num);
            cout << "Result is: " << result << endl;
        }
        else if (parameters == "-")
        {
            cout << "Enter the first number:";
            cin >> first_num;
            cout << "Enter the second number";
            cin >> second_num;
            result = sub(first_num, second_num);

            cout << "Result is: " << result << endl;
        }
        else if (parameters == "*")
        {
            cout << "Enter the first number: ";
            cin >> first_num;
            cout << "Enter the second number";
            cin >> second_num;
            result = multip(first_num, second_num);
            cout << "Result is: " << result << endl;
        }
        else if (parameters == "/")
        {
            cout << "Enter the first number: ";
            cin >> first_num;
            cout << "Enter the second number: ";
            cin >> second_num;
            result = divide(first_num, second_num);
            if (second_num != 0)
                printf("Result is: %.2f", result);
        }
        else
        {
            break;
        }
        cout << endl
             << "For exit press any key..." << endl;
        cout << "Select '+', '-', '*' or '/': ";
        cin >> parameters;
    }
}