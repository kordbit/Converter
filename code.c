#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ��������� ��� �������� ���������� � ������ ������ */
 main()
 {
     float fahr,celsius,kelvin,x;
     char y;
     printf(" Type a temp "); // ������� ��������� � �������� ������ �������� �����������
     scanf("%f%s",&x, &y); //��������� ��������
          if (y == 'C')  //���� ��������� ����������� � ����� �������, �� ������� �������� ��� �������� � ����������, � ������� �� ������
             {fahr = x*1.8+32;
              kelvin = x+273.15;
              printf("%g", fahr);
              printf(" F\n");
              printf("%g", kelvin);
              printf(" K\n");
             }
             else if (y == 'K')  //���� ��������� ����������� � ����� ��������, �� ������� �������� ��� ������� � ����������, � ������� �� ������
             {celsius=x-273.15;
              fahr = celsius*1.8+32;
              printf("%g", fahr);
              printf(" F\n");
              printf("%g", celsius);
              printf(" C\n");
             }
             else if (y == 'F')  //���� ��������� ����������� � ����� ����������, �� ������� �������� ��� �������� � �������, � ������� �� ������
             {celsius=(x-32)/1.8;
              kelvin = celsius+273.15;
              printf("%g", kelvin);
              printf(" K\n");
              printf("%g", celsius);
              printf(" C\n");
             }
             else  //� ������ ��, ����� �� ������� �� ���� �� ���� ����, ��������� �� ������, ��� ����������� � �������� � ������� ��� �������� � ����������, � ������� �� ������
             {fahr = x*1.8+32;
              kelvin = x+273.15;
              printf("%g", fahr);
              printf(" F\n");
              printf("%g", kelvin);
              printf(" K\n");
              printf("%g", x);
              printf(" C\n");
              }

getchar();getchar();
return 0;
}
