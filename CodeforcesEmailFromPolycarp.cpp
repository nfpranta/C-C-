#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,flag=1;
    scanf("%d",&t);
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        i=0;
        j=0;
        flag=1;
        while(i<str1.size() && j<str2.size())
        {
            int counter1=0, counter2=0;
            if(str1[i]!=str2[j])
            {
                flag=0;
                break;
            }
            while(i+1<str1.size() && str1[i]==str1[i+1])
            {
                i++;
                counter1++;
            }
            while(j+1<str2.size() && str2[j]==str2[j+1])
            {
                j++;
                counter2++;
            }
            if(counter1>counter2)
            {
                flag=0;
                break;
            }
            ++i;
            ++j;
        }
        if(i!=str1.size() || j!=str2.size())
        {
            flag=0;
        }
        if(flag==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
