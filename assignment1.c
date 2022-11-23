




/*
Q.1   :write c program to print all natural numbers from 1 to n(using while loop)
Owner : Onkar Bhaskar Khatode
Batch :PPA10
Roll no:73
*/
#include<stdio.h>
#include<conio.h>
void main()   
{
 int i=1 ;   // define variable i and initialize by 1
 printf("all nautral no. 1 to 100 \n");
 
 while(i !=100)  //using while loop
 {
   printf("%d\n",i);
   i++;   // i is increment by 1 
 }
 _getch();
}


/*
Q2.write a c program to print all natural numbers in reverse order (from n to 1)using while loop
Owner : Onkar Bhaskar Khatode
Batch :PPA10
Roll no:73
*/
#include<stdio.h>
#include<conio.h>

void main()
{
 int i;        // define variable i
 printf("print all natural no in reverse order\n");
 i = 100;      // i is initialize by 100

 while(i != 1)  //using while loop 
 {
  printf("%d\n",i);
  i--;        //i is decrement by 1
 
 }
 _getch();
}


/*
Q.3 write a c program to print all alphabets from a to z( using while loop)
Owner : Onkar Bhaskar Khatode
Batch :PPA10
Roll no:73
*/
#include<stdio.h>
#include<conio.h>

void main()
{
 char i ='a';    //i is variable define by a

 // using while loop
 while( i != 'z')  //i condtion check
 {
 printf("%c\n",i);
  i++;             //i is increment by 1

 }

 _getch();
}


/*
Q.4 write a c program to print all even numbers between 1 to 100- using while loop
Owner : Onkar Bhaskar Khatode
Batch :PPA10
Roll no:73
*/

#include<stdio.h>
#include<conio.h>
void main()
{
 int i=2;      //i variable define by 2 
  
  //using while loop
 while( i != 100)   // i condtion check
 {
  printf("%d\n",i);
   i=i+2;          // i condition increment by 2 
 }
 
 _getch();
}
 


/*
 Q.5 write a c program to print all odd number between 1 to 100.
 Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
 #include<stdio.h>
 #include<conio.h>
 void main()
{
 int i=1;    // i is variable define by 1

   //using while loop
  while( i != 101)  //i condition check
  {
   printf("%d\n",i);
   i=i+2;         // i is increment by 2
  }
  _getch();
}

 /*
Q.6 write a c program to find sum of all natural numbers between  1 to n.
Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
#include<stdio.h>
#include<conio.h>
void main()
{
int i=1, n=100,sum=0; //take input ,define i,n,sum
 
	while( i != n) //use to while loop to to check the sum o all natural number between 1 to 100 not to n
	{
	 sum=sum+i; //find sum of N
	 i++;  //tqke inceament by 1
	
	} // end while loop
	printf("%d\n",sum); //take output  of sum of N
	_getch();
}


/*
Q.7 write a c program to find sum of all even numbers between  1 to n.
Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
 #include<stdio.h>
#include<conio.h>
void main()
{
int i=2, n=102,sum=0; //take input for even num  define i, n sum
 
	while( i != n) //to use while loop check num is not infinite number 
	{
	 sum=sum+i; //take a sum of even number
	 i=i+2; //inceament by 2
	
	}
	printf("%d\n",sum); // take  to print output 
	_getch();
}



/*
 Q.8 write a c program to find sum of all odd numbers between  1 to n.
Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
 #include<stdio.h>
#include<conio.h>
 void main()
{
 int i=1, n=101, sum=0; //take input and define i,n,sum
  
 while(i != n) //use while loop to ckeck i
 {
  sum=sum+i; // calculate sum of number
  i=i+2; //inceament by 2 
 }
  printf("%d\n",sum);//print the sum 

  _getch();
}



/*
Q.9 write a c program to print multiplication table of any number.
Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
 #include<stdio.h>
#include<conio.h>
 void main()
{
 int n,i=0,ans=1; //take input and define & initilize i,ans

 printf("enter the number");
 scanf_s("%d",&n);
 
 while(i <= 10) // while loop condition i is 10 or greater than 10
 {
  ans=n*i; //to multiples num into num
  printf("%d*%d=%d\n",n,i,ans); // to print output of mutiplication table
  i++;  //increament the num
 }
  
  _getch();
}


/*
 Q,.10 write a c program to count number of digits in a number. 
 Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
 #include<stdio.h>
#include<conio.h>
 void main()
 {
  int n ; //define n
  int i=0; //initilize i
  printf("enter the number:\n");
 
  scanf_s("%d",&n);

  while( n != 0)  //use while condition to check n is not equal to 0
  {
   n=n/10;  //this condition  use to check the given number of digit
   i++; //take increament by 1
  
  }
  printf("number of digit: %d\n",i); //print output count of digit in num
 _getch();
 }
 
 

 /*
  Q.11 write a c program to find first and last digit of a number.
  Owner : Onkar Bhaskar Khatode
  Batch :PPA10
  Roll no:73
  */
  #include<stdio.h>
