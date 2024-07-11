//                                  Guess The Number Game


#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int num,i=0;  
    srand(static_cast<unsigned int>( time(0)) );
	int random = 1 + (rand() % 30);
	cout<<"\nThe number is between 1 and 30"<<endl;
	cout<<"You have got 5 tries only\n"<<endl;
	
while(true)	
{	
       if(i==0)
		{			
	        cout<<"First Try : "<<endl;
	        cout<<"Guess The Number = ";
	        cin>>num;
	  	
		    if(num!=random && num<random)
		    {
			    cout<<"You Gussed Wrong Number\nThe Number is greater than "<<num<<"\n"<<endl;
			    break;						
		    }	
			
	        else if(num!=random && num>random)
		    {
			    cout<<"You Gussed Wrong Number\nThe Number is less than "<<num<<"\n"<<endl;
			    break;
		    }
		
		    else
		    {
			   cout<<"Hurrah!! You Gussed the right Number"<<endl;
			   cout<<"You Got 5 Marks";
			   i=i+1;
		    }
		    break;
        }//1st if
}//1st while


while(true)
{    
        if(i==0)
        {
	       cout<<"Second  Try : "<<endl;
	       cout<<"Guess The Number = ";
           cin>>num;
	
		    if(num!=random && num<random)
		    {
			    cout<<"You Gussed Wrong Number\nThe Number is greater than "<<num<<"\n"<<endl;			    
			    break;			
		    }
		    else if(num!=random && num>random)
		    {
			    cout<<"You Gussed Wrong Number\nThe Number is less than "<<num<<"\n"<<endl;			   
			    break;
		    }
		    else
		    {
			    cout<<"Hurrah!! You Gussed the right Number\n"<<endl;
			    i=i+1;
			    cout<<"You Got 4 Marks";
		    }
		    break;
	    }//2nd if
}//2nd while
					

while(true)
{	   
        if(i==0)
		{ 
	       cout<<"Third  Try : "<<endl;
	       cout<<"Guess The Number = ";
	       cin>>num;
	 
		    if(num!=random && num<random)
		    {
			    cout<<"You Gussed Wrong Number\nThe Number is greater than "<<num<<"\n"<<endl;
			    break;			
		    }
		    else if(num!=random && num>random)
		    {
			    cout<<"You Gussed Wrong Number\nThe Number is less than "<<num<<"\n"<<endl;
			    break;
		    }
		    else
		    {
			    cout<<"Hurrah!! You Gussed the right Number\n"<<endl;
			    i=i+1;
			    cout<<"You Got 3 Marks";
		    }
		    break;
	    }//3rd if
}//3rd while


while(true)
{	
        if(i==0)
        {
	        cout<<"Fourth Try : "<<endl;
	        cout<<"Guess The Number = ";
	        cin>>num;
	
		    if(num!=random && num<random)
		    {
			    cout<<"You Gussed Wrong Number\nThe Number is greater than "<<num<<"\n"<<endl;
			    break;			
		    }
		    else if(num!=random && num>random)
		    {
			    cout<<"You Gussed Wrong Number\nThe Number is less than "<<num<<"\n"<<endl;
			    break;
		    }
		    else
		    {
			    cout<<"Hurrah!! You Gussed the right Number\n"<<endl;
			    i=i+1;
			    cout<<"You Got 2 Marks";
		    }
		    break;
	    }//4th if
}//4th while


while(true)
{       
        if(i==0)
        {
	        cout<<"Last Try : "<<endl;
	        cout<<"Guess The Number = ";
	        cin>>num;
	
		    if(num!=random && num<random)
		    {
			    cout<<"You Gussed Wrong Number\nThe Number is greater than "<<num<<"\n"<<endl;
			    break;			
		    }
		    else if(num!=random && num>random)
		    {
			    cout<<"You Gussed Wrong Number\nThe Number is less than "<<num<<"\n"<<endl;
			    break;
		    }
		    else
		    {
			    cout<<"Hurrah!! You Gussed the right Number\n"<<endl;
			    i=i+1;
			    cout<<"You Got 1 Marks";
		    }
		    break;
		}//5th if
}//5th while
        if(i == 0)
        {
            cout<<"you Failed\nYou got 0 marks\nThe number was "<<random<<endl;
        }
	return 0;		  		  
} //main                   


