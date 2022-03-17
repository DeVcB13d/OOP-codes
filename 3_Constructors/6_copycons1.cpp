
//copy constructors
class integer
{
    int m,n ;
    public:
        integer(){m=0;n=0;}
        integer(int a ,int b){
            m = a ;
            n = b ;
        }
        //copy initialisation
        integer (const integer &i){ 
            //I2 should copy to i , this would call the copy constructor again
            //To prvent this we need to pass reference instead of integer
            //references can be used to change original object values
            // to prevent this we use const argument
            m = i.m ;
            n = i.n ;
        }
};