#include<conio.h>
void main()
{
 int n,lastdigit,firstdigit;    //take input num,firstdigit,lastdigit
printf("enter the no:");     //print n
 scanf_s("%d",&n);     //address of n

 lastdigit = n % 10;   //check the lastdigit in num
 while( n>10)        //n is greater than 10
 {
 n = n/10;        // find division by n
  firstdigit =n;  
 }    //end while loop


 printf("firstdigit=%d and lastdigit=%d\n\n",firstdigit,lastdigit);
 _getch();
}



/*
Q.12 write a c program to find the sum of first and last digit of a number.
Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
 #include<stdio.h>
#include<conio.h>
 void main()
 {
  int n,lastdigit,firstdigit,sum; //take input n,lastdigit,firstdigit,sum
  printf("enter the no :");  //enter no
  scanf_s("%d",&n);           // address of n

  lastdigit=n%10;     //to find reaminder of n

  //using while loop
  while( n >= 10)  //check condition n is greater than equal to 10
  {
   n=n/10;        //to find division of n
   firstdigit=n;
  }   //end while loop
  
  sum=firstdigit+lastdigit;   //addition of firstdigit or lastdigit

  printf(" sum of first and last digit =%d",sum);
  getch();
 } //end main 


/*
 Q=14 write a c program to calculate sum of all digits of a number.
 Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
 #include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,ans=1;   // define n,rem,ans and ans initialize by 1
printf("Enter a number:");  //take input using a no  
scanf_s("%d",&n);  // address of a no

 //using while loop
 while( n!=0)   //check n is not equal to 0 
 {
 rem=n%10;    //to find reaminder of n
 ans=ans*rem; // multiplication of ans and rem and store in variable ans
 n=n/10;      //to find quotient of n and remo
 }  //end of while loop
 printf("sum is =%d",ans);
 _getch();
 }
 





 /*
Q.16 write a c program  to enter a number and print its reverse.
Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
 #include<stdio.h>
#include<conio.h>
void main()
{
 int n,rem,ans=0;    //to define variable n,rem,ans and ans initialize by 0
 printf_s("enter a number:");
 scanf("%d",&n);
  // using while loop
 while(n>0) 
 {
	rem=n%10;  // to find remainder of n
    n=n/10;    // to find quotient of n
  
   ans=ans*10+rem; 

 }     //end while loop
  printf("revrse is=%d",ans);
  _getch();

}
 

 /*
 Q.17 write a c program to check whether a number is palindrome or not.
 Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
 #include<stdio.h>
#include<conio.h>
 void main()
 {
  int n=0,rem,ans=0;  // define variable n,rem,ans and n,ans is initialize by 0
  int a;              //define variable a
  printf("enter the no\n");
  scanf_s("%d",&n);
  a=n;             //stored n inti a variable
   //using while loop
  while(n>0)     //check n is greater than 0
  {
   rem=n%10;       // calculate remainder
       
   n=n/10;         // calculate quoient
   ans=ans*10+rem;
    
  }  //end while loop
   if(a == ans)   // check condition number is palindrome or not
   {
    printf("it is a palindrome ");
   }
   else
   {
    printf("it is not a palindrome ");
   }
 
 _getch();
 }
 
 

/*
Q.18 write a c program to find frequency of each digit in a given integer.
Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
 #include<stdio.h>
#include<conio.h>
   void main()
 {
 
 int num,count;
 int temp1,temp2;
 int rem1,rem2;
 int count=0;

 printf("enter the number:");
 scanf_s("%d",&num);

 temp1=num;   //create and copy into temp1

 while(temp1 > 0)
 {
   rem1=temp1%10;   // temp1 number remainder
   count=0;
    temp2=num;

  while( temp2 > 0)
   {
    rem2=temp2%10;   // temp2 number reaminder
   
   if( rem1==rem2)  // comapare rem1 and rem2
   {
    count++;       // condtion check count increment by 1
   }
    temp2=temp2/10;
   } //end while 2
   printf("%d=%d\n",rem1,count);
   temp1=temp1/10;
 }// end while 1

 } //end main

 













/*
 Q.19 write a c program to enter a number and print it in words.
Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
 #include<stdio.h>
#include<conio.h>
   void main()
   {
    int n;
	printf("enter the no \n");
	scanf("%d",&n);


	while( n>0)
	{
	 rem=n%10;
	 ans=ans*10+
	
	}

   
   
   }*/





   /*
  Q.20 write a c program to print all ASCII characters with their values.
  Owner : Onkar Bhaskar Khatode
  Batch :PPA10
  Roll no:73
 */
 #include<stdio.h>
