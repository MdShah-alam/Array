//#include<stdio.h>
//
//int main()
//{
//    char str[100];
//    scanf("%s",str);
//    int count[26]= {0};
//    for(int i=0; i<strlen(str); i++)
//    {
//        char ch=str[i];
//        count[ch-'a']++;
//    }
//    for(char ch='a'; ch>='z'; ch++)
//    {
//        if(count[ch-'a']>0)
//        {
//            printf("ch -> %c  count->%d\n",ch,count[ch-'a']);
//        }
//    }
//}


#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],ch;
    fgets(str,100,stdin);
    int count[26]= {0};
    for(int i=0; i<strlen(str); i++)
    {
        ch=str[i];
        count[ch-'a']++;
    }
    for(ch='a'; ch<='z'; ch++)
    {
        if(count[ch-'a']>0)
        {
            printf("ch->%c  count->%d\n",ch,count[ch-'a']);
        }
    }
}
