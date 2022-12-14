#include <iostream>
#include <cmath>

//declaring functions
//return integer value
int discriminant(int a, int b, int c);

int main()
{
    using namespace std;

    //taking input
    int number, first, second, third;
    double x, y, z, p, q;
    cout << "a: ";
    cin >> first;
    cout << "b: ";
    cin >> second;
    cout << "c: ";
    cin >> third;

    //function call
    int result = discriminant(first, second, third);

    //output of the program
    //outputting the number of solutions and solutions
    //if the discriminant is greater than 0, the solutions would be real
    if(result > 0)
    {
        cout << "There are two solutions in this quadratic equation!" << endl;
        p = ((-1 * second) + sqrt(result)) / (2 * first);
        q = ((-1 * second) - sqrt(result)) /(2 * first);
        cout << "The solutions are " << p << " and " << q << endl;
    }
    //if the discriminant is less than 0, the solutions would be complex
    else if(result < 0)
    {
        cout << "There are two solutions in this quadratic equation!" << endl;
        x = (-1 * static_cast<double>(second))/2;
        y = -1 * result;
        z = first * 2;
        cout << "The solutions are " << x << " + √" << y << "i/" << z<< " and " << x << " - √" << y << "i/" << z << endl;
    }
    else
    {
        cout << "There is only one solution in this quadratic equation!" << endl;
        p = ((-1 * second) + sqrt(result))/ (2 * first);
        cout << "The solution is " << p << "." << endl;
    }
    return 0;
}
/**
 * @brief return the discriminant value to decide how many solutions there are and whether the solution is real or complex
 * 
 * @param a 
 * @param b 
 * @param c 
 * @return int 
 */
int discriminant(int a, int b, int c)
{
    int disc = (b * b) - (4 * a * c);
    return disc;
}

