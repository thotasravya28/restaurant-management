#include<iostream>
#include<vector>
using namespace std;

class restaurant
{
    public:
    void welcome()
    {
        cout<<"welcome to ASKVY restaurant";
    }
    void menu()
    {
        cout<<"---------------------------------- MENU OF ASKVY ------------------------------------" <<endl;
   
      cout<<"_____________________________________________________________________________________"<<endl;
      cout<<"VEGETARIAN :"<<endl;
      cout<<"     Starters-                      (in rupees) "<<endl;
      cout<<"       (1) Chilli panner         -   100  "<<endl;
      cout<<"       (2) Mushroom Garlic       -    95 "<<endl;
      cout<<"       (3) Veg. Manchuria        -    80  "<<endl;
      cout<<"     Main Course-                   (in rupees)"<<endl;
      cout<<"       (4) Veg. Pulav            -   120  "<<endl;
      cout<<"       (5) Panneer Biryani       -   140  "<<endl;
      cout<<"       (6) Panneer Butter Masala -   110  "<<endl<<endl;
      cout<<"                    *-*-*                 "<<endl<<endl;
      cout<<"NON VEGETARIAN :"<<endl;
      cout<<"     Starters-                      (in rupees) "<<endl;
      cout<<"       (7) Chill chicken         -   115   "<<endl;
      cout<<"       (8) Chicken Manchuria     -   115  "<<endl;
      cout<<"       (9) EGG 65                -    80  "<<endl;
      cout<<"     Main Course-                   (in rupees) "<<endl;
      cout<<"       (10) Chicken Biryani      -   150  "<<endl;
      cout<<"       (11) Chicken Tandoori     -   140 "<<endl;
      cout<<"       (12) Mutton Biryani       -   200  "<<endl<<endl;
      cout<<"                    *-*-*                 "<<endl<<endl;
      cout<<"DESSERT :                           (in rupees)"<<endl;
      cout<<"       (13) Gulab Jamun          -    50  "<<endl;
      cout<<"       (14) Qubani ka meetha     -    75  "<<endl;
      cout<<"       (15) Double ka meetha     -    60  "<<endl;
      cout<<"_____________________________________________________________________________________"<<endl;
    }
};

class customer
{
    public:
    vector <int> rates,order;
    int o;
    customer()
    {
        rates[1]=100;
        rates[2]=95;
        rates[3]=80;
        rates[4]=120;
        rates[5]=140;
        rates[6]=110;
        rates[7]=115;
        rates[8]=115;
        rates[9]=80;
        rates[10]=150;
        rates[11]=140;
        rates[12]=200;
        rates[13]=50;
        rates[14]=75;
        rates[15]=60;
    }
   
    void add()
    {
        while(1)
        {
            cout<<"enter item index to add, -1 to stop";
            cin>>o;
            if(o==-1)
            {
                break;
            }
            else
            {
                order.push_back(o);
            }
        }
    }
   
    /*void dee()
    {
        while(1)
        {
            cout<<"enter item index to delete, -1 to stop";
            cin>>o;
            if(o==-1)
            {
                break;
            }
            else
            {
                remove(order.begin(),order.end(),o);
            }
        }
    }*/
};

class bill : public customer
{
    public:
    int b;
    float g,grand;
   
    bill()
    {
        b=0;
        g=0;
        grand=0;
    }
   
    void total()
    {
        for(int i=1;i<=order.size();i++)
        {
            b+=(rates[order[i]]);
        }
        cout<<b<<endl;
        g=b/20;
        cout<<g<<endl;
        grand=g+b;
        cout<<grand<<endl;
    }
   
    void thanks()
    {
        cout<<"Thank you for visiting ASKVY restaurant!!!";
    }
};

int main()
{
    restaurant r;
    customer c;
    bill b;
    r.welcome();
    r.menu();
    c.add();
    //c.dee();
    b.total();
    b.thanks();
    return 0;
}