#include<conio.h>
     void main()
	 {
	  int n=1,b=256;   //define and initialize n by 1 or b by 256
	   // using while loop
      while( n<=b)  // check condition n is less than equal to b
	  {
	   printf("ASCII value character %c=%d\n",n);
	   n++;       // n is increment by 1
	  
	  } //end while loop
	  
	  _getch();
	 }// end main
	 


/*
  Q.21 write a c program to find power of a number using while  loop.
  Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
 #include<stdio.h>
#include<conio.h>
   void main()
{
 int n,power;  // define variable n,power
 int i=1;      //define and initilize variable i by 1
 int ans=1;    // define and initilize variable ans by 1

 printf("enter the no");
 scanf_s("%d",&n);
 printf("enter the power");
 scanf_s("%d",&power);

  // using while loop
  while(i<=power) // check condtion i is greater than power
  {
    ans=ans*n;    // multiplication of ans and n and stored in ans variable
    i++;       // i is increment by 1
  }  // end while loop
  printf("the power of%d\n",ans);
  _getch();
}




  /*
  Q.21 write a c program to find power of a number using for loop.
  Owner : Onkar Bhaskar Khatode
  Batch :PPA10
  Roll no:73
  */
 #include<stdio.h>
#include<conio.h>
   void main()
{
 int n,power;
 int i=1;
 int ans=1;

 printf("enter the no");
 scanf_s("%d",&n);
 printf("enter the power");
 scanf("%d",&power);


  for(i=1;i<=power;i++)
  {
    ans=ans*n;
    
  }
  printf("the power of%d\n",ans);
  _getch();
}
 

