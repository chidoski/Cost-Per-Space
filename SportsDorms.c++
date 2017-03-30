#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct studenttype//global-User defined data type
{
    string studentName;//declaration of identifier
    char dorm[2];//declaration of array identifier
    string fSportPlayed;//declaration of identifier
    string sSportPlayed;//declaration of identifier
    float SpentMoney;//declaration of identifier
    int NumSport;//declaration of identifier
};

void ArrayDormSport (int SportDormArray[][6], studenttype[], float MoneyArray[][6]);

int main()
{    
    float totalAmount=0.00;
    string fname, lname;//declaration of identifiers
    ifstream infile;//initialize infile
    infile.open("assn240_a.txt");//open data file
    studenttype SportStudent[25];//array declarastion
    int SportDormArray[4][6];//array declaration
    float MoneyArray[4][6];//array declaration
    
    for(int colum=0; colum<4;colum++)// clear the board
        for (int row=0; row<6;row++)
        {
            SportDormArray[row][colum]=0;
            MoneyArray[row][colum]=0.0;
        }
    for(int mycount=0; mycount<25; mycount++)//for loop for record all 
    {
        infile>>fname>>lname;//get student fistname and lastname from data file
        SportStudent[mycount].studentName=fname+" "+lname;//assigns firtname and lastname to array [name]
        for(int dormCounter=0;dormCounter<2;dormCounter++)// for loop to grab grade as 2 letters
         {
            infile>>SportStudent[mycount].dorm[dormCounter];//infile to process all 25 records         
        }
        infile>>SportStudent[mycount].NumSport;//read student id from data file
        if (SportStudent[mycount].NumSport>1)
        {
            infile>>SportStudent[mycount].fSportPlayed;
            infile>>SportStudent[mycount].sSportPlayed;
        }
        else
            infile>>SportStudent[mycount].fSportPlayed;//get one sport played by the student 

        infile>>SportStudent[mycount].SpentMoney;//get moneySpent classification
            
    }
    title();//call void function title
    return 0;
}
//void function that assigns spaces to an array, print out information requested 
void ArrayDormSport (int SportDormArray[][6], studenttype SportStudent[], float MoneyArray[][6])
{
    if (SportStudent[mycount].dorm = "BT")
        row=0;
        else if (SportStudent[mycount].dorm = "TU")
            row=1;
            else if (SportStudent[mycount].dorm = "DG")
                row=2;
                else if (SportStudent[mycount].dorm = "FT")
                    row=3;
                    else if (SportStudent[mycount].dorm ="LN")
                        row=4;
                        else if (SportStudent[mycount].dorm="OP")
                            row=5;
                            else if (SportStudent[mycount].fSportPlayed ="FOOTBALL") 
                                    colum=0;
                                    else if (SportStudent[mycount].sSportPlayed ="FOOTBALL")
                                            colum=0;
                                            else if (SportStudent[mycount].fSportPlayed ="SOCCER")
                                                    colum=1;
                                                    else if (SportStudent[mycount].sSportPlayed ="SOCCER")
                                                            colum=1;                                    
                                                            else if (SportStudent[mycount].fSportPlayed ="TENNIS") 
                                                                    colum=2;
                                                                    else if (SportStudent[mycount].fSportPlayed ="TENNIS") 
                                                                            colum=2;
                                                                            else if (SportStudent[mycount].fSportPlayed = "BASKETBALL" 
                                                                                    colum=3;
                                                                                    else if (SportStudent[mycount].sSportPlayed = "BASKETBALL")
                                                                                    colum=3;
SportDormArray[row][colum]++;    



cout<<"What is the total amount of money spent on each sport?"<<endl;
for (count=0; count<25; count++)
    {
        totalSpent=0.0
        totalSpent=totalSpent+SportStudent[count].SpentMoney;
    }
cout<<totalSpent<<endl;
//What is the total amount of money spent at each of the dormitories?
for(int colum=0; colum<4;colum++)// clear the board
        for (int row=0; row<6;row++)
        {
            if (MoneyArray[row][colum]=0.0)
            MoneyArray[row][colum]=0.0;
}
