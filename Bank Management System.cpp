#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

using namespace std;
void savingaccount();
void Benefits();
void Features();
void onlinedeposit();
void onlinewithdrow();
void PrivacyPolicy();
class Bank{

	private:

	    int total;

	    string id;

	    struct person{

	    	string name,ID,address;

	    	int contact,cash;

		}person[100];

	public:

		Bank(){

			total=0;

		}

		void choice();

		void perData();

		void show();

		void update();

		void search();

		void transactions();

		void del();

};

int main(){
    int i;
    system("Color A1");
    HANDLE console_color;
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(stdout,FOREGROUND_RED |BACKGROUND_RED);
    cout<<"\n----------------------------------------";
    cout<<"\n\n\n Welcome to Kohinor Bank";
    cout<<"\n----------------------------------------";
    cout<<"\n\n Press 1: To learning information about this bank";
    cout<<"\n\n Press 2: To become our coustomer";
    cin>>i;

    if(i==1)
    {
      cout<<"\n------Bank Information and Benefits to consumer-------------";
  int ch;
    do
    {
        cout<<"\n------Adventeges Saving account------\n";
        cout<<"Press 1 for Saving Account \n";
        cout<<" Press 2 for Benefits to customer \n";
        cout<<" Press  3 for Features of our Bank \n";
        cout<<" Press  4 for Online Deposite in our Bank \n";
        cout<<" Press  5 for Online withdrow in our Bank \n";
        cout<<" Press  6 for Privarcy policy of our Bank \n";
        cout<<"Preass 7 to Exit\n";
        scanf("%d", &ch);
        switch ( ch)
        {
        case 1:
            savingaccount();
            break;
        case 2:
            Benefits();
            break;
        case 3:
            Features();
            break;
        case 4:
            onlinedeposit();
            break;
        case 5:
            onlinewithdrow();
            break;
        case 6:
            PrivacyPolicy();
            break;
        case 7:
            break;
        default :
            cout<<"Invalid choice";
        }
    }
    while (ch!=7);
    }
    else{
	Bank b;

	b.choice();
    }

	return 0;

}

void Bank::choice(){

	char ch;

	while(1){

	cout<<"\n\nPRESS..!!"<<endl;

	cout<<"1. Create new account"<<endl;

	cout<<"2. View customers list"<<endl;

	cout<<"3. Update information of existing account"<<endl;

	cout<<"4. Check the details of an existing account"<<endl;

	cout<<"5. For transactions"<<endl;

	cout<<"6. Remove existing account"<<endl;

	cout<<"7. Exit"<<endl;

	ch=getch();

	system("CLS");

	switch(ch){

		case '1':

			Bank::perData();

			break;

		case '2':

			if(total==0){

				cout<<"No data is entered"<<endl;

			}else{

			Bank::show();

		   }

			break;

		case '3':

			if(total==0)

			cout<<"No data is entered"<<endl;

			else

			Bank::update();

			break;

		case '4':

			if(total==0)

			cout<<"No data is entered"<<endl;

			else

			Bank::search();

			break;

		case '5':

			if(total==0)

			cout<<"No data is entered"<<endl;

			else

			Bank::transactions();

			break;

		case '6':

			if(total==0)

			cout<<"No data is entered"<<endl;

			else

			Bank::del();

			break;

		case '7':

			exit(0);

			break;

		default:

			cout<<"Invalid input"<<endl;

			break;

	}

    }

}

void Bank::perData(){

	cout<<"Enter data of person "<<total+1<<endl;

	cout<<"Enter name: ";

	cin>>person[total].name;

	cout<<"ID: ";

	cin>>person[total].ID;

	cout<<"Address: ";

	cin>>person[total].address;

	cout<<"Contact: ";

	cin>>person[total].contact;

	cout<<"Total Cash: ";

	cin>>person[total].cash;

	total++;

}

