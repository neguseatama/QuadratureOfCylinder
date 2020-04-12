/*
 C言語による円柱の求積(表面積と体積)
 https://neguse-atama.hatenablog.com
*/

#include <stdio.h>
int main(void)
{
    int hankei,takasa;
    double hyou,tai,ritu;
    ritu=3.14;
    puts("円の半径と円柱の高さを入力してください:");
    printf("円の半径:");    scanf("%d",&hankei);
    printf("円柱の高さ:");    scanf("%d",&takasa);
    hyou=hankei*hankei*ritu*2+2*ritu*hankei*takasa;
    tai=hankei*hankei*ritu*takasa;
    printf("その半径と高さから円周率を3.14とした円の表面積は、%.2lf、体積は%.2lfです。",hyou,tai);
    return (0);
}