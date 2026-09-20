/*
 * Q3. WAP to demonstrate for, while and do-while loops with all possible variations
 *     (for loop without initialisation, without increment, without both, etc.)
 */
#include <iostream>
using namespace std;

int main()
{
   
    cout << "1. Normal for loop           : ";
    for (int i = 0; i < 10; i++)
        cout << i << " ";
    cout << endl;

  
    int i = 0;
    cout << "2. for without initialisation: ";
    for (; i < 10; i++)
        cout << i << " ";
    cout << endl;

   
    i = 0;
    cout << "3. for without increment     : ";
    for (; i < 10;)
    {
        cout << i << " ";
        i++;                 // increment done inside the body
    }
    cout << endl;

   
    i = 0;
    cout << "4. for(;;) with break        : ";
    for (;;)
    {
        if (i >= 10)
            break;           // condition checked inside the body
        cout << i << " ";
        i++;
    }
    cout << endl;

    // ---------- 5. for loop with multiple variables (comma operator) ----------
    cout << "5. for with two variables    : ";
    for (int a = 0, b = 9; a < b; a++, b--)
        cout << "(" << a << "," << b << ") ";
    cout << endl;

    // ---------- 6. for loop with empty body ----------
    int sum = 0;
    for (int k = 1; k <= 10; sum += k, k++)
        ;                    // null statement as body
    cout << "6. for with empty body       : sum of 1..10 = " << sum << endl;

    // ---------- 7. Nested for loop ----------
    cout << "7. Nested for (pattern):" << endl;
    for (int r = 1; r <= 4; r++)
    {
        for (int c = 1; c <= r; c++)
            cout << "* ";
        cout << endl;
    }

    // ---------- 8. while loop ----------
    cout << "8. while loop                : ";
    int j = 0;
    while (j < 10)
    {
        cout << j << " ";
        j++;
    }
    cout << endl;

    // ---------- 9. while loop that never executes (condition false at start) ----------
    cout << "9. while (false condition)   : ";
    int n = 20;
    while (n < 10)           // body never runs
    {
        cout << n << " ";
        n++;
    }
    cout << "(body executed 0 times)" << endl;

    // ---------- 10. do-while loop ----------
    cout << "10. do-while loop            : ";
    int d = 0;
    do
    {
        cout << d << " ";
        d++;
    } while (d < 10);
    cout << endl;

    // ---------- 11. do-while executes at least once ----------
    cout << "11. do-while (false cond.)   : ";
    int e = 20;
    do
    {
        cout << e << " ";    // still printed once
        e++;
    } while (e < 10);
    cout << "(body executed 1 time)" << endl;

    // ---------- 12. do-while with continue and break ----------
    cout << "12. do-while + continue/break: ";
    int p = 0;
    do
    {
        p++;
        if (p % 2 == 0)
            continue;        // skip even numbers
        if (p > 9)
            break;           // stop after 9
        cout << p << " ";
    } while (p < 20);
    cout << endl;

    return 0;
}