void Bank::show(){

	for(int i=0;i<total;i++){

		cout<<"Data of person "<<i+1<<endl;

		cout<<"Name: "<<person[i].name<<endl;

		cout<<"ID: "<<person[i].ID<<endl;

		cout<<"Address: "<<person[i].address<<endl;

		cout<<"Contact: "<<person[i].contact<<endl;

		cout<<"Cash: "<<person[i].cash<<endl;

	}

}

void Bank::update(){

	cout<<"Enter id of student those data you want to update"<<endl;

	cin>>id;

	for(int i=0;i<total;i++){

		if(id==person[i].ID){

		cout<<"Previous data"<<endl;

		cout<<"Data of person "<<i+1<<endl;

		cout<<"Name: "<<person[i].name<<endl;

		cout<<"ID: "<<person[i].ID<<endl;

		cout<<"Address: "<<person[i].address<<endl;

		cout<<"Contact: "<<person[i].contact<<endl;

		cout<<"Cash: "<<person[i].cash<<endl;

		cout<<"\nEnter new data"<<endl;

		cout<<"Enter name: ";

	cin>>person[i].name;

	cout<<"ID: ";

	cin>>person[i].ID;

	cout<<"Address: ";

	cin>>person[i].address;

	cout<<"Contact: ";

	cin>>person[i].contact;

	cout<<"Total Cash: ";

	cin>>person[i].cash;

	break;

		}

		if(i==total-1){

			cout<<"No such record found"<<endl;

		}

	}

}

void Bank::search(){

cout<<"Enter id of student those data you want to search"<<endl;

cin>>id;

for(int i=0;i<total;i++){

	if(id==person[i].ID){

		cout<<"Name: "<<person[i].name<<endl;

		cout<<"ID: "<<person[i].ID<<endl;

		cout<<"Address: "<<person[i].address<<endl;

		cout<<"Contact: "<<person[i].contact<<endl;

		cout<<"Cash: "<<person[i].cash<<endl;

		break;

	}

	if(i==total-1){

		cout<<"No such record found"<<endl;

	}

}

}

void Bank::transactions(){

	int cash;

	char ch;

	cout<<"Enter id of student those data you want to transaction"<<endl;

     cin>>id;

     for(int i=0;i<total;i++){

     	if(id==person[i].ID){

     		cout<<"Name: "<<person[i].name<<endl;

     	     cout<<"Address: "<<person[i].address<<endl;

		     cout<<"Contact: "<<person[i].contact<<endl;

		     cout<<"\nExisting Cash "<<person[i].cash<<endl;

		     cout<<"Press 1 to deposit"<<endl;

		     cout<<"Press 2 to withdraw"<<endl;

		     ch=getch();

		     switch(ch){

		     	case '1':

		     		cout<<"How much cash you want to deposit??"<<endl;

		     		cin>>cash;

		     		person[i].cash+=cash;

		     		cout<<"Your new cash is "<<person[i].cash<<endl;

		     		break;

		     	case '2':

		     		back:

		     		cout<<"How much cash you want to withdraw??"<<endl;

		     		cin>>cash;

		     		if(cash>person[i].cash){

		     			cout<<"Your existing cash is just "<<person[i].cash<<endl;

		     			Sleep(3000);

		     			goto back;

					 }

					 person[i].cash-=cash;

					 cout<<"Your new cash is "<<person[i].cash<<endl;

					 break;

				default:

					cout<<"Invalid input"<<endl;

					break;

			 }

			 break;

		 }

		 if(i==total-1){

		 	cout<<"No such record found"<<endl;

		 }

	 }

}

void Bank::del(){

	char ch;

	cout<<"Press 1 to remove specific record"<<endl;

	cout<<"Press 2 to remove full record"<<endl;

	ch=getch();

	switch(ch){

		case '1':

	cout<<"Enter id of student those data you want to remove"<<endl;

     cin>>id;

     for(int i=0;i<total;i++){

     	if(id==person[i].ID){

     		for(int j=i;j<total;j++){

     		person[j].name=person[j+1].name;

     		person[j].ID=person[j+1].ID;

     		person[j].address=person[j+1].address;

     		person[j].contact=person[j+1].contact;

     		person[j].cash=person[j+1].cash;

     		total--;

     		cout<<"Your required data is deleted"<<endl;

     		break;

			 }

		 }

		 if(i=total-1){

		cout<<"No such record found"<<endl;

		 }

	 }

	 break;

	 case '2':

	 	total=0;

	 	cout<<"All record is deleted"<<endl;

	 	break;

	default:

		cout<<"Invalid Input"<<endl;

		break;

	}

}

