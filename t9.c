#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,n,c;
char s[100][500	],d;
clrscr();
scanf("%d",&n);
for(i=0;i<n;++i)
{
scanf(" %[^\n]",s[i]);
}

for(i=0;i<n;++i)
{
printf("case #%d : ",i+1);
for(j=0;s[i][j]!='\0';++j)
{
d=s[i][j];
c=d;
switch(c)
{
case 97 :{ if(s[i][j-1]=='c'||s[i][j-1]=='b'||s[i][j-1]=='a')
	    printf(" ");
	    printf("2");
	    break;
	    }
case 98 :{ if(s[i][j-1]=='a'||s[i][j-1]=='c'||s[i][j-1]=='b')printf(" ");
	   printf("22");
break;
}
case 99:{if(s[i][j-1]=='a'||s[i][j-1]=='b'||s[i][j-1]=='c')
printf(" ");
printf("222");
break;
}
case 100:{if(s[i][j-1]=='d'||s[i][j-1]=='e'||s[i][j-1]=='f')
printf(" ");
printf("3");
break;
}
case 101:{if(s[i][j-1]=='d'||s[i][j-1]=='e'||s[i][j-1]=='f')
printf(" ");
printf("33");
break;
}
case 102:
{
if(s[i][j-1]=='d'||s[i][j-1]=='e'||s[i][j-1]=='f')
printf(" ");
printf("333");
break;
}
case 103 :{if(s[i][j-1]=='g'||s[i][j-1]=='h'||s[i][j-1]=='i')
printf(" ");
printf("4");
break;}
case 104 :{if(s[i][j-1]=='g'||s[i][j-1]=='h'||s[i][j-1]=='i')
printf(" ");
printf("44");
break;}
case 105 :{if(s[i][j-1]=='g'||s[i][j-1]=='h'||s[i][j-1]=='i')
printf(" ");
printf("444");
break;}
case 106 :{if(s[i][j-1]=='j'||s[i][j-1]=='k'||s[i][j-1]=='l')
printf(" ");
printf("5");
break;}
case 107 :{if(s[i][j-1]=='j'||s[i][j-1]=='k'||s[i][j-1]=='l')
printf(" ");
printf("55");
break;}
case 108 :{if(s[i][j-1]=='j'||s[i][j-1]=='k'||s[i][j-1]=='l')
printf(" ");
printf("555");
break;}
case 109 :{if(s[i][j-1]=='m'||s[i][j-1]=='n'||s[i][j-1]=='o')
printf(" ");
printf("6");
break;}
case 110 :{if(s[i][j-1]=='m'||s[i][j-1]=='n'||s[i][j-1]=='o')
printf(" ");
printf("66");
break;}
case 111 :{if(s[i][j-1]=='m'||s[i][j-1]=='n'||s[i][j-1]=='o')
printf(" ");
printf("666");
break;}
case 112 :{if(s[i][j-1]=='p'||s[i][j-1]=='q'||s[i][j-1]=='r'||s[i][j-1]=='s')
printf(" ");
printf("7");
break;}
case 113 :{if(s[i][j-1]=='p'||s[i][j-1]=='q'||s[i][j-1]=='r'||s[i][j-1]=='s')
printf(" ");
printf("77");
break;}
case 114 :{if(s[i][j-1]=='p'||s[i][j-1]=='q'||s[i][j-1]=='r'||s[i][j-1]=='s')
printf(" ");
printf("777");
break;}
case 115 :{if(s[i][j-1]=='p'||s[i][j-1]=='q'||s[i][j-1]=='r'||s[i][j-1]=='s')
printf(" ");
printf("7777");
break;}
case 116 :{if(s[i][j-1]=='t'||s[i][j-1]=='u'||s[i][j-1]=='v')
printf(" ");
printf("8");
break;}
case 117 :{if(s[i][j-1]=='t'||s[i][j-1]=='u'||s[i][j-1]=='v')
printf(" ");
printf("88");
break;}
case 118 :{if(s[i][j-1]=='t'||s[i][j-1]=='u'||s[i][j-1]=='v')
printf(" ");
printf("888");
break;}
case 119 :{if(s[i][j-1]=='w'||s[i][j-1]=='x'||s[i][j-1]=='y'||s[i][j-1]=='z')
printf(" ");
printf("9");
break;}
case 120 :{if(s[i][j-1]=='w'||s[i][j-1]=='x'||s[i][j-1]=='y'||s[i][j-1]=='z')
printf(" ");
printf("99");
break;}
case 121 :{if(s[i][j-1]=='w'||s[i][j-1]=='x'||s[i][j-1]=='y'||s[i][j-1]=='z')
printf(" ");
printf("999");
break;}
case 122 :{if(s[i][j-1]=='w'||s[i][j-1]=='x'||s[i][j-1]=='y'||s[i][j-1]=='z')
printf(" ");
printf("9999");
break;}
case 32:{printf("0");
break;
}
}
}
printf("\n");
}
getch();
}
