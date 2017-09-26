#include<iostream>
using namespace std;

char * LongestPrefix(char **str , int l)
{
    int i, j;
    char *ptr = str[0];

    for( i = 0 ; str[0][i] ;i++)
        ;
    
    char *out = new char[i];
    
    for( i = 0; ;i++){
        for( j = 1; j < l ;j++)
            if(*ptr != str[j][i])
                break;
        if(j == l)
            out[i] = *ptr++;
        else
            break;
    }
    out[++i] = '\0' ;
    return out;
}

int main()
{
    char *str1[] = {"mano","manojk","manojku","ma"};
    char *str2[] = {"ab","abc","def","defgh","sha"};
    cout << LongestPrefix(str1 ,4)<<endl;
    cout << LongestPrefix(str2 ,5)<<endl;
    return 0;
}
