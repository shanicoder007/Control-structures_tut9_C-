#include <iostream>

using namespace std;

int main()
{
    // Control Structure:

    int age;
    cout << "tell me your age " << endl;
    cin >> age;

    // selection control structure: if else letter

    if (age < 18)

    {
        cout << "you can not come to my party " << endl;
    }

    else if (age == 18)

    {
        cout << "you are a kid you will get a kid pass to the party " << endl;
    }

    else if (age > 18)

    {
        cout << "you can come to the party " << endl;
    }
    // selection control structure : switch case

    switch (age)
    {
    case 45:
        cout << "you are 45" << endl;
        break;
    case 67:
        cout << "you are 67" << endl;
        break;
    case 8:
        cout << "you are 8" << endl;
        break;
    default:
        cout << "you are not able to assign in" << endl;
        break;
    }

    return 0;
}