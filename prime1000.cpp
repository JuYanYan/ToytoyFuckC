%:include <stdio.h> /*----打印一千以内的素数---埃氏筛-------------------
                                                                   */
const/**/int/*$   */N=1000;int/*$   */a[N+1]={0};/*   &*/int/**/ps[N+1\
]={0};int/*@@*/   main(){int/**/m  ,k;int/*JuYan@@@   #*/c=0;for(m=2;m
            <=N              ;m+=   1){                           if(
          (a[m])              ){/*  @zh                           -ih
            u*/}             else  {a[m]                          =1;;
ps[c++]=m;for(k   =m;k<=N;k+=m){a   [k]=1;}}}for(m=               1;m\
<=c;m+=1)/*2020   */{printf("%3d"   " ",ps[m-1]);if              (((m\
&(0                          +017))             ==0               )){{
{{{                          }}{{               }}{               }/*
@@@                          1109               ###               @*/
putchar(00012);   }}}}printf("\nT"  "he number of "               "r"
"esult is %d \n"  ""/*@END@*/,c);   return/*@WUST@@              */0;}
