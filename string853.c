#include<stdio.h>
#include<string.h>
void get_next(String T,int* next)
    {
        int i=0,j=-1;
        next[0]=-1;
        while(i<T.length-1)
        {
            if(j==-1||T.ch[i]==T.ch[j])
            {
                i++;
                j++;
                next[i]=j;
            }
            else
                j=next[j];
        }
    }
typedef struct
{
    char ch[100];
    int length;
}String;
int main()
{
    String T;
    int next[100];
    get_next(T,next);
    scanf("%s",T.ch);
    scanf("%d",&T.length);
    strlen(T.ch);
    printf("%d\n",T.length);
    printf("%s\n",T.ch);
    for(int i=0;i<T.length;i++)
    {
        printf("%d ",next[i]);
    }
    return 0;
}