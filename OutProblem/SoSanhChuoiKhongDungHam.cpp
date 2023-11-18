
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 255

int myStrcmp(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	fgets(s1,MAX,stdin);
	fgets(s2,MAX,stdin);
	int kt = myStrcmp(s1, s2);
	cout << kt << endl;
	return 0;
}

int myStrcmp(char s1[],char s2[])
{
    int i = 0;
    int j = 0;
    int L_1 = 0, L_2 = 0;
    while (s1[i]!='\0')
    {
        L_1++;
        i++;
    }
    while (s2[j]!='\0')
    {
        L_2++;
        j++;
    }
    s1[L_1-1]='\0';
    s2[L_2-1]='\0';
    if (L_1 > L_2)
        return 1;
    if (L_1 < L_2)
        return -1;
    if (L_1 == L_2)
    {
        for (int i = 0; i < L_1-1;i++)
            {
                if (s1[i] > s2[i])
                    return 1;
                if (s1[i] < s2[i])
                    return -1;
            }
    }
    return 0;
}