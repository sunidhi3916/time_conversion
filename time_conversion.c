/*here we have to enter a time in string format as "hh:mm:ssAM/PM" then it will be convert into
millitary time and display on your screen*/

 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 
 
 int main()
 {
     char s[10];
     scanf("%[^\n]s",s);
     
     int i=0;
     while(s[i]!='\0')
     {
          
         
             if(s[0]=='1' && s[1]=='2' && s[8]=='A')
             {
                 s[0]='0';
                 s[1]='0';
                 s[8]='\0';
             }
             else if(s[8]=='P' && s[0]=='0' && s[1]>'0' && s[1]<='7')
             {
                 s[0]='1';
                 s[1]+=2;
                 s[8]='\0';
             }
             else if(s[8]=='P' && s[1]=='8')
             {
                 s[0]='2';
                 s[1]='0';
                 s[8]='\0';
             }
              else if(s[8]=='P' && s[1]=='9')
              {
                  s[0]='2';
                  s[1]='1';
                  s[8]='\0';
              }
              else if(s[8]=='P' && s[0]=='1' && s[1]>='0' && s[1]<='1')
              {
                  s[0]='2';
                  s[1]+=2;
                  s[8]='\0';
              }
              else {
               s[8]='\0';
              }
               
              i++;
     }
    
     printf("%s",s);
    return 0;
     
     
 }
