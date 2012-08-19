//add
a(x,y){y!=0&&((x^=y),(y&=(x^y)),(x=a(x,y<<1)));return x;}

//subtract
s(x,y){y!=0&&((x^=y),(y&=~(x^y)),(x=s(x,y<<1)));return x;}



//multiplication required a()
t;
f(x,y){y>0&&(((x<<=1)&&(y&1)&&(t=a(t,x>>1))),f(x,y>>1));}
/*multiplication function*/
m(x,y){t=0;y!=0&&f(x,y);return t;}



//division required s(),a()
c;
p(x,y){x>=y&&((x=s(x,y)),(c=a(c,1)),p(x,y));}
/*division function*/
d(x,y){c=0;p(x,y);return c;}



//remainder required s()
r(x,y){ x>=y&&(x=r(s(x,y),y));return x;}

main(){scanf("%d %d",&t,&c);printf("%d",r(t,c));}
