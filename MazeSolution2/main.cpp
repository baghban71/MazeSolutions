#include <iostream>
using namespace std;
//Copyright Mohammad Reza Baghbani 2020  
//https://github.com/baghban71
//https://www.instagram.com/mrbaghbani92
int main()
{
    bool returning = false;
    int posi=8,posj=0,lasti,lastj,currnti,currntj;
    int PointMax = -1;
    int changePointi[200]= {0};
    int changePointj[200]= {0};
    int currentChengedPos[200]= {0};
    char maze [20][20]
    {
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
        {'#','#','.','#','#','#','#','#','#','#','#','.','.','.','.','.','.','#','#','#'},
        {'#','#','.','#','#','#','.','.','.','.','.','.','#','#','#','#','.','.','.','.'},
        {'#','#','.','#','#','#','.','#','#','#','#','#','#','#','#','#','#','#','#','#'},
        {'#','#','.','.','.','.','.','.','.','.','.','.','.','.','#','#','#','#','#','#'},
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','#','#','#','#'},
        {'#','#','#','.','.','.','.','.','#','#','#','#','#','.','#','#','#','#','#','#'},
        {'#','#','#','.','#','#','#','.','#','#','#','#','#','.','#','#','#','#','#','#'},
        {'.','.','.','.','#','#','#','.','#','#','#','#','#','.','#','#','#','#','#','#'},
        {'#','#','#','.','#','#','#','.','#','#','#','#','#','.','.','.','.','#','#','#'},
        {'#','#','#','.','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','#'},
        {'#','#','#','.','.','.','.','#','#','#','.','.','.','.','.','.','.','#','#','#'},
        {'#','#','#','#','#','#','.','#','#','#','.','#','#','#','#','#','#','#','#','#'},
        {'#','#','#','.','.','.','.','.','#','.','.','#','#','#','#','#','#','#','#','#'},
        {'#','#','#','.','#','#','#','#','#','.','#','#','#','#','#','#','#','#','#','#'},
        {'#','#','#','.','.','.','.','.','.','.','.','.','.','.','#','#','#','#','#','#'},
        {'#','#','#','#','#','#','#','.','#','#','#','#','#','.','#','#','#','#','#','#'},
        {'#','#','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','#','#','#'},
        {'#','#','.','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}
    };

    int thread[20][20]
    {
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}

    };
    if(maze[posi-1][posj]=='.' && thread[posi-1][posj]==0)
    {
        lasti = posi;
        lastj = posj;
        posi--;
        point[posi][posj] = 1;
        returning = false;
    }
    else if(maze[posi][posj-1]=='.' && thread[posi][posj-1]==0)
    {
        lasti = posi;
        lastj = posj;
        posj--;
        point[posi][posj] = 1;
        returning = false;
    }
    else if(maze[posi][posj+1]=='.' && thread[posi][posj+1]==0)
    {
        lasti = posi;
        lastj = posj;
        posj++;
        point[posi][posj] = 1;
        returning = false;
    }
    else if(maze[posi+1][posj]=='.' && thread[posi+1][posj]==0)
    {
        lasti = posi;
        lastj = posj;
        posi++;
        point[posi][posj] = 1;
        returning = false;
    }
    if(posi != lasti-1)
    {
        PointMax++;
        changePointi[ PointMax ]= lasti;
        changePointj[ PointMax ]= lastj;
        currentChengedPos[  PointMax ]= {0};

    }
    if(returning)
    {



    }
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<20; j++)
            cout << maze[i][j] ;
        cout << endl;
    }
    return 0;
}
