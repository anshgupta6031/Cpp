//  maze path problem.............
//  there is a maze, we are at coordinate (1,1) and we have to go to (x,y), find out the no. of ways this can be done if you can move 
//  only such that your x or y coordinate increases.

//  solve using recursion.......



#include <bits/stdc++.h>
using namespace std;

int maze (int sr, int sc, int er, int ec){      //  sr->starting row, sc->starting column, er->ending row, ec->ending column.
    if (sr>er || sc>ec) return 0;
    if (sr==er && sc==ec) return 1;

    int right = maze(sr,sc+1,er,ec);
    int down = maze(sr+1,sc,er,ec);

    return right + down;
}

void print (int sr, int sc, int er, int ec, string s){      //  sr->starting row, sc->starting column, er->ending row, ec->ending column.
    if (sr>er || sc>ec) return;

    if (sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }

    
    print(sr,sc+1,er,ec, s + 'R');

    print(sr+1,sc,er,ec, s + 'D');
}


int main(){

    int x, y;
    cout<<"Enter the coordinates of the maze where you want to reach : ";
    cin>>x>>y;

    cout<<maze (1,1, x,y)<<endl<<endl;
    print(1,1, x,y , "");

    return 0;
}