void savingaccount()
{
    cout<<"Here are the benefits of having a savings account";
cout<<"Liquidity\nOne of the benefits of opening a savings account is that it offers you liquidity..\nSafety of funds\nA savings bank account is a safe avenue to keep your funds rather than keeping it on hand where it is susceptible to get lost or stolen. Another important point to remember is that each account is insured by the Deposit Insurance and Credit Guarantee Corporation for up to Rs. 1 lakh.";
cout<<"Additional earnings because of auto sweep facility\nMost banks have an auto sweep facility where funds above a particular limit are automatically converted into a fixed deposit. These funds earn interest at fixed deposit rates as compared to regular savings rate. By enabling this feature, the depositor can get full benefits of keeping money in a savings account.\n\nAutomatic debits for payments";
cout<<"Banks allow customers to set up automatic debits for utility payments and bills. In such cases, the utility company or telecom company raises a demand with the bank and the bank automatically debits the bank account. This is a convenient way to make payments on time. When you take a loan, you can set up an auto debit facility from your savings account where the installment will get debited from the savings bank account and";
cout<<"Auto credits for investment incomes\nOne of the benefits of keeping money in a savings account is that it can be linked to a demat account and other investments. In such cases, the income from dividends and interest gets automatically credited to the bank account. This convenience ensures all incomes get pooled in one account.";
cout<<"Convenient fund transfers\nIt is extremely simple to make fund transfers from a savings account. There are different modes of a fund transfer which are easily available in both internet banking and mobile banking. A savings bank account holder can transfer funds using NEFT, RTGS, IMPS and UPI.";
cout<<"Joint account\nThere are benefits of a joint savings account. Having a joint account provides greater flexibility since all the joint holders can sign cheques and operate the bank account. It makes it easy to track spends and incomes. A joint account can be maintained for household incomes and expenses which is excellent for financial planning.\n\n\n";
}
void  Benefits()
{
    cout<<"While a savings account has a lot of utility, it only earns interest at 3.5% to 6% per annum. In such a case, are there any benefits of having a savings account? The answer is yes. There are many benefits of opening a savings account. Let us consider them.\n\n\n";
}
void  Features()
{
    cout<<"Overdraft Facility\nMaximum – Rs 50000\nDiscounts on locker rentals, demat AMC, debit card issuance and renewal fee and issuance fee of prepaid cards.\nFree remittance facility on RTGS/NEFT/IMPS.\nWaiver on processing charges on retail loans.";
cout<<"Discounts on the issuance of DD/BC\nFree lifetime Easy variant of Credit card subject to eligibility criterion of minimum income of 25000 /month and signing of auto debit mandate for debit of minimum due amount on card from salary account.\nComplementary Air Accidental Insurance of 15 lac and other accidental insurance cover of 5 lacs (Insurance linked to credit card)";
cout<<"Debit Card Variant & Annual Fee\nFree Baroda Rupay Classic Debit Card for first year, thereafter chargeable @ Rs 150+ applicable taxes per year.\nDaily Cash Withdrawal limit Rs 25000 and Online Purchase limit is Rs 50000.";
cout<<"Inbuilt Accidental Insurance of Rs 1 lac.\nAttractive offers linked to Debit card cards.\nRelationship Managers available on phone.\n\n\n";
}
void onlinedeposit()
{cout<<"How to open Bank of Baroda Fixed Deposit online\nFollow the steps given :\n";
cout<<"Step 1: Visit the official website of Bank of Baroda\nStep 2: Log into your net banking account\nStep 3: From the menu, choose the option for ''Fixed Deposit''\nStep 4: Select the category of FD that you wish to open";
cout<<"Step 5: Enter the amount that you wish to invest in the deposit\nStep 6: If you are a senior citizen, select that option\nStep 7: Choose the tenure and frequency of interest payout\nStep 8: Click on Submit";
cout<<"Before you apply to open an FD with Bank of Baroda, make sure you have the following:\n\nA savings account with Bank of Baroda\nnternet banking activated with log-in credentials\nMobile banking account (if you want to manage your FD through your smartphone)";
     cout<<"How to open Bank of Baroda Fixed Deposit online";
cout<<"Follow the steps given below:\nStep 1: Visit the official website of Bank of Baroda\nStep 2: Log into your net banking account\nStep 3: From the menu, choose the option for ''Fixed Deposit''\nStep 4: Select the category of FD that you wish to open\nStep 5: Enter the amount that you wish to invest in the deposit";
cout<<"Additional earnings because of auto sweep facility\nMost banks have an auto sweep facility where funds above a particular limit are automatically converted into a fixed deposit. These funds earn interest at fixed deposit rates as compared to regular savings rate. By enabling this feature, the depositor can get full benefits of keeping money in a savings account.\n\nAutomatic debits for payments";
cout<<"Banks allow customers to set up automatic debits for utility payments and bills. In such cases, the utility company or telecom company raises a demand with the bank and the bank automatically debits the bank account. This is a convenient way to make payments on time. When you take a loan, you can set up an auto debit facility from your savings account where the installment will get debited from the savings bank account and";
cout<<"Auto credits for investment incomes\nOne of the benefits of keeping money in a savings account is that it can be linked to a demat account and other investments. In such cases, the income from dividends and interest gets automatically credited to the bank account. This convenience ensures all incomes get pooled in one account.";
cout<<"Convenient fund transfers\nIt is extremely simple to make fund transfers from a savings account. There are different modes of a fund transfer which are easily available in both internet banking and mobile banking. A savings bank account holder can transfer funds using NEFT, RTGS, IMPS and UPI.";
cout<<"Joint account\nThere are benefits of a joint savings account. Having a joint account provides greater flexibility since all the joint holders can sign cheques and operate the bank account. It makes it easy to track spends and incomes. A joint account can be maintained for household incomes and expenses which is excellent for financial planning.\n\n\n";
}

