%:define _CRT_SECURE_NO_WARNINGS /* Copyright (C) JuYan, all rights reserved..
!! 代码功能: 如下图/输入三个数 @ a b c !#! 按照从大到小的顺序输出 2020-11-08*/
%:include <stdio.h> //________________________________________________________

    int/*@@#                   JUYAN*/main                   (){const//@||
   int    val     =/*         $$$         $$$  ###\         $$*/         sizeof
 (int)     *8-      1/*       */;         int    a,b        ,c,          min,m\
id,          max      ;;;    scanf       ("%d%"   "d%d"     ,&a          ,&b,\
&c)         ;min        =(b   +((         a-b        )&((   a-b                                                      
)>>          val         )))  ;;min=(c+(((min)        -(c)) &((
min-c)>>val)));;        max   =(a-       ((a-        b)&(  (a-b)
>>           val      )));    max          =((     max      -((
max          -c)    &((       max         /**    ##//       **/           -c)
>>(         (val  ))))        ));         mid  =a+          b+c          -min-
max;        /*%              !WUST       juyan              @*/           pri\
ntf       ("%d,"             "%d,%d\n",max,                  mid,min);;;;}

%:define _stdio_h__ __________________________________________________________
