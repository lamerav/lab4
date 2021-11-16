#include <iostream>
#include <random>
#include <array>
#include <vector>

using namespace std;

int main() {
    random_device rd;

    cout << "First task:" << endl;

    array<int, 10> m = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    cout << "First mass:" << endl;
    for (int a: m)
        cout << a << " ";
    cout << endl;
    cout << endl;

    for (int i = 0; i < 10; i++) { m[i] = static_cast<int>(rd() % 21 - 10); }

    cout << "Random mass:" << endl;
    for (int a: m)
        cout << a << " ";
    cout << endl;
    cout << endl;

    cout << "Second task" << endl;
    vector<int> Vector;
    for (int i = 0; i < 10; i++) {
        Vector.push_back(m[i]);
    }
    cout << "Vector:" << endl;

    for (int a: Vector)
        cout << a << " ";
    cout << endl;
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        if (Vector[i] == 0) {Vector.erase(Vector.begin()+i); break;}
    }

    cout << "Vector after delete null ellement:" << endl;

    for (int a: Vector)
        cout << a << " ";
    cout << endl;
    cout << endl;

    int sum;
    sum = 0;
    for (int a: Vector)
        sum += a;
    cout << "Sum of vector is: " << sum << endl;

    int first, last, delta;
    first = *Vector.begin();
    last = *Vector.end() - 1;
    delta = first - last;


    for (auto& i: Vector)
    {
        i /= delta;
    }

    cout << "Vector after del on delta:" << endl;

    for (int a: Vector)
        cout << a << " ";
    cout << endl;
    cout << endl;

    Vector.insert(Vector.end(), 2);

    cout << "Vector after adding 2 in end:" << endl;

    for (int a: Vector)
        cout << a << " ";
    cout << endl;
    cout << endl;

    Vector.erase(Vector.begin() + 1, Vector.begin() + 5);

    cout << "Vector after delete ellements bggin 1 to 4:" << endl;

    for (int a: Vector)
        cout << a << " ";
    cout << endl;
    cout << endl;

    cout << "Vector after adding 3 ellements between last and last - 1:" << endl;

    Vector.insert(Vector.begin() + Vector.size() - 1, {2.5,2.5,2.5});

    for (int a: Vector)
        cout << a << " ";
    cout << endl;
    cout << endl;

    cout << "Third task, enter string:" << endl;
    string s;
    getline(cin, s);
    cout << " Your string is: " << s << endl;
    cout << endl;
    double k;
    for (int j = 0 ,i = 0; i <= s.length() ; i++)
        switch (s[i])
        {   case'B':
            case'C':
            case'D':
            case'F':
            case'G':
            case'H':
            case'J':
            case'K':
            case'L':
            case'M':
            case'N':
            case'P':
            case'R':
            case'S':
            case'T':
            case'Q':
            case'V':
            case'W':
            case'X':
            case'Z':
                j++;
            default:
                ;
                k = j;
        }
    cout << "Length of your string is: " << s.length() << " and kol of big strong letters: " << k / s.length() << endl;
    cout << endl;

    int i1, i2;
    cout << "Enter two points to take substr of your str:" << endl;
    cout << "i1 = ";
    cin >> i1;
    cout << endl;
    cout << "i2 = ";
    cin >> i2;
    cout << endl;
    cout << "Your substr is:" << s.substr(min(i1, i2) - 1, abs(i1 - i2) + 1) << endl;
    cout << endl;


    string s1;
    s1 = "Can you can a can as a canner can can a can ";
    cout << "Original phrase: " << s1 << endl;
    cout << "Enter phrase you want to insert: ";
    string word;
    cin >> word;
    cout << endl;

    while (s1.find("can ") != string::npos)
    {
        s1.replace(s1.find("can "), 3, word);
    }
    cout << "The new string is: " << s1;

}
