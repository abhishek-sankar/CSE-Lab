#include<stdio.h>
#include<conio.h>
//venda bhagam comment allandu aakuka
int string_ln(char*);
 
int string_ln(char*p) /* p=&str[0] */
{
   int count = 0;
   while (*p != '\0') {
      count++;
      p++;
   }
   return count;
}

void concat(char s1[], char s2[]) {
   int i, j;
 
   i = strlen(s1);
 
   for (j = 0; s2[j] != '\0'; i++, j++) {
      s1[i] = s2[j];
   }
 
   s1[i] = '\0';
}

int search(char src[], char str[]) {
   int i, j, firstOcc;
   i = 0, j = 0;
 
   while (src[i] != '\0') {
 
      while (src[i] != str[0] && src[i] != '\0')
         i++;
 
      if (src[i] == '\0')
         return (-1);
 
      firstOcc = i;
 
      while (src[i] == str[j] && src[i] != '\0' && str[j] != '\0') {
         i++;
         j++;
      }
 
      if (str[j] == '\0')
         return (firstOcc);
      if (src[i] == '\0')
         return (-1);
 
      i = firstOcc + 1;
      j = 0;
   }
}

void main() {
   /*for str length
   char str[20];
   int length;
   clrscr();
   printf("\nEnter any string : ");
   gets(str);
   length = string_ln(str);
   printf("The length of the given string %s is : %d", str, length);
   */

   /*for concat
   char s1[50], s2[30];
 
   printf("\nEnter String 1 :");
   gets(s1);
   printf("\nEnter String 2 :");
   gets(s2);
 
   concat(s1, s2);
   printf("nConcated string is :%s", s1);
   */
   /*for copy
   char s1[100], s2[100];
   int i;
 
   printf("\nEnter the string :");
   gets(s1);
 
   i = 0;
   while (s1[i] != '\0') {
      s2[i] = s1[i];
      i++;
   }
 
   s2[i] = '\0';
   printf("\nCopied String is %s ", s2);
   */

   /*for string comparison
   char str1[30], str2[30];
   int i;
 
   printf("\nEnter two strings :");
   gets(str1);
   gets(str2);
 
   i = 0;
   while (str1[i] == str2[i] && str1[i] != '\0')
      i++;
   if (str1[i] > str2[i])
      printf("str1 > str2");
   else if (str1[i] < str2[i])
      printf("str1 < str2");
   else
      printf("str1 = str2");
   */
   /*for substring search
   int loc;
 
   char source[] = "maharashtra";
   char target[] = "sht";
 
   loc = search(source, target);
 
   if (loc == -1)
      printf("\nNot found");
   else
      printf("\nFound at location %d", loc + 1);
   */

   /*for replacing sub
    will update the rest later
   */
   


   getch();
}