//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "GuessNumber.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm3 *Form3;
//---------------------------------------------------------------------------

bool isNumberEntered=false;
int guessNumber;
int attemptsCounter = 0;
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
TitleLabel->Text = "Please Enter The Number";
CounterLabel->Text = "0";
HelperLabel->Text = "";
}
//---------------------------------------------------------------------------


void __fastcall TForm3::ConfirmButtonClick(TObject *Sender)
{
	  if(!isNumberEntered){
	  guessNumber = NumbersEdit->Text.ToInt();
	  isNumberEntered = true;
      TitleLabel->Text = "Now you can guess the number";
	  NumbersEdit->Text="";
	  }else{
		  int secondUsersNumber =  NumbersEdit->Text.ToInt();
		  if(secondUsersNumber == guessNumber){

			  HelperLabel->Text = "You Won! Congratulations!";
			  ConfirmButton->Enabled = false;
			  CounterLabel->Text = ++attemptsCounter;
			  return;

		  }else if(secondUsersNumber > guessNumber){

			  HelperLabel->Text = "Number is greater";

		  }else{

		  HelperLabel->Text = "Number is smaller";

		  }
		  CounterLabel->Text = ++attemptsCounter;
	  }


}
//---------------------------------------------------------------------------

