#include <stdio.h>


int main()
{
    // 字符集 ASCII
    char a = 'a';   // 97
    char char_1 = '1';  // 47
    char char_0 = '0';  // 48
    
    char i = 0;
    
    char *string = "中";
    

    setlocale(LC_ALL, "chs");

    
    printf("char a: %d\n", a);
    printf("char char_0: %d\n", char_0);
    printf("char char_1: %d\n", char_1);
    
    return 0;
}

