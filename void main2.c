void main()
{
/*'\n'换行*/
printf("How are you?\n");
printf("I am fine.\n\n");
/*横向跳格符'\t',使光标跳到下一个输出区域*/
printf("How are you?\t");
printf("I am fine.\n\n");
/*退格符‘\b’*/
printf("How are you?\n");
printf(" \bI am fine.\n\n");
/*'\r'转义符使当前输出位置回到本行开头*/
printf(" I am fine.");
printf("\rHow are your?\n\n");
}