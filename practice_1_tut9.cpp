#include <iostream>

using namespace std;

int main()
{
    // Control Structures

    int marks;
    cout << "tell me your marks " << endl;
    cin >> marks;
    cout << endl;

    // Selecton Structures: if else letters:

    if (marks < 100)
    {
        cout << "you can not come to the college " << endl;
    }
    else if (marks = 100)
    {
        cout << "you will get a chance to come to college " << endl;
    }
    if (marks > 100)

    {
        cout << "you can come to the college " << endl;
    }
    // Selection Structure: Switch case
    switch (marks)
    {
    case 100:
        cout << "your marks 100 " << endl;
        break;
    case 67:
        cout << "your marks 67 " << endl;
        break;
    case 155:
        cout << "your marks 155 " << endl;
        break;
    default:
        cout << "sorry this is error " << endl;
        break;
    }

    return 0;
}