/*
Q.22 write a c program to find all factors of a number.
Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
#include<stdio.h>
#include<conio.h>
void main()
   {

	   int n;     //define variable n
	   int i;     //define variable i
	   printf("enter the no");
	   scanf_s("%d",&n);
	   // using for loop
	   for(i=1;i<=n;i++)  
	   {
	    if( n%i==0)   // check condition if and find remainder
		{
			printf("factors are= %d\n",i);
		}

	   }// end of for
     _getch();
   } // end of main
   


/*
//Q.23 write a c program to find factorial of a number.
Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
#include<stdio.h>
#include<conio.h>
    void main()
	 { 
		 int n,ans=1;   //define variable n,ans and ans is initilize by 1
	     int i=1;       // define variable i and initilize by 1
	 printf("enter the no");
	 scanf_s("%d",&n);
	 // using for loop
	 for(i=1;i<=n;i++)  //check condition i and increment by 1
		 {
		  ans=ans*i;   //multiplication of ans and i and stored in ans variable
		 }  //end of for loop 
	   printf("factorial are=%d",ans);
	   _getch();
	 } // end main
	 


 /*
 Q.23 write a c program to find factorial of a number.
 Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
 #include<stdio.h>
#include<conio.h>
 void main()
{
   int n;
   int i=5;
   int ans=1;
   printf("enter the no");
   scanf_s("%d",&n);

   for(i=5;i>=1;i--)
   {
    ans=ans*i;
   }
   printf("factorial are=%d",ans);
   _getch();
}
  


  /*
 Q.24 write a c program to find HCF(GCD) of two numbers.
 Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
#include<stdio.h>
#include<conio.h>
  void main()
  {
   int n1,n2;  // define variable n1,n2
   int i,min;  // define variable i,min
   int gcd;    // define variable gcd
   printf("enter two no");
   scanf_s("%d %d",&n1,&n2);

    if(n1<n2) // check condition n1 is less than n2
	{
	min=n1;    
	}
   else
   {
    min=n2;
   }
   // using for loop
   for(i=1;i<=min;i++) // check condtion i and min
   {
    if(n1%i==0 && n2%i==0)  //check condtion and find reaminder of n1 and n2
	{
	  gcd=i;   
	}
   
   } //end for loop
    printf("gcd is %d ",gcd);
   _getch();
 } // end main
 



 /*
  Q.25 write a  c program to find LCM of two numbers.
  Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
 #include<stdio.h>
#include<conio.h>
void main()
 {
 int n1,n2;
 
 
 int max;
 printf("enter two number");
 scanf_s("%d%d",&n1,&n2);
   max = (n1>n2) ? n1 : n2;
  

 while(1)
 {
	 if(max%n1==0 && max%n2==0)
	 {
		 printf("%d",max);
		 break;
	 }
	  max++;
	 }
 
 
 _getch();
 }
 
 

 /*
 Q.26 write a c program to check whether a number is prime number or not.
 Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
 #include<stdio.h>
#include<conio.h>
 void main()
   {
 int n,i=1;    //define variable n,i and i is initilize by 1
 int count=0;  // define variable count and initialize by 0
 printf("enter a number");
 scanf_s("%d",&n);
 // using for lop
 for(i=1;i<=n;i++) //check condtion i is less than or equal to n and i increment by 1
 {
  if(n%i==0)   //check remainder is equal to 0
  {
	  count++;  //condition is true then count will be increment
 }
 } // end of for loop
	if(count == 2) //check condition count is equal to 2
	{
	 printf("number is a prime number");
	}
	else
	{
	printf("number is a not prime number");
	}
	_getch();
	}// end main
	


  /*
Q.27 write a c program to print all prime numbers between 1 to n.
Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
 #include<stdio.h>
#include<conio.h>
	void main()
  {
  int n,i=1,j=1;  // define variable n,i,j and i,j is initilize by 1 
  
  printf("enter the number");
  scanf_s("%d",&n);
  // using for loop i
  for(i=1;i<=n;i++) // check condition for i is less than or equal to n
  {
     int count=0; // define and initilize count variable
	 //using for loop j
	  for(j=1;j<=i;j++)  // check condition for j is less than or equal to i
	  {
	   if(i%j==0)     // check remainder is equal to 0
	   {
	    count++;    //condition is true then count will be increment
	   }
	  }  //end of for loop j
    if(count==2)    //check condition count is equal to 2
	{
	
	printf("prime numbers are %d\n",i);
	}
  }// end of for loop i
  _getch();
 }  // end main
  


  /*
 Q.28 write a c program to find sum of all prime numbers between 1 to n.
 Owner : Onkar Bhaskar Khatode
 Batch :PPA10
 Roll no:73
 */
 #include<stdio.h>
