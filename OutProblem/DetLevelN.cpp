#include <iostream>
#include <cmath>

using namespace std;

void InputMatrix(int&,int array[][500]);   // Ham nhap ma tran
int DetLevel3(int n,int a[][500]);   // Tinh thu dinh thuc cap 3
int DetLevel2(int n,int a[][500]);  // Tinh dinh thuc cap 2
void BuildMaTrix(int n_CoreMatrix,int CoreMatrix[][500],int hang,int cot,int NewMatrix[][500],int n_NewMatrix);
void OutputMatrix(int n,int array[][500]);   // Xuat ma tran
int DetLevelN(int n,int a[][500]);   // Tinh dinh thuc cap N


int main()
{
    int n,A[500][500];
    InputMatrix(n,A);
    cout << DetLevelN(n,A);
    return 0;
}

void InputMatrix(int &n,int a[][500])
{
    cin >> n;
    for (int i = 0; i < n;i++)
        for (int j = 0; j < n;j++)
            cin >> a[i][j];
}

int DetLevelN(int n,int a[][500])
{
    int hang = 0;
    int T = 0;
    if (n>3)
        for (int cot = 0; cot < n;cot++)
        {
            int b[500][500];
            int m = n-1;
            BuildMaTrix(n,a,0,cot,b,m);
            //cout << " ---------------- " << endl;
            //OutputMatrix(m,b);
            int k = pow(-1,hang+cot);
            T+=k*a[hang][cot]*DetLevelN(m,b);
        }
    if (n==3)
        T += DetLevel3(n,a);
    return T;
}

int DetLevel3(int n,int a[][500])
{
    int hang = 0;
    int T = 0;
    for (int cot = 0; cot < n;cot++)
    {
        int b[500][500];
        int m = n-1;
    //    cout << endl;
    //    OutputMatrix(n,a);
        BuildMaTrix(n,a,0,cot,b,m);
    //    OutputMatrix(m,b);
    //    cout << a[hang][cot]*DetLevel2(m,b) << endl;
        int k = pow(-1,hang+cot);
        T+=k*a[hang][cot]*DetLevel2(m,b);
    }
    return T;
}

int DetLevel2(int n,int a[][500])
{
    return (a[0][0]*a[1][1])-(a[1][0]*a[0][1]);
}

void BuildMaTrix(int n_CoreMatrix,int CoreMatrix[][500],int hang,int cot,int NewMatrix[][500],int n_NewMatrix)
{
    int tempArray[500],k=0;
    for (int i = 0; i < n_CoreMatrix;i++)
        for (int j = 0; j < n_CoreMatrix;j++)
        tempArray[k++]=CoreMatrix[i][j];
    int SmallArray[500],n_SmallArray=0;
    for (int i = 0; i < k;i++)
        if (i/n_CoreMatrix!=hang && i%n_CoreMatrix!=cot)
            SmallArray[n_SmallArray++]=tempArray[i];
    int q=0;
    for (int i = 0; i < n_NewMatrix;i++)
        for (int j = 0; j < n_NewMatrix;j++)
            NewMatrix[i][j]=SmallArray[q++];
 //   OutputMatrix(n_NewMatrix,NewMatrix);
  // cout << endl;
}

void OutputMatrix(int n,int array[][500])
{
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n;j++)
            cout << array[i][j] << " ";
        cout << endl;
    }
}

/*test case:
6
1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30
31 32 33 34 35 36

6
5 21 35 4 5 6
7 8 9 7 11 12
13 14 1 16 17 48
19 20 21 22 23 24
25 8 27 28 9 30
13 32 33 34 17 25
*/