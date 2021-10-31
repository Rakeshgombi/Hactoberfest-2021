#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin>>N;
    int sq, flag=0; 
    sq=N*N; 
    while (N > 0) { 
        if (N % 10 != sq % 10){ 
            flag=1;
            break;
        }
        N /= 10; 
        sq /= 10; 
    }
    if (flag==1)
        cout<<"false";
    else
        cout<<"true";
}
