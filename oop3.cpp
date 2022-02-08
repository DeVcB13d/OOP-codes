#include <iostream>
using namespace std ;

const int m = 100;

class item{
    int itemcode[m];
    float itemprice[m];
    int count;
    public:
       void setcount(void){
            count = 0 ;
        }
        void getitem(void){
            cout << "Enter item code :" ;
            cin >> itemcode[count];
            cout << "Enter its price :" ;
            cin >> itemprice[count];
            cout <<"\n\n";
            count ++ ;
        }
        void displaysum(void);
        void remove(int code);
        void displayitems(void);
};

void item::displaysum(){
    int sum = 0;
    for (int i = 0  ; i < count ;i++){
        int e = itemprice[i];
        sum+=e;
    }
    cout << "The total sum is " << sum << endl;
}

void item::remove(int code){
    int c = 0;
    for(int i = 0; i < count ; i++ ){
        if(itemcode[i] == code) {
            for(int j = i ; j < m ; j++){
                itemcode[j] = itemcode[j+1] ;
                itemprice[j] = itemprice[j+1];
            }
            cout << code << " has been deleted " <<"\n";
            c++;
        }
    }
    if (c == 0){cout << code << " does not exist"<<'\n';}
    
}

void item::displayitems(void){
    cout << "CODE" << "\t" << "PRICE" <<"\n";
    for(int i = 0; i < count; i++){
        cout << itemcode[i]<<"\t"<<itemprice[i]<<"\n" ;
    }
}


int main()
{
    item A ;
    A.setcount();
    int c ;
    cout << "Enter the number of items" ;
    cin >> c ;
    for(int k = 0 ; k < c ; k++){
        A.getitem();
    }
    A.displaysum();
    A.displayitems();
    int entry ;
    cout << "ENTRY TO DELETE : "  ;
    cin >> entry ;
    A.remove(entry);
    A.displayitems();
    return 0 ;
}