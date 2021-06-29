//Writing a program to Create a Candy Machine, in that we are going to sell the Candy, Chips, Gum and Cookies.
#include<iostream>
using namespace std;
class candy_machine{
    public:
        int candy, chips, gum, cookies, select, qty, n;
        int p_bill /*product for each bill */, total_bill;
        candy_machine(){
            candy = 0 ;
            chips = 0 ;
            gum = 0 ;
            cookies = 0;
            total_bill = 0;
            p_bill = 0;
        }
        void order(){
            cout<<"\n Avaliable Products are: "<<endl<< "1. Candy"<<endl<< "2. Chips"<<endl<< "3. gum"<<endl<< "4. Cookies"<<endl; //Displaying Avaliable Products.

            cout<<"\n How many time do you want to Purchase a product: ";
            cin>>n;
            for (int i = 1 ; i <= n ; i++){
            
            cout<<"\n Please Select the Option of the Product id to be Purchased: "<<endl;
            cin>>select;

            switch (select)
            {

            case 1: cout<<"\n The price of the Candy is: 50 Rupees. " << endl<< " How much Quantity do you want for Candy: "; // Displayed Ordered Quantity Product with Quantity.
                    cin>>qty;
                    
                    cout<<"\n you choose the Quantity for the candy is: "<<qty;

                    p_bill = 50 * qty;

                    cout<<"\n Total bill for your Candy is: "<<p_bill;  //Produnt Wise Bills.
                    break;

            case 2: cout<<"\n The price of the Chips: 48 Rupees." << endl << " How much Quantity do you want for Chips: ";
                    cin>>qty;
                    
                    cout<<"\n you choose the Quantity for the candy is: "<<qty<<endl;

                    p_bill = 48 * qty;

                    cout<<"\n Total bill for your Chips is: " << p_bill<<endl; //Second product Bill.
                    break;

            case 3: cout<<"\n The price of the Gum is: 78 Rupees. " << endl << " How much Quantity do you want for Gum: ";
                    cin>>qty;

                    cout<<"\n you choose the Quantity for the candy is: "<<qty<<endl;

                    p_bill = 78 * qty;

                    cout<<"\n Total bill for your Gum is: "<<p_bill<<endl;  //Third Product Bill.
                    break;
            
            case 4: cout<<"\n The price of the Cookies is: 100 Rupees " << endl << " How much Quantity do you want for Cookies: ";
                    cin>>qty;

                    cout<<"\n you choose the Quantity for the candy is: "<<qty<<endl;

                    p_bill = 100 * qty;

                    cout<<"\n Total bill for your Cookie is: "<<p_bill<<endl;   //Fourth Product Bill.
                    break;
            
            default: cout<<"\n Please Select Valid Option!!!";
                break;
                }
                total_bill = total_bill + p_bill;
            }
            cout<<"\n The Total bill for you Purchased Products are: "<<total_bill; //Total Billing After buying the Products.
            
        }

};

int main(){
    candy_machine cm;   //Object of the Candy Machine.

    cm.order();
    return 0;   //End of the program.
}
