#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C, spos,P1, P2,S,X, Y, Z;
    X = 0;
    Y = 0;
    Z = 0;

    
    
    cin >> A >> B >> C;

    if (A == 1)
    {
        spos = 1;
    }
    else if (B == 1)
    {
        spos = 2;
    }
    else
    {
        spos = 3;
    }

    cin >> S;
    for (int i = 0; i < S; i++)
    {
        cin >> P1 >> P2;
        if (P1 == spos || P2 == spos)
        {
            if (abs(P1 - spos) != 0)
            {
                if (P1 == 1)
                {
                    X++;
                }
                else if (P1 == 2)
                {
                    Y++;
                }
                else
                {
                    Z++;
                }
                spos = P1;
            }
            else
            {
                if (P2 == 1)
                {
                    X++;
                }
                else if (P2 == 2)
                {
                    Y++;
                }
                else
                {
                    Z++;
                }
                spos = P2;
            }
        }
        else{
            if(spos == 1){
                X++;
            }
            else if(spos == 2){
                Y++;
            }
            else{
                Z++;
            }
        }
    }

    cout << X << " " << Y << " " << Z << endl;
}