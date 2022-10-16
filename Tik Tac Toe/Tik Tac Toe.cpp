#include<iostream>
using namespace std;

char player = 'X';
char matrix [3][3]= {'1','2','3','4','5','6','7','8','9'};

//to draw
void draw()
{
    system("cls");
    cout<<"\tTic Tak Toe v1.0";
    cout<<endl;
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"\t";
        for(int j=0;j<3;j++)
        {
            cout<<"  "<<matrix[i][j]<<" ";
        }
        cout<<endl;    
    }
}

// To input player move
void input()
{
    int a;
    cout<<endl;
    cout<<"Enter Number : ";
    cin>>a;

    if(a==1)
    {
        if(matrix[0][0]== '1')
        {
            matrix[0][0]=player;
        }
        else
        {
            cout<<"This Field is Occupied";
            input();
        } 
    }
    else if(a==2)
    {
        if(matrix[0][1]== '2')
        {
            matrix[0][1]=player;
        }
        else
        {
            cout<<"This Field is Occupied";
            input();
        } 
    }
    else if(a==3)
    {
        if(matrix[0][2]== '3')
        {
            matrix[0][2]=player;
        }
        else
        {
            cout<<"This Field is Occupied";
            input();
        } 
    }
    else if(a==4)
    {
        if(matrix[1][0]== '4')
        {
            matrix[1][0]=player;
        }
        else
        {
            cout<<"This Field is Occupied";
            input();
        } 
    }
    else if(a==5)
    {
        if(matrix[1][1]== '5')
        {
            matrix[1][1]=player;
        }
        else
        {
            cout<<"This Field is Occupied";
            input();
        } 
    }
    else if(a==6)
    {
        if(matrix[1][2]== '6')
        {
            matrix[1][2]=player;
        }
        else
        {
            cout<<"This Field is Occupied";
            input();
        } 
    }
    else if(a==7)
    {
        if(matrix[2][0]== '7')
        {
            matrix[2][0]=player;
        }
        else
        {
            cout<<"This Field is Occupied";
            input();
        } 
    }
    else if(a==8)
    {
        if(matrix[2][1]== '8')
        {
            matrix[2][1]=player;
        }
        else
        {
            cout<<"This Field is Occupied";
            input();
        } 
    }
    else if(a==9)
    {
        if(matrix[2][2]== '9')
        {
            matrix[2][2]=player;
        }
        else
        {
            cout<<"This Field is Occupied";
            input();
        } 
    }    
}


//function to change player
void changeplayer()
{
    if(player=='X')
    {
        player='O';
        cout<<endl;
        cout<<"\t O turns";
        cout<<endl;
    }
    else
    {
        player='X';
        cout<<endl;
        cout<<"\t X Turns";
        cout<<endl;
    }
}

// win Function
char win()
{
    //  1st player
    if(matrix[0][0]== 'X' && matrix[0][1]== 'X' && matrix[0][2]== 'X')
        return 'X';
    if(matrix[1][0]== 'X' && matrix[1][1]== 'X' && matrix[1][2]== 'X')
        return 'X';
    if(matrix[2][0]== 'X' && matrix[2][1]== 'X' && matrix[2][2]== 'X')
        return 'X';

    if(matrix[0][0]== 'X' && matrix[1][0]== 'X' && matrix[2][0]== 'X')
        return 'X';
    if(matrix[0][1]== 'X' && matrix[1][1]== 'X' && matrix[2][1]== 'X')
        return 'X';
    if(matrix[0][2]== 'X' && matrix[1][2]== 'X' && matrix[2][2]== 'X')
        return 'X';

    if(matrix[0][0]== 'X' && matrix[1][1]== 'X' && matrix[2][2]== 'X')
        return 'X';
    if(matrix[2][0]== 'X' && matrix[1][1]== 'X' && matrix[0][2]== 'X')
        return 'X';
    
    // 2nd player
    if(matrix[0][0]== 'O' && matrix[0][1]== 'O' && matrix[0][2]== 'O')                                                          
        return 'O';
    if(matrix[1][0]== 'O' && matrix[1][1]== 'O' && matrix[1][2]== 'O')
        return 'O';
    if(matrix[2][0]== 'O' && matrix[2][1]== 'O' && matrix[2][2]== 'O')
        return 'O';

    if(matrix[0][0]== 'O' && matrix[1][0]== 'O' && matrix[2][0]== 'O')
        return 'O';
    if(matrix[0][1]== 'O' && matrix[1][1]== 'O' && matrix[2][1]== 'O')
        return 'O';
    if(matrix[0][2]== 'O' && matrix[1][2]== 'O' && matrix[2][2]== 'O')
        return 'O';

    if(matrix[0][0]== 'O' && matrix[1][1]== 'O' && matrix[2][2]== 'O')
        return 'O';
    if(matrix[2][0]== 'O' && matrix[1][1]== 'O' && matrix[0][2]== 'O')
        return 'O';

    return '/';    
}

// main Function
int main()   
{
    int n=1;
    draw();
    cout<<endl;
    cout<<"\tX is First To Move";
    cout<<endl;
    while(1)
    {
        n++;
        input();
        draw();
        if(win()=='X')
        {
            cout<<endl;
            cout<<"X Wins!!"<<endl;;
            break;
        }
        else if(win()=='O')
        {
            cout<<endl;
            cout<<"O Wins!!"<<endl;
            break;
        }
        else if(win()== '/' && n== 9)
        {
            cout<<endl;
            cout<<"It's a Draw";
            cout<<endl;
            break;
        }
        changeplayer();
    }
    system("pause");
    return 0;
}