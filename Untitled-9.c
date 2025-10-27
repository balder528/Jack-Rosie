 void main()
 {
 int a = 5;
 char c = 'a';
 float f = 5.3;
 double m = 13.65;
 double result;

 printf("a + c = %d\n",a+c);
 printf("a + c = %c\n", a + c);
 printf("f + m = %f\n", f + m);
 /*不同类型数据间进行运算并输出结果*/
 printf("a + m = %f\n", a + m);
 printf("c + f = %f\n", c + f);
 /*四种不同类型变量混合运算*/
 result = a + c * (f + m);
 printf("double = %f\n",result);
 }