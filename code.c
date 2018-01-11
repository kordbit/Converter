#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Конвертер для перевода температур в разных шкалах */
 main()
 {
     float fahr,celsius,kelvin,x;
     char y;
     printf(" Type a temp "); // Выводим сообщение с просьбой ввести значение температуры
     scanf("%f%s",&x, &y); //Считываем значение
          if (y == 'C')  //Если введенная температура в шкале Цельсия, то считаем значения для Кельвина и Фаренгейта, и выводим на печать
             {fahr = x*1.8+32;
              kelvin = x+273.15;
              printf("%g", fahr);
              printf(" F\n");
              printf("%g", kelvin);
              printf(" K\n");
             }
             else if (y == 'K')  //Если введенная температура в шкале Кельвина, то считаем значения для Цельсия и Фаренгейта, и выводим на печать
             {celsius=x-273.15;
              fahr = celsius*1.8+32;
              printf("%g", fahr);
              printf(" F\n");
              printf("%g", celsius);
              printf(" C\n");
             }
             else if (y == 'F')  //Если введенная температура в шкале Фаренгейта, то считаем значения для Кельвина и Цельсия, и выводим на печать
             {celsius=(x-32)/1.8;
              kelvin = celsius+273.15;
              printf("%g", kelvin);
              printf(" K\n");
              printf("%g", celsius);
              printf(" C\n");
             }
             else  //В случае же, когда не указана ни одна из трех шкал, принимаем за данное, что температура в Цельсиях и считаем для Кельвина и Фаренгейта, и выводим на печать
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
