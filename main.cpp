#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream.h>

char* Convert_Int_to_Char(int);

void main()
{

 int i, P_length;
 int t;
 char *total= new char[20];
 char *temp= new char[2];

 P_length=10;
 strcpy(total, ""); //have to have something in total, so strcat has something to concat to
 
 for(i=1;i<P_length;)
 {
	t=rand()/1000;
	if (t<10 && t!=0)
	{
		//cout<< t << " ";
		++i;
		
		strcpy(temp, Convert_Int_to_Char(t) );
		//cout<<"temp = " << temp << endl;
		
		strcat(total, temp);
		//cout<< "total= " << total << endl;
	}//end if
 }//end for
  
 cout<< "total= " << total << "\n";

return;
}



char * Convert_Int_to_Char(int x)
{
	char *string= new char[2];
	
	switch(x)
	{
	case 0 : return( strcpy(string, "0") ); break;
	case 1 : return( strcpy(string, "1") ); break;
	case 2 : return( strcpy(string, "2") ); break;
	case 3 : return( strcpy(string, "3") ); break;
	case 4 : return( strcpy(string, "4") ); break;
	case 5 : return( strcpy(string, "5") ); break;
	case 6 : return( strcpy(string, "6") ); break;
	case 7 : return( strcpy(string, "7") ); break;
	case 8 : return( strcpy(string, "8") ); break;
	case 9 : return( strcpy(string, "9") ); break;
	default : cout<< "switch case error out of range";
	}

	return( strcpy(string, "0"));
}




