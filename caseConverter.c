//input a string
//output string with small case character in capital and capital ones as small
t,l,c=0;char s[1000];p(){t=s[c];s[c]<91&&(s[c]=s[c]+32);t>90&&(s[c]=t-32);c++<l&&p();}
main(){gets(s);l=strlen(s);p();puts(s);getch();}
