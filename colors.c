#include <stdio.h>

int main()
{
    printf("Foreground colors\n");
    printf("\033[0;30mBlack       \\033[0;30m\n");
    printf("\033[0;31mRed         \\033[0;31m\n");
    printf("\033[0;32mGreen       \\033[0;32m\n");
    printf("\033[0;33mYellow      \\033[0;33m\n");
    printf("\033[0;34mBlue        \\033[0;34m\n");
    printf("\033[0;35mMagenta     \\033[0;35m\n");
    printf("\033[0;36mCyan        \\033[0;36m\n");
    printf("\033[0;37mGray        \\033[0;37m\n");
    printf("\033[0;39mReset       \\033[0;39\n");

    printf("\nBackground colors\n");
    printf("\033[40mBlack         \\033[40m\033[49m\n");
    printf("\033[41mRed           \\033[41m\033[49m\n");
    printf("\033[42mGreen         \\033[42m\033[49m\n");
    printf("\033[43mYellow        \\033[43m\033[49m\n");
    printf("\033[44mBlue          \\033[44m\033[49m\n");
    printf("\033[45mMagenta       \\033[45m\033[49m\n");
    printf("\033[46mCyan          \\033[46m\033[49m\n");
    printf("\033[47mGray          \\033[47m\033[49m\n");
    printf("\033[100mDarkGray     \\033[100m\033[49m\n");
    printf("\033[49mDefault       \\033[49m\033[49m\n");

    return 0;
}