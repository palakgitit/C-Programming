// alphabet skipper 
#include <stdio.h>

int main()
{
   char CH = 'a';
do
{
   printf ( "%c\t ", CH);
   CH+=4;
}
while (CH <='z');
}