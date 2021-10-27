#include <iostream>
#include<math.h>
using namespace std;

int main()
{int number,reminder;
    cout << "Enter a number:  " ;
    cin>>number;
    reminder = number % 2;
    if(reminder == 0)
        cout<<"It is a even number.";
    else
        cout<<"It is a odd number.";
    return 0;
}
