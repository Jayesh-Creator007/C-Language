#include <stdio.h>
#include <stdbool.h>
int main()
{
  // My First program in C language

  printf("Hello \n");
  printf("world");

  // Variable examples




  
  // int - can be use to store numbers without decimal
  int marks = 85;
  int total = 100;

  printf("You got \n %d/%d", marks, total);

  // float - can be use to store numbers with decimal
  float gpa = 3.7;
  float price = 50.27;
  printf("you got %f gpa\n", gpa);
  printf("you have to pay %f  ", price);

  // double - can be use to store numbers with precision
  double pi = 3.14159265358979;

  printf("%.15lf", pi);

  // char - can be use to store character like $,a,A,/,,,|,\,!
  char grade = 'A';
  char value1 = '/';
  printf("%c\n", grade);
  printf("You can use %c to comment data in C language", value1);

  // bool- can be use to store true or false
  bool isOnline = true;
  printf("%d", isOnline);

  // char name[]- can be use to store anyname without space
  char name[] = "Jayesh";
  char language[] = "C language";
  printf("Hello my name is %s\n", name);
  printf("I am learning %s\n", language);

  return 0;
}