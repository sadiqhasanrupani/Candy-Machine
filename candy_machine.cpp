#include<iostream>
using namespace std;
class candy_machine{
    public:
        int candy, chips, gum, cookies, select, qty, n;
        int candy_p_bill, chips_p_bill, gum_p_bill, cookie_p_bill , total_bill , candy_qty, chips_qty, gum_qty, cookie_qty;

        candy_machine(){
            candy = 0 ;
            chips = 0 ; 
            gum = 0 ;
            cookies = 0 ;
            total_bill = 0 ;
            candy_qty = 0;
            chips_qty = 0;
            gum_qty = 0;
            cookie_qty = 0;
            candy_p_bill = 0;
            chips_p_bill = 0;
            gum_p_bill =0;
            cookie_p_bill = 0;
        }

        void ava_product();
        void order_product();
        void display_goods();
        void total_product_bill();
};

void candy_machine :: ava_product(){
    cout<<"\n Avaliable Products are: "<<endl<< " 1. Candy" << endl<< " 2. Chips"<<endl<< " 3. Gum"<<endl<<" 4. Cookies."<<endl;

}

void candy_machine :: order_product(){
    cout<<"\n How many times do you want to Purchase a product: ";
    cin>>n;

    for (int i = 1; i <= n ; i++){
        cout<<"\n Please Select the Option of the Product Number to be Purchased: ";
        cin>>select;

    switch(select){
        case 1:
            cout<<"\n The price of the Candy is 45 " <<endl<<" So How much Quantity do you want for this Candy? "<<endl<< " -> ";
            cin>>candy_qty;

            candy_p_bill = 45 * candy_qty;

            break;
        case 2:
            cout<<"\n The Price of the Chips is 89 "<<endl<<" So How much Quantity do you want for this Chips? "<<endl<<" -> ";
            cin>>chips_qty;

            chips_p_bill = 89 * chips_qty;
            break;

        case 3:
            cout<<"\n The Price of the Gum is 87 "<<endl<<" So How much Quantity do you wnat for this Gum? "<<endl<<" -> ";
            cin>>gum_qty;

            gum_p_bill = 87 * gum_qty;
            break;

        case 4:
            cout<<"\n The Price of the Cookies is 100 "<<endl<< " So How much Quantity do you want for this Cookies? "<<endl<< " -> ";
            cin>>cookie_qty;

            cookie_p_bill = 100 * cookie_qty;
            break;
        
        default:
            cout<<"\n There are no such Options, Please Try Again.";
            break;
        }
    }
}
void candy_machine :: display_goods(){
    cout<<"\n QTY \t\t\t PRICE \t\t\t DESCRIPTION \t\t\t\t\t\t TOTAL"<<endl;

    if(candy_qty > 0){
    cout<<"\n "<<candy_qty<<"  \t\t\t 45 \t\t\t Candy \t\t\t\t\t\t\t "<<candy_p_bill;
    }
    if(chips_qty > 0){
        cout<<"\n "<<chips_qty<<" \t\t\t 89 \t\t\t Chips \t\t\t\t\t\t\t "<<chips_p_bill;
    }
    if(gum_qty > 0){
        cout<<"\n "<<gum_qty<<" \t\t\t 87 \t\t\t Gum \t\t\t\t\t\t\t "<<gum_p_bill;
    }
    if(cookie_qty > 0){
        cout<<"\n "<<cookie_qty <<" \t\t\t 100 \t\t\t Cookie \t\t\t\t\t\t "<<cookie_p_bill<<endl;
    }
    cout<<"\n Total Purchase \t\t\t\t\t\t\t\t\t\t\t "<<total_bill;
}

void candy_machine :: total_product_bill(){
    total_bill = candy_p_bill + chips_p_bill + gum_p_bill + cookie_p_bill;
}

int main(){
    candy_machine cm;
    cm.ava_product();
    cm.order_product();
    cm.total_product_bill();
    cm.display_goods();

    cout<<endl<<" \n\n\t\t\t\t\t\t Thanks For your Purchase :)";
    return 0;
}
