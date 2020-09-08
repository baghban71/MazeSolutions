#include <iostream>
#include <Windows.h>
#include <stdlib.h>
//Sleep(500);
//system("cls");
//Copyright Mohammad Reza Baghbani 2020  
//https://github.com/baghban71
//https://www.instagram.com/mrbaghbani92
using namespace std;
int main()
{
    int pi = 4,pj = 0;
    bool Move = true;
    char maze[10][10]=
    {{'0','0','0','0','0','0','0','0','0','0'},
    {'0','0','1','1','0','0','0','1','0','0'},
    {'0','0','0','1','0','0','0','1','1','1'},
    {'0','0','0','1','0','0','0','1','0','0'},
    {'1','1','1','1','1','1','0','1','0','0'},
    {'0','0','0','1','0','1','0','1','0','0'},
    {'0','0','0','1','0','1','1','1','0','0'},
    {'0','1','1','1','0','0','0','0','0','0'},
    {'0','1','0','0','0','0','0','0','0','0'},
    {'0','0','0','0','0','0','0','0','0','0'}};
    int point[10][10]=
    {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},

    };
    point[pi][pj] = 1;
    while(Move)
    {
        Move = false;
        if(maze[pi-1][pj]=='1' && point[pi-1][pj]==0)
        {
            pi-=1;
            point[pi][pj] = 1;
            Move = true;
        }
        else if(maze[pi][pj-1]=='1' && point[pi][pj-1]==0)
        {
            pj-=1;
            point[pi][pj] = 1;
            Move = true;
        }
        else if(maze[pi][pj+1]=='1' && point[pi][pj+1]==0)
        {
            pj+=1;
            point[pi][pj] = 1;
            Move = true;
        }
        else if(maze[pi+1][pj]=='1' && point[pi+1][pj]==0)
        {
            pi+=1;
            point[pi][pj] = 1;
            Move = true;
        }

        if(!Move)
        {
            point[pi][pj] = 2;
            if(maze[pi-1][pj]=='1' && point[pi-1][pj]==1)
            {
                pi-=1;
                if(!(maze[pi-1][pj]=='1' && point[pi-1][pj]==0))
                    point[pi][pj] = point[pi][pj];
                else if(!(maze[pi][pj-1]=='1' && point[pi][pj-1]==0))
                    point[pi][pj]=point[pi][pj];
                else if(!(maze[pi][pj+1]=='1' && point[pi][pj+1]==0))
                    point[pi][pj] = point[pi][pj];
                else if(!(maze[pi+1][pj]=='1' && point[pi+1][pj]==0))
                    point[pi][pj] = point[pi][pj];
                else
                    point[pi][pj] = 2;
                Move = true;
            }
            else if(maze[pi][pj-1]=='1' && point[pi][pj-1]==1)
            {
                pj-=1;
                if(!(maze[pi-1][pj]=='1' && point[pi-1][pj]==0))
                    point[pi][pj] = point[pi][pj];
                else if(!(maze[pi][pj-1]=='1' && point[pi][pj-1]==0))
                    point[pi][pj]=point[pi][pj];
                else if(!(maze[pi][pj+1]=='1' && point[pi][pj+1]==0))
                    point[pi][pj] = point[pi][pj];
                else if(!(maze[pi+1][pj]=='1' && point[pi+1][pj]==0))
                    point[pi][pj] = point[pi][pj];
                else
                    point[pi][pj] = 2;
                Move = true;
            }
            else if(maze[pi][pj+1]=='1' && point[pi][pj+1]==1)
            {
                pj+=1;
                if(!(maze[pi-1][pj]=='1' && point[pi-1][pj]==0))
                    point[pi][pj] = point[pi][pj];
                else if(!(maze[pi][pj-1]=='1' && point[pi][pj-1]==0))
                    point[pi][pj]=point[pi][pj];
                else if(!(maze[pi][pj+1]=='1' && point[pi][pj+1]==0))
                    point[pi][pj] = point[pi][pj];
                else if(!(maze[pi+1][pj]=='1' && point[pi+1][pj]==0))
                    point[pi][pj] = point[pi][pj];
                else
                    point[pi][pj] = 2;

                Move = true;
            }
            else if(maze[pi+1][pj]=='1' && point[pi+1][pj]==1)
            {
                pi+=1;
                if(!(maze[pi-1][pj]=='1' && point[pi-1][pj]==0))
                    point[pi][pj] = point[pi][pj];
                else if(!(maze[pi][pj-1]=='1' && point[pi][pj-1]==0))
                    point[pi][pj]=point[pi][pj];
                else if(!(maze[pi][pj+1]=='1' && point[pi][pj+1]==0))
                    point[pi][pj] = point[pi][pj];
                else if(!(maze[pi+1][pj]=='1' && point[pi+1][pj]==0))
                    point[pi][pj] = point[pi][pj];
                else
                    point[pi][pj] = 2;
                Move = true;
            }
        }
        if(pi<=0 || pi>=9 || pj>=9 || pj<=0)
            Move = false;

        for(int i=0; i<10; i++)
        {
            for(int j=0; j<10; j++)
                if(pi==i && pj==j)
                    cout << '*' ;
                else
                    cout << maze[i][j] ;
            cout << endl;
        }

        Sleep(500);

        if(Move)
            system("cls");
    }
    cin >> pi;
}
