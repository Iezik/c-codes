/**
 * main - An array is not a pointer, but...
 * But, you can still use the name of the array in your code, and its value will be… the address of the first element of the array. Wait… WAT?
 *
 * Return: Always 0.
 */
int main(void)
{
   int a[98]; /* array */

   printf("a: %p\n", a);
   printf("&a[0]: %p\n", &a[0]);
   return (0);
}
