#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int n=5;
char a[5][5];
 int result(char m[],char u[]);
 void display(char m[],char u[])
 {
 	for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<n;j++)
 		cout<<a[i][j]<<" ";
 		
 		cout<<endl;
	 }
 }
 int main()
 {
 	system("color D9");
 	
 	
 cout<<"THIS IS AN TIC TAC TOE GAME WHERE NUMERIC VALUES REPRESENT THE\n POSITONS ";
 cout<<"FOR THE ENTRY OF 'O'AND 'X'\n";	
 	
 	
 	int l=0;
 	char k='1';
 	int b[10];
 	for(int i=0;i<10;i++)
 	 b[i]=0;
 	
 		for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<n;j++)
 		
 		{
 			if(i%2==0&&j%2==0)
 			{
			 a[i][j]=k++;
		}
 			else
 			a[i][j]=' ';
 			
 			
		 }
 		
 		
	 }
	 char m[89],u[90],q[98];
	 
	 k='1';
	 display(m,u);
	 int g;
	 cout<<"Player 1 will use 'O'\nPlayer 2 will use 'X'\nExit press 11\n";
	 cout<<"Enter  ist player name ";
	 cin>>m;
	 cout<<"Enter 2nd player  name ";
	 cin>>u;
	 cout<<"Enter the value at which   "<<m<<" wants to place  ";
	 cin>>g;
	 b[g]++;
	// system("cls");
	 int p=0;
//	strcpy(q,u);
	 z:
	 	{
	 	
		 
		 
		 	
 		for(int i=0;i<n;i++)
 		
 		
 	{
 		for(int j=0;j<n;j++)
 		
 		{
 			if(i%2==0&&j%2==0)
 			  {
 			  	if(a[i][j]==g+48)
 			  	{if(p==0)				   
				   {
				   a[i][j]='O';l++;
				   strcpy(q,u);
				   p=1;system("cls");system("color B9");
		        	}
				   else
				   {
				   
				   a[i][j]='X';
				   l++;
				   p=0;
				   strcpy(q,m);system("cls");system("color D9");
				   }
			   }
		}
 			else
 			a[i][j]=' ';
 			
 			
		 }
 		
 		
	 }	
	 display(m,u);
	 int t=result(m,u);
	 if(t==0)
	 return 0;
	 
	/* if(p==1)
	 {
	 p=-1;
	 //strcpy(q,m);
	 }*/

	 
	 if(l==9)
	 {
	 int h=result(m,u);
	 if(h==1)
	 cout<<"Match draw...";
	 return 0;}
	 
	d:
	{ //strcpy(q,u);
	cout<<"enter the value at which "<<q<<"  want to place ";
	 
	 
	 cin>>g;
	
	 //p++;
	//strcpy(q,u);
	 
	 
	 
	 if(b[g]!=0)
	 {cout<<"INVALID RESPONSE  ENTER AGAIN \n ";
	 
	  goto d;system("cls");
	 }
	 else
	{
		b[g]++;system("cls");
	  
	  }
}
	 //strcpy(q,m);
	 if(g>10)
	 {
	 	
	 cout<<"u quit the game";
	 return 0;
	 	 
		 }
		 else
		  goto z;
	}
 }
 
 int result(char m[],char u[])
 {
 	if(a[0][0]==a[0][2]&&a[0][2]==a[0][4])
 	{if(a[0][0]=='O')
 	 cout<<" CONGRATS!...."<<m<<"  ...u won the game. ";
 	 else
 	  cout<<" CONGRATS!...."<<u<<" u  won the game. ";
 	return 0;
	 	
	 }
	 
 else	if(a[0][0]==a[2][0]&&a[2][0]==a[4][0])
 	{if(a[0][0]=='O')
 	 cout<<" CONGRATS!...."<<m<<"  u won the game. ";
 	 else
 	  cout<<" CONGRATS!...."<<u<<"  u won the game. ";
 	return 0;	
	 }
	 
 else	if(a[0][0]==a[2][2]&&a[2][2]==a[4][4])
 	{if(a[0][0]=='O')
 	 cout<<" CONGRATS!...."<<m<<"  u won the game. ";
 	 else
 	  cout<<" CONGRATS!...."<<u<<"  u won the game. ";
 	return 0;	
	 }
	 
 else	if(a[2][0]==a[2][2]&&a[2][2]==a[2][4])
 	{if(a[2][0]=='O')
 	 cout<<" CONGRATS!...."<<m<<"  u won the game. ";
 	 else
 	  cout<<" CONGRATS!...."<<u<<"  u won the game. ";
 	return 0;	
	 }
	 
 else	if(a[4][0]==a[4][2]&&a[4][2]==a[4][4])
 	{if(a[4][0]=='O')
 	 cout<<" CONGRATS!...."<<m<<"  u won the game. ";
 	 else
 	  cout<<" CONGRATS!...."<<u<<"  u won the game. ";
 	return 0;	
	 }
	 
 else	if(a[0][2]==a[2][2]&&a[2][2]==a[4][2])
 	{if(a[0][2]=='O')
 	 cout<<" CONGRATS!...."<<m<<"  u won the game. ";
 	 else
 	  cout<<" CONGRATS!...."<<u<<"  u won the game. ";
 	return 0;	
	 }
	 
 else	if(a[0][4]==a[2][4]&&a[2][4]==a[4][4])
 	{if(a[0][4]=='O')
 	 cout<<" CONGRATS!...."<<m<<"  u won the game. ";
 	 else
 	  cout<<" CONGRATS!...."<<u<<"  u won the game. ";
 	return 0;	
	 }
	 
 else	if(a[4][0]==a[2][2]&&a[2][2]==a[0][4])
 	{if(a[4][0]=='O')
 	 cout<<" CONGRATS!...."<<m<<"  u won the game. ";
 	 else
 	  cout<<" CONGRATS!...."<<u<<"  u won the game. ";
 	
	 return 0;	
	 }
	 
	
	return 1; 
}
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