void onlinewithdrow()
{cout<<"How to withdraw cash using a Bank of Baroda credit card?\nThe procedure to withdraw cash using your Bank of Baroda credit card is very simple. It is similar to withdrawing cash using a debit card. Follow the steps below to withdraw cash using your BOB credit card:";
cout<<"Visit any bank’s ATM preferably Bank of Baroda Bank ATM\nInsert your Bank of Baroda credit card in the slot provided\nEnter your credit card PIN";
cout<<"Select your preferred language to proceed";
cout<<"Choose “Cash Withdrawal” option\nEnter the amount you wish to withdraw and confirm the transaction\n\n\n";
}
void PrivacyPolicy()
{
   cout<<" We collect information in different ways\nWe collect information directly from you when you fill up a form on our website. We also collect information if you post a comment on our website or get in touch with us via phone or email.";
cout<<"We collect information from you passively by using tracking tools. This helps in collecting information about your usage of our website.\nWe collect your information from third parties. For example, if you use an integrated social media feature on our website, the respective third-party social media site will provide us some information about you. This could include your name and email address.";
cout<<"We won't ask you to supply personal information publicly over Facebook, Twitter, or any other social media platform or any public site in internet.";

    cout<<"How to withdraw cash using a Bank of Baroda credit card?\nThe procedure to withdraw cash using your Bank of Baroda credit card is very simple. It is similar to withdrawing cash using a debit card. Follow the steps below to withdraw cash using your BOB credit card:";
    cout<<"Visit any bank’s ATM preferably Bank of Baroda Bank ATM\n\n\n";
}