#include<conio.h>
  void main()
 {
  int n,i=1,j=1;
  int sum=0;
  printf("enter the number");
  scanf_s("%d",&n);

  
  for(i=1;i<=n;i++)
  {
	 int count=0;
   for(j=1;j<=i;j++)
   {
    if(i%j==0)
	{
	count++;
	}
   
   }
    if(count==2)
	{
	 sum=sum+count;
	}
	}
	printf("sum of prime numbers %d",sum);
	_getch();
  }
  
  



  /*
 //Q.29 write a c program to find all prime factors of a number.

  void main()
 {
  int n,i=1;
  printf("enter the number to find all prime factors");
  scanf("%d",&n);

  printf("prime factor of %d\n",n);

  for(i=1;i<=n;i++)
  {
   if(i==1)
   {
    printf("%d\n",i);
   }

    if( n%i==0)
	{
	factor=i;

	count=0;

	for()
	}
  }

  
  }

 
  
  }*/






  
  //Q.30  write a c program to check whether a number is armstrong number or not.

  /*
  void main()
	{
	 int n,num,temp,temp1,cnt,j; //define a variable
	 int sum,power,rem;
	 i=0;
	 while("n>=i")
	 {
	 num=i;
	 temp=i;
	 temp1=i;
	 cnt=0;
	 sum=0;

	 while(num>0)
	 {
	 num=num/10;
	 cnt++;
	 }


	 printf("enter the number:")
	 scanf("%d,&n");

	 while

	 }
	 if(a==arm)
	 {
	  printf("Number is armstrong number");
	 }
	 else
	 {
	  printf("Number are not armstrong number");
	 
	 }
	 getch();
	}
	*/


	/*
	//Q.31 write a c program to print all armstrong numbers between 1 to n.

	void main()
	{
	 int n,a,sum=0;
	 int rem,arm=0;
	 printf("enter the number ");
	 scanf("%d",&n);
	   a=n;
	 while(n>0)
	 {
	  rem=n%10;
	  arm=arm+(rem*rem*rem);
	  n=n/10;
	  
	 }
	 if(a==arm)
	 {
	  sum=sum+arm;
	 n++;
	 }
	 printf("sum of armstrong number%d",arm,n);
	 getch();
  }
  */
  


  /*
  //Q.32 write a c program to check whether a number is perfect number or not.


  void main()
  {
   int n,i=1;  //define and initialize of variables
   int sum=0;
   printf("enter the number:"); //take input in user
   scanf("%d",&n);

   // using for loop
   while(i<n) // check condition and increment by 1
   {
    if(n%i==0)   // check a condition 
	
      sum=sum+i;
	  i++;
	}
   
   if(sum==n )
   {
   printf("number is a perfect",n);
   }
   else
   {
    printf("number is not a perfect number",n);
   }
    getch();
  }
  */
  
  /*
   //Q.33 write a c program to print all perfect numbers between 1 to n..


  void main()
  {
   int n,i=1;  //define and initialize of variables
   int sum=0;
   printf("enter the number:"); //take input in user
   scanf("%d",&n);

   // using for loop
   while(i<n) // check condition and increment by 1
   {
    if(n%i==0)   // check a condition 
	
		
      sum=sum+i;
	 n=n/10;
	 i++;
	}
  
   if(n==sum ) 
   {
   }
   printf("all perfect numbers %d %d",sum,n);
    getch();
   }
   */