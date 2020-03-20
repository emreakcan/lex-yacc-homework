
# Beleşçi tayfa kanalıma hoşgeldiniz, çok değiştirmeyin ödevi bozulur. 
lex, yacc ve gcc komutlarını shellden çalıştırdıktan sonra aşağıda dediklerimi yapın. Ödevi silmiyorum çünkü insana çok faydası olan bişey değil.

# How to run ?

1. clone repo
2. lex project.l 
3. yacc -d project.y 
4. gcc lex.yy.c y.tab.c -ll 
5. Run: 0. ./a.out

# SAMPLE CODE

m = 3;
while(m<6){
  print(5);
  m = m+1;
};

m = 4;
z = 2;
print(m+z);


if(5<1){print(1);}else{print(2);};

if(6>1){print(1);}


# MEMBERS 


Project Members
Beren KOTANLI - 20170808075
Emre Can AKCAN - 20170808074
Anıl DOĞAN - 20170808071


# DOC

# lex-project-robosto


Robusta Syntax Specification

Types
  
-primitive type- ::= -numeric type- | any


Blocks and Commands

-if then statement-::= if ( -expression- ) -statement-

-if then else statement-::= if ( -expression- ) -statement no short if- else -statement-

-if then else statement no short if- ::= if ( -expression- ) -statement no short if- else -statement no short if-

-while statement- ::= while ( -expression- ) -statement-


Expressions

-constant expression- ::= -expression-

-expression- ::= -assignment expression-

-assignment expression- ::= -conditional expression- | -assignment-

-assignment- ::= -left hand side- -assignment operator- -assignment expression-

-left hand side- ::= -expression name-

-assignment operator- ::= = 

Tokens

-digits- ::= -digit- | -digits- -digit-

-digit- ::= 0 | -non zero digit-

-non zero digit- ::= 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9

-sign- ::= + | -

-boolean literal- ::= true | false

New Lines and White Space 


Operations

PLUS: '+' ;
MINUS: '-' ;
MULT: '*' ;
DIV: '/' ;
AND: '&&' ;
OR: '||' ;
ASSIGNMENT: '==' ;
