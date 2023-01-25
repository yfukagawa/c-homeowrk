#include <stdio.h>

int main() {
  printf("\nHello World!");
  printf("\nI am learning C.\n");
  printf("\nline1\nline2\nline3\n\n");
  return 0;
}

/* 
Line 1: #include <stdio.h> is a header file library that lets us work with input and output functions, such as printf() (used in line 4). Header files add functionality to C programs.
Line 2: A blank line. C ignores white space. But we use it to make the code more readable.
Line 3: Another thing that always appear in a C program, is main(). This is called a function. Any code inside its curly brackets {} will be executed.
Line 4: printf() is a function used to output/print text to the screen. In our example it will output "Hello World".
Note that: Every C statement ends with a semicolon ;
Note: The body of int main() could also been written as:
int main(){printf("Hello World!");return 0;}
The compiler ignores white spaces. However, multiple lines makes the code more readable.
Line 5: return 0 ends the main() function.
Line 6: Do not forget to add the closing curly bracket } to actually end the main function. 
*/