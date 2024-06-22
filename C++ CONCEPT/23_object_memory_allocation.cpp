#include <iostream>
using namespace std;

class shop{
    private:
    int item_id[100];
    int item_price[100];
    int counter;
    public: 
    void in_it_counter(void){ // void means this function taking nothing 
    counter = 0;
    } 
    void set_price(void);
    void display_price(void);
};

void shop :: set_price(void){
    cout<<"Enter ID of your item no "<<counter+1 <<" : ";
    cin>>item_id[counter];
    cout<<"Enter PRICE of your item: ";
    cin>>item_price[counter];
    counter++;
}

void shop :: display_price(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"<--The price of item with id "<<item_id[i]<<" is "<<item_price[i]<<". -->"<<endl;
    }
    
}

int main(){
    
    shop dukaan;
    dukaan.in_it_counter();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.display_price();

    shop kirana_store;
    kirana_store.in_it_counter();
    kirana_store.set_price();
    kirana_store.set_price();
    kirana_store.set_price();
    kirana_store.display_price();
    
    return 0;
}