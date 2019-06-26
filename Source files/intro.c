#include "header.h"

void intro() {
char *s = "\n\n\n\n\n\n\n\n\n\n\t\t\t\t        ****\t************\t****    ****    ****\t****           *****    \t****            ****\n\t\t\t\t       *****\t************\t****    ****    ****\t****          *****     \t****           *****\n\t\t\t\t      ******\t************\t****    ****    ****\t****         *****      \t****          ******\n\t\t\t\t     *******\t************\t****    ****    ****\t****        *****       \t****          ******\n\t\t\t\t    ********\t****        \t****    ****    ****\t****       *****        \t****          ******\n\t\t\t\t   *********\t****        \t****    ****    ****\t****      *****         \t****         *******\n\t\t\t\t  ***** ****\t****        \t****    ****    ****\t****     *****          \t****         *******\n\t\t\t\t *****  ****\t****        \t****    ****    ****\t****    *****           \t****        ********\n\t\t\t\t*****   ****\t****        \t****    ****    ****\t****   *****            \t****        ********\n\t\t\t\t ***    ****\t****        \t****    ****    ****\t****  *****             \t****       **** ****\n\t\t\t\t  *     ****\t****        \t****    ****    ****\t**** *****              \t****       **** ****\n\t\t\t\t        ****\t****        \t****    ****    ****\t*********               \t****      ****  ****\n\t\t\t\t        ****\t************\t****    ****    ****\t********                \t****      ****  ****\n\t\t\t\t        ****\t************\t****    ****    ****\t*******                 \t****     ****   ****\n\t\t\t\t        ****\t************\t****    ****    ****\t********                \t****     ****   ****\n\t\t\t\t        ****\t************\t****    ****    ****\t*********               \t****    ****    ****\n\t\t\t\t        ****\t        ****\t****    ****    ****\t**** *****              \t****    ****    ****\n\t\t\t\t        ****\t        ****\t****    ****    ****\t****  *****             \t****   ****     ****\n\t\t\t\t        ****\t        ****\t****    ****    ****\t****   *****            \t****   ****     ****\n\t\t\t\t        ****\t        ****\t****    ****    ****\t****    *****           \t****  ****      ****\n\t\t\t\t        ****\t        ****\t****    ****    ****\t****     *****          \t****  ****      ****\n\t\t\t\t        ****\t        ****\t****    ****    ****\t****      *****         \t**** ****       ****\n\t\t\t\t        ****\t        ****\t****    ****    ****\t****       *****        \t**** ****       ****\n\t\t\t\t        ****\t        ****\t****    ****    ****\t****        *****       \t********        ****\n\t\t\t\t        ****\t        ****\t****    ****    ****\t****         *****      \t********        ****\n\t\t\t\t        ****\t        ****\t****    ****    ****\t****          *****     \t*******         ****\n\t\t\t\t        ****\t        ****\t****    ****    ****\t****           *****    \t*******         ****\n\t\t\t\t        ****\t************\t********************\t****            *****   \t******          ****\n\t\t\t\t        ****\t************\t********************\t****             *****  \t******          ****\n\t\t\t\t        ****\t************\t********************\t****              ***** \t*****           ****\n\t\t\t\t        ****\t************\t********************\t****               *****\t****            ****\n\n\n\n\n\n\n\n\n\n\n";
    while (*s != '\0') {
           usleep(500);
           addch(*s);
           refresh();
           s++;
    }
    usleep(1000000);
    erase();
    
}
