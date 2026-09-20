/*
 * Q3. MULTIPLE INHERITANCE  (one derived class from TWO base classes)
 *
 *     Academic (Marks)  +  Sports (Sports Score)  ->  Result (Total)
 */
#include <iostream>
using namespace std;

class Academic                  // first base class
{
protected:
    int marks;

public:
    void setMarks(int m)
    {
        marks = m;
    }
};

class Sports                    // second base class
{
protected:
    int sportsScore;

public:
    void setScore(int s)
    {
        sportsScore = s;
    }
};

class Result : public Academic, public Sports    // inherits from both
{
    int total;

public:
    void calculate()
    {
        total = marks + sportsScore;
    }

    void display()
    {
        cout << "--- Result ---" << endl;
        cout << "Academic Marks : " << marks << endl;
        cout << "Sports Score   : " << sportsScore << endl;
        cout << "Total Score    : " << total << endl;
    }
};

int main()
{
    Result r;

    r.setMarks(80);         // from Academic
    r.setScore(15);         // from Sports
    r.calculate();
    r.display();

    return 0;
}
