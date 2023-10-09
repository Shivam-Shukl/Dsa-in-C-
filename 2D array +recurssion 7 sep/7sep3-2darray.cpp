#include<iostream>
using namespace std;

void fun(int **a ,int row,int col)
{ 
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    a[i][j]=i+j;
}
void print(int **a ,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
            
        }
        cout<<endl;
    }
}



int main(){

    int n,m;
    cin>>n>>m;
    int **p= new int*[m];
    for(int i=0;i<n;i++){
        p[i]=new int[m];
    }
    fun(p,n,m);
    print(p,n,m);
    
    
    return 0;
}
/*
#include<iostream>
using namespace std;

void fun(int **a, int row, int col)
{ 
    // Allocate memory for rows
    for(int i = 0; i < row; i++)
    {
        a[i] = new int[col];
    }

    // Initialize the array
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            a[i][j] = i + j;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    int **p = new int*[n];
    
    fun(p, n, m);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for(int i = 0; i < n; i++)
    {
        delete[] p[i];
    }
    delete[] p;

    return 0;
}

*/