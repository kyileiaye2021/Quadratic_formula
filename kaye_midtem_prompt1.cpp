//Kyi Lei Aye
//CS002_77215
//Midterm Project_Prompt 1

#include <iostream>
#include <cmath>

//declaring functions
//return integer value
int discriminant(int a, int b, int c);

int main()
{
    using namespace std;

    //taking input
    int number, first, second, third, x, y;
    cout << "a: ";
    cin >> first;
    cout << "b: ";
    cin >> second;
    cout << "c: ";
    cin >> third;

    //function call
    int result = discriminant(first, second, third);
    x = ((-1 * second) + result)/2;
    y = ((-1 * second) - result)/2;

    if(x == y)
    {
        cout << "The solution is " << x << "." << endl;
    }
    else
    {
        cout << "The solutions are " << x << " and " << y << endl;
    }

    //output of the program
    if(result > 0 || result < 0)
    {
        cout << "There are two answers in this quadratic equation!";
    }
    else
    {
        cout << "There is only one answer in this quadratic equation!";
    }

    return 0;
}

int discriminant(int a, int b, int c)
{
    int disc = (b * b) - (4 * a * c);
    return disc;
}
