# include <stdio.h> 
void main() 
{ 
 int i, j, k; 
 /* 变量 i 从 0 到 4，表示所画菱形图的第一至第五行 */ 
 for(i = 0; i <= 4; i++) 
 { 
 /* 当行数为 i 时，空格数是 i 的函数，为 4-i 个 */ 
 for(j = 0; j <= 3-i; j++) 
 printf(" ");
 /* 星号数也是 i 的函数，为 2i+1 个 */ 
 for(k = 0; k <= 2*i; k++) 
 printf("*"); 
 printf("\n"); 
 } 
 /* 变量 i 从 0 到 3，表示所画菱形图的第六至第九行 */ 
 for(i = 0; i <= 3; i++) 
 { 
 /* 当行数为 i 时，空格数是 i 的函数，此时为 i 个 */ 
 for(j = 0; j <= i; j++) 
 printf(" "); 
 /* 星号数也是 i 的函数，此时为 7-2i 个 */ 
 for(k = 0; k <= 6-2*i; k++) 
 printf("*"); 
 printf("\n"); 
 } 
} 
