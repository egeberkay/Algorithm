#include <stdio.h>
int main(){
	
int a = 10;
int* ptr;
int** ptr2;
int*** ptr3;
ptr = &a;

printf("%d\n",a);
printf("%p\n",&a);
printf("%p\n",ptr);
printf("%d\n",*ptr);	
printf("%p\n",&ptr);
printf("--------------------------------\n");

ptr2 = &ptr;
ptr3 = &ptr2;
printf("%p\n",ptr2);
printf("%p\n",*ptr2);
printf("%d\n",**ptr2);

printf("%p\n",ptr3);
printf("%p\n",*ptr3);
printf("%p\n",**ptr3);
printf("%d\n",***ptr3);
printf("%p\n",&ptr3);

return 0;

}
