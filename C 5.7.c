
#include <stdio.h> 
#include <string.h> 
int main() 
{ 
    char str[10], temp[10] = {""}; 
    int i; 
    for (i = 0; i < 4; i++) 
    { 
        gets(str); 
        if(strcmp(str, temp) > 0)  
            strcpy(temp, str);  
    } 
    puts(temp); 
    return 0; 
}