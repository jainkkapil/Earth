//input an integer m
//output no. of 1 in m's binary representation 
n=0,m;p(){m>0&&(m%2==1)&&n++;m>0&&(m>>=1)&&p();}
main(){scanf("%d",&m);p();printf("%d",n);getch();}
