#include <stdio.h>
#define o printf
#define $ printf("\n")
#define and(a) O[0] = __(a);
#define l(r) for(r^=r; r
#define then if(
#define than ==
#define t int 
#define i scanf("%d"
#define f goto
#define __(p) #p
#define v(q,M,I) for(M=I;M<q;M+=_){
#define _ ('?'-'!'>>4)

int main(I,O)char**O;{
    /*   This is my Mastermind
     *   implementation in C.
     *   To play: compile, run
     */  and (enter your guess)
    
    t h,k                         ,c,M=
    10,L=4                       ,W=8,q
    =0,y,p,                     C,A,a,g
    ,cu ,j;f                   w;n : I=
    '-'-'-';h                 =1095839;
    j:;k=(h^h)               ;c=_;l(k)<
    (_+_+ _-(I+             _));k ++ )c
    *=100  ; o (           "%c",  (t)((
    I>1?_   :0)+5         *10+(   h>100
    ?h%((    (t)(h       /100)    )*100
    ):h))     );h=(     h>>7)     ;I++;
    then       h!=h^   h)f j      ;(o (
  " %s\n"       ,!(C^A)?__        (win)
    : __          (lose))         );f B
    ; B :         return          0;w:v
    
    (I,q,                         M-9)y
    =_>>(                         _+_),
    p=0;m                         :y=y*
    10+(O                         [q][p
    ++]-8                         *6);if
    (q[O]                         [p])f
    m;then q than _)M=*(&y);then q==3)W
    =y;then q than _+_)L=y;}f r;r:srand
    (&I);                         C=_,A
    =_^_;                         t x[W
    ];v(W                         ,I,_-
    _)x[I                         ]=_-!
    (I>>I                         );}l(
    I)<L;                         I++){
    s:q=(                         rand(


    )%W)+_;g=!(I^I);l(c)<W;c++)if(q==
    x[c])g=0;if(!g)f s;I[x]=q;A+=q**(&C
    );C*=                         10;}f
    e;p:x                         [0]=0
    ,j=0,                         c=C;
    If:q=                        0;k=0
    ;a=A;                      lf:if
    ((c%10)==(a%10))q=1;a/=10;k++;
    then k<L)f lf;0[x]+=q?_:0;c/=
    10; j      ++;if(j<L)
    f If;         l(q)<x[0]-
    cu; q            ++)o(__(X)
    );o (               __(]\n))
    ;f v;                  return 0; 
    e:l(I                    )<M&&(C
    ^A);I                     +=_){o(
    __(%s)                     ,0[O]);$
    
  ;i,&C);f d;v:;}f n;d:;j,cu=0,a=A;c=C;o(
  __(\t\t[));l(j)<L;j++,a/=10,c/=10)if(c%
  10==a%10)o(__(%s),__(O)+ cu-cu ++);f p;
}
