#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
/*
project calculater
*/
void addition();
void subtraction();
void multiplication();
void division();
void squaring();
void squareRoot();
void evenOrNot();
void power();
void tableOfContents();

int main()
{
  int operation;
  do
  {
    cout << "Perss any dey to start the profram! ";
    getch();
    cout << "Select the operation using a number: ";
    cout << "\n1- Addition"
            "\n2- Subtraction"
            "\n3- Multiplicatoin"
            "\n4- Division"
            "\n5- Squaring"
            "\n6- Square Root"
            "\n7- Even or not"
            "\n8- Power"
            "\n9- Table Of Contents"
            "\n10- Exit\n";
    cout << "Choose a number: ";
    cin >> operation;

    switch (operation)
    {
    case 1:
      addition();
      break;
    case 2:
      subtraction();
      break;
    case 3:
      multiplication();
      break;
    case 4:
      division();
      break;
    case 5:
      squaring();
      break;
    case 6:
      squareRoot();
      break;
    case 7:
      evenOrNot();
      break;
    case 8:
      power();
      break;
    case 9:
      tableOfContents();
      break;
    case 10:
      exit(0);
    }
  } while (operation != 10);
  
  return 0;
}

void addition()
{
  int numOfNumbers;
  int num;
  int result = 0;
  cout << "enter the number of numbers: ";
  cin >> numOfNumbers;
  for (int i = 1; i <= numOfNumbers; i++)
  {
    cout << "enter the number " << i << ": ";
    cin >> num;
    result += num;
  }
  cout << "result is: " << result << endl;
}

void subtraction()
{
  float num1;
  float num2;
  float result;
  cout << "enter the tow numbers: \n";
  cin >> num1 >> num2;
  result = num1 - num2;
  cout << "tne result: " <<  result << endl;
}

void multiplication()
{
  int numOfNumbers;
  int num;
  int result = 1;
  cout << "enter the number of numbers: ";
  cin >> numOfNumbers;
  for (int i = 1; i <= numOfNumbers; i++)
  {
    cout << "enter the number " << i << ": ";
    cin >> num;
    result *= num;
  }
  cout << "result is: " << result << endl;
}

void division()
{
  float num1;
  float num2;
  float result;
  cout << "enter the tow numbers: \n";
  cin >> num1 >> num2;
  result = num1 / num2;
  cout << "tne result: " <<  result << endl;
}

void squaring()
{
  int num;
  cout << "enter the number: ";
  cin >> num;
  num *= num;
  cout << "the result: " << num << endl;
}

void squareRoot()
{
  int num;
  cout << "enter the number: ";
  cin >> num;
  num = sqrt(num);
  cout << "the result: " << num << endl;
}

void evenOrNot()
{
  int num;
  cout << "enter the number: ";
  cin >> num;
  if (num % 2 == 0)
  {
    cout << "the number is even";
  }
  else
  {
    cout << "the number is not even";
  }
}

void power()
{
  int num1;
  int num2;
  cout << "enter the first num: ";
  cin >> num1;
  cout << "enter the power num: ";
  cin >> num2;
  cout << pow(num1, num2) << endl;
}

void tableOfContents()
{
  int num;
  int size;
  int num2;
  string text;
  do
  {
  cout << "enter the type of data: ";
  cout << "\n1- Integer"
          "\n2- String"
          "\n3- Exit" << endl;
  cout << "choose a number: ";
  cin >> num;
  if (num != 3)
  {
  cout << "enter numbers the date ";
  cin >> size;
  }

  if (num == 1)
  {
    int nums[size];
    for (int i = 0; i < size; i++)
    {
      cout << "enter the number " << i + 1 << " : ";
      cin >> num2;
      nums [i] = num2;
    }
    for (int j = 0; j < size; j++)
    {
      cout << "- " <<nums[j] << endl;
    }
  }

  else if (num == 2)
  {
    string texts[size];
    for (int k = 0; k < size; k++)
    {
      cout << "enter the text " << k + 1 << " : ";
      cin >> text;
      texts [k] = text;
    }
    for (int l = 0; l < size; l++)
    {
      cout << "- " << texts[l] << endl;
    }
  }

  else
  {
    main();
  }
  } while (num != 3);
}
