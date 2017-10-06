#include <stdio.h>
int main(void)
{
   int a = 1, b = 2, c = 0;

__asm__ ( ".intel_syntax noprefix\n\t"
 "mov eax, %1\n\t"
 "mov %0, eax\n\t" /* ассемблерная вставка */
 : "=r"(b) /* выходные операнды */
 : "r"(a) /* входные операнды */
 : "%eax" /* разрушаемые регистры */
);


   printf("%x + %x = %x\n", a, b, c);

   return 0;
}