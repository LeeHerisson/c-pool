#include <stdio.h>

int main(void) {
  /*
  int input;

  if (scanf("%d", &input) != 1) {
    printf("Error input\n");
    return 1;
  }

  if (input % 2 == 0) {
    if (input > 0) {
      printf("even positive\n");
    } else if (input < 0) {
      printf("even negative\n");
    } else {
      printf("even zero\n");
    }
  } else {
    if (input > 0) {
      printf("odd positive\n");
    } else if (input < 0) {
      printf("odd negative\n");
    }
  }
  */

  /*
  int input_s;
  if (scanf("%d", &input_s) != 1 || input_s < 0) {
    printf("Error input\n");
    return 1;
  }

  int h = input_s / 3600;
  int m = input_s % 3600 / 60;
  int s = input_s % 60;

  printf("%02d:%02d:%02d\n", h, m, s);
  */

  /*
  int input;

  if (scanf("%d", &input) != 1 || input < 100 || input > 999) {
    printf("Error input\n");
    return 1;
  }

  int sum_of_digit = 0;
  int reverse = 0;

  int place_value = 100;

  while (input != 0) {
    sum_of_digit += input % 10;
    reverse += (input % 10) * place_value;

    place_value /= 10;
    input /= 10;
  }

  printf("%d %d\n", sum_of_digit, reverse);
  */

  /*
  int input_year;

  if (scanf("%d", &input_year) != 1) {
    printf("Error input\n");
    return 1;
  }

  if ((input_year % 4 == 0 && input_year % 100 != 0) || input_year % 400 == 0) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  */

  /*
  int n1, n2, n3;

  if (scanf("%d %d %d", &n1, &n2, &n3) != 3) {
    printf("Error input\n");
    return 1;
  }

  if (n1 >= n2 && n1 >= n3) {
    printf("%d\n", n1);
  } else if (n2 >= n1 && n2 >= n3) {
    printf("%d\n", n2);
  } else {
    printf("%d\n", n3);
  }

  (n1 >= n2 && n1 >= n3)   ? printf("%d\n", n1)
  : (n2 >= n1 && n2 >= n3) ? printf("%d\n", n2)
                           : printf("%d\n", n3);
  */

  /*
  int n1, n2, result;
  char operator;

  if (scanf("%d %c %d", &n1, &operator, &n2) != 3) {
    printf("Error input\n");
    return 1;
  }

  switch (operator) {
  case '+':
    result = n1 + n2;
    printf("%d\n", result);
    break;
  case '-':
    result = n1 - n2;
    printf("%d\n", result);
    break;
  case '*':
    result = n1 * n2;
    printf("%d\n", result);
    break;
  case '/':
  case '%':
    if (n2 == 0) {
      printf("Error: division by zero\n");
      return 1;
    }
    result = operator == '%' ? n1 % n2 : n1 / n2;
    printf("%d\n", result);
    break;
  default:
    printf("Error: unknown operator\n");
    return 1;
  }
  */

  /*
  int input_day;

  if (scanf("%d", &input_day) != 1 || input_day < 1 || input_day > 7) {
    printf("Error input\n");
    return 1;
  }

  switch (input_day) {
  case 1:
    printf("Monday\n");
    break;
  case 2:
    printf("Tuesday\n");
    break;
  case 3:
    printf("Wednesday\n");
    break;
  case 4:
    printf("Thursday\n");
    break;
  case 5:
    printf("Friday\n");
    break;
  case 6:
  case 7:
    printf("%s (weekend)\n", input_day == 6 ? "Saturday" : "Sunday");
    break;
  }
  */

  /*
  int month, year;

  if (scanf("%d %d", &month, &year) != 2) {
    printf("Error input\n");
    return 1;
  }

  switch (month) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    printf("31\n");
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    printf("30\n");
    break;
  case 2:
    printf("%d\n",
           (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ? 29 : 28);
    break;
  default:
    printf("Error input\n");
    return 1;
  }
  */

  /*
  int a, b, c;

  if (scanf("%d %d %d", &a, &b, &c) != 3) {
    printf("Error input\n");
    return 1;
  }

  if (a <= 0 || b <= 0 || c <= 0 || a <= c - b || a <= b - c || b <= a - c) {
    printf("not a triangle\n");
    return 1;
  }

  if (a == b && b == c) {
    printf("equilateral\n");
  } else if (a == b || b == c || a == c) {
    printf("isosceles\n");
  } else {
    printf("scalene\n");
  }
  */

  /*
  double input, discount = 0.0;

  if (scanf("%lf", &input) != 1 || input <= 0) {
    printf("Error input\n");
    return 1;
  }

  if (input >= 10000) {
    discount = input / 10;
    input -= discount;
    printf("10%% %.2lf %.2lf\n", discount, input);
  } else if (input >= 5000) {
    discount = input / 20;
    input -= discount;
    printf("5%% %.2lf %.2lf\n", discount, input);
  } else {
    printf("0%% %.2lf %.2lf\n", discount, input);
  }
  */

  /*
  int result = 0;
  int n;

start:

  if (scanf("%d", &n) != 1) {
    printf("Error input\n");
    return 1;
  }
  result += n;

  if (n == 0) {
    printf("%d\n", result);
    return 0;
  } else {
    goto start;
  }
  */

  return 0;
}
