#include <iostream>
using namespace std;

int main()
{
    char a1 = ' ';
    char a2 = ' ';
    char a3 = ' ';
    char b1 = ' ';
    char b2 = ' ';
    char b3 = ' ';
    char c1 = ' ';
    char c2 = ' ';
    char c3 = ' ';
    char victory = '\0';
    char turn = 'O';
    char turnCount = 0;
    char row;
    char column;
    do
    {
        cout << "  1   2   3" << endl;
        cout << "a " << a1 << " | " << a2 << " | " << a3 << endl;
        cout << "  ---------" << endl;
        cout << "b " << b1 << " | " << b2 << " | " << b3 << endl;
        cout << "  ---------" << endl;
        cout << "c " << c1 << " | " << c2 << " | " << c3 << endl;
        cout << "  ---------" << endl;

        cout << "Current Turn " << turn << ". Which place do you want to play in (e.g, a1, b2, etc.)?";
        cin >> row >> column;
        if (row == 'a')
        {
            if (column == '1')
            {
                if (a1 == ' ')
                {
                    a1 = turn;
                }
                else
                {
                    cout << "Turn Already Played" << endl;
                    continue;
                }
            }
            else if (column == '2')
            {
                if (a2 == ' ')
                {
                    a2 = turn;
                }
                else
                {
                    cout << "Turn Already Played" << endl;
                    continue;
                }
            }
            else if (column == '3')
            {
                if (a3 == ' ')
                {
                    a3 = turn;
                }
                else
                {
                    cout << "Turn Already Played" << endl;
                    continue;
                }
            }
            else
            {
                cout << "Invalid Column" << endl;
                continue;
            }
        }
        else if (row == 'b')
        {
            if (column == '1')
            {
                if (b1 == ' ')
                {
                    b1 = turn;
                }
                else
                {
                    cout << "Turn Already Played" << endl;
                    continue;
                }
            }
            else if (column == '2')
            {
                if (b2 == ' ')
                {
                    b2 = turn;
                }
                else
                {
                    cout << "Turn Already Played" << endl;
                    continue;
                }
            }
            else if (column == '3')
            {
                if (b3 == ' ')
                {
                    b3 = turn;
                }
                else
                {
                    cout << "Turn Already Played" << endl;
                    continue;
                }
            }
            else
            {
                cout << "Invalid Column" << endl;
                continue;
            }
        }
        else if (row == 'c')
        {
            if (column == '1')
            {
                if (c1 == ' ')
                {
                    c1 = turn;
                }
                else
                {
                    cout << "Turn Already Played" << endl;
                    continue;
                }
            }
            else if (column == '2')
            {
                if (c2 == ' ')
                {
                    c2 = turn;
                }
                else
                {
                    cout << "Turn Already Played" << endl;
                    continue;
                }
            }
            else if (column == '3')
            {
                if (c3 == ' ')
                {
                    c3 = turn;
                }
                else
                {
                    cout << "Turn Already Played" << endl;
                    continue;
                }
            }
            else
            {
                cout << "Invalid Column" << endl;
                continue;
            }
        }
        else
        {
            cout << "Invalid Row" << endl;
            continue;
        }
        if (a1 != ' ' && a1 == a2 && a2 == a3)
        {
            victory = a1;
            break;
        }
        if (b1 != ' ' && b1 == b2 && b2 == b3)
        {
            victory = b1;
            break;
        }
        if (c1 != ' ' && c1 == c2 && c2 == c3)
        {
            victory = c1;
            break;
        }
        if (a1 != ' ' && a1 == b1 && b1 == c1)
        {
            victory = a1;
            break;
        }
        if (a2 != ' ' && a2 == b2 && b2 == c2)
        {
            victory = a2;
            break;
        }
        if (a3 != ' ' && a3 == b3 && b3 == c3)
        {
            victory = a3;
            break;
        }
        if (a1 != ' ' && a1 == b2 && b2 == c3)
        {
            victory = a1;
            break;
        }
        if (c1 != ' ' && c1 == b2 && b2 == a3)
        {
            victory = c1;
            break;
        }
        if (turn == 'X')
        {
            turn = 'O';
        }
        else
        {
            turn = 'X';
        }
        turnCount++;
    } while (victory != 'X' && victory != 'O' && turnCount < 9);
    cout << "  1   2   3" << endl;
    cout << "a " << a1 << " | " << a2 << " | " << a3 << endl;
    cout << "  ---------" << endl;
    cout << "b " << b1 << " | " << b2 << " | " << b3 << endl;
    cout << "  ---------" << endl;
    cout << "c " << c1 << " | " << c2 << " | " << c3 << endl;
    cout << "  ---------" << endl;
    if (victory == '\0')
    {
        cout << "Game is a Draw";
    }
    else
    {
        cout << victory << " won the game.";
    }
    return 0;
}