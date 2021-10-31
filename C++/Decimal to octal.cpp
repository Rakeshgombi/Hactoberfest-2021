include <iostream>
using namespace std;

int main()

{

     long dno, temp;

     int octal[100], i = 1, j;

     cout<<"Enter the decimal number: ";

     cin>>dno;

     temp = dno;

     while (temp != 0)

     {
         octal[i++] = temp % 8;
         temp = temp / 8;
     }

     cout<<"Equivalent octal value of decimal no: ";

     for (j = i - 1; j > 0; j--)

         cout<<octal[j];

     return 0;

}
