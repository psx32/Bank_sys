#include <stdio.h>

// Bank balance
float bankBalance(float balance)
{
	return balance;
}

// Bank rent
float bankRent(float balance)
{
	float rent; // rent at percentage
	float nRnt; // Netto rent
	float bRnt; // Brutto rent
	
	rent = 0.125; // 12.5% rent
	nRnt = rent * balance; // Netto rent formula
	bRnt = balance + nRnt; // Brutto rent formula

	return bRnt;
}

// Rent tax
float rntTax(float balance)
{
	float tax;
	float nTax; // Netto Tax
	float bTax; // Brutto Tax

	tax = 0.05; // 5% tax
	nTax = tax * balance;
	bTax = balance - nTax;

	return bTax;
}

// Personal banking information (holder for strings)
void bInfo(char fName[20], char lName[20], char eMail[30], char pNum[20])
{
	printf("| First Name: %s \n", fName);
	printf("| Last Name: %s \n", lName);
	printf("| Email: %s \n", eMail);
	printf("| Phone Number: %s \n", pNum);
}

// Bank account information output
void bankOutput()
{
	float balance;
	float rent;
	float tax;

	balance = bankBalance(67000);
	rent = bankRent(balance);
	tax = rntTax(balance);
	
	bInfo("Alex", "Scheinder", "AlX.Scheinder@netX.org", "+76 45452");
	printf("\n");
	printf("| Account Balance: %f \n", balance);
	printf("| Rent: %f \n", rent);
	printf("| Tax rent: %f \n", tax);
}

int main()
{
	bankOutPut();	
	return 0;
}
