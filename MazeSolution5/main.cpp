#include <iostream>
#include <Windows.h>
using namespace std;
//Copyright Mohammad Reza Baghbani 2020  
//https://github.com/baghban71
//https://www.instagram.com/mrbaghbani92
int main()
{
    char naghshe[20][20]=
    {
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','#'},
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','#'},
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','#'},
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','#'},
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','.','.','#','#','#'},
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','#','#','#'},
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','#','#','#'},
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','#','#','#'},
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','.','#','#','#','#','#'},
        {'#','#','#','#','#','#','#','#','.','.','.','.','.','.','.','#','#','#','#','#'},
        {'#','#','#','#','#','#','#','#','.','#','#','#','#','#','#','#','#','#','#','#'},
        {'#','#','#','#','.','.','.','.','.','#','#','#','#','#','#','#','#','#','#','#'},
        {'#','#','#','#','#','#','#','#','.','#','#','#','#','#','#','#','#','#','#','#'},
        {'#','#','#','#','#','#','#','#','.','#','#','#','#','#','#','#','#','#','#','#'},
        {'#','#','#','#','#','#','#','#','.','#','#','#','#','#','#','#','#','#','#','#'},
        {'#','#','#','#','#','#','#','#','.','#','#','#','#','#','#','#','#','#','#','#'},
        {'#','#','#','#','#','#','#','#','.','#','#','#','#','#','#','#','#','#','#','#'},
        {'#','#','#','#','#','#','#','#','.','#','#','#','#','#','#','#','#','#','#','#'},
        {'.','.','.','.','.','.','.','.','.','#','#','#','#','#','#','#','#','#','#','#'},
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}
    };
    int a[]= {0,16,0,0,0};
    int past[]= {0,0};
    while(a[4]<35)
    {
        past[0]=a[0];
        past[1]=a[1];
        a[4]++;
        if(naghshe[a[0]+1][a[1]]=='.')
            a[0]++;
        else if(naghshe[a[0]][a[1]-1]=='.')
            a[1]--;
        else if(naghshe[a[0]-1][a[1]]=='.')
            a[0]--;
        else if(naghshe[a[0]][a[1]+1]=='.')
            a[1]++;
        if( past[0]!=a[0] || past[1]!=a[1])
            for(a[2]=0; a[2]<20; a[2]++)
            {
                for(a[3]=0; a[3]<20; a[3]++)
                    if( a[0]==a[2] &&  a[1]==a[3])
                        cout << '*' ;
                    else
                        cout << naghshe[a[2]][a[3]] ;
                cout << endl;
            }
        Sleep(500);
        cout << endl;
        if(a[0]<=0)
            break;
        if(a[0]>=19)
            break;
        if(a[1]>=19)
            break;
        if(a[1]<=0)
            break;

    }
    cin >> a[4];
}
