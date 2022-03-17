#include<iostream>
using namespace std ;

int main()
{
    int lc = 0;
    int ctrl = 0 ;
    int votes[100] = {1,3,5,3,5,2,1,3,4,13,2,4,2,4,1,3,3,5,1,3,2,4,1,4} ;
    
    
    int count[7] = {0,0,0,0,0,0,0};
    for(int i : votes)
    {
        switch(i)
        {
        case 1 : count[1]++;

        case 2 : count[2]++;
        
        case 3 : count[3]++;
        
        case 4 : count[4]++;
    
        case 5 : count[5]++;

        default : count[6]++;
       
        }
    }
    int k = 1;
    for(int j = 1 ; j <= 6 ; j++)
    { 
        cout << "candidate " << j << " got " << count[j] << " votes \n";
    }
    return 0 ;
}