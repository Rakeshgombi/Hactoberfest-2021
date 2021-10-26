/* C++ Program to Design Simple Calculator using switch case  */

# include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;

    cout << "\nEnter 1st operand :: ";
    cin >> num1;
    cout << "\nEnter 2nd operand :: ";
    cin >> num2;

    cout << "\nEnter operator [ + or - or * or / ] :: ";
    cin >> op;


    switch(op)
    {
        case '+':
            cout <<"\nAddition of [ "<<num1<<" + "<<num2<<" ] = "<< num1+num2<<"\n";
            break;

        case '-':
            cout <<"\nSubtraction of [ "<<num1<<" - "<<num2<<" ] = "<< num1-num2<<"\n";
            break;

        case '*':
            cout <<"\nMultiplication of [ "<<num1<<" * "<<num2<<" ] = "<< num1*num2<<"\n";
            break;

        case '/':
            cout <<"\nDivide of [ "<<num1<<" / "<<num2<<" ] = "<< num1/num2<<"\n";
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "\nError! operator is not correct\n";
            break;
    }

    return 0;
}