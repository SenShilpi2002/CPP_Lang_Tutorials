#include<iostream>
#include<cstring>
using namespace std;


    class hero{
     private:
    int health;
    public:
    char *name;
    int level;


      hero(){
         cout<<"Constructor called"<<endl;
         name = new char[100];
      }
      //COPY CONSTUCTOR
      
      hero(hero & temp){
         cout<<"copy constructor called"<<endl;
         this->health=temp.health;
         this->level=temp.level;
      }



      //parameterised constructor
      
      hero(int health){
         //cout<<"this->"<<this<<endl;
         this->health=health;
      }
      hero(int health , int level){
         //cout<<"this->"<<this<<endl;
         this->health=health;
         this->level=level;
      }
      
      void print(){
         cout<<" [ "<<"name : "<<this->name<<" , ";
         cout<<"health :  "<<this->health<<" , ";
         cout<<"level : "<<this->level<<" ] ";
         cout<<endl;
      }
     
     int gethealth(){
        return health;
     }
     int getlevel(){
        return level;
     }
     void sethealth(int h){
        health=h;
     }
     void setlevel(int){
        level=10;

     }

     void setname(char name[]){
      strcpy(this->name,name);
     }

     //destructor
     ~hero(){
      cout<<"destructor called"<<endl;
     }
};

int main(){
   hero a;
   //dynamically
   hero *b=new hero();  //(we have to call destructor manually for dynamically allocation)
   delete b;

   /*
   hero h1;
   h1.sethealth(112);
   h1.setlevel(100);
   char name[9]="shilpi";
   h1.setname(name);

   h1.print();
   */

   //COPY CONSTRUCTOR

   /*
   hero panna(70,10);
   panna.print();
  
  hero shilpi(panna);
  shilpi.print();
*/
   /*
    //static way
    hero a;
    a.level=50;
    a.sethealth(80);
    cout<<"level is : "<<a.level<<endl;
    cout<<"health is : "<<a.gethealth()<<endl;
/*   

    hero lucifer;
    lucifer.sethealth(80);
    //lucifer.health=20;
    lucifer.level=10;
    cout<<"size of lucifer : "<<sizeof(lucifer)<<endl;
    cout<<"health is : "<<lucifer.gethealth()<<endl;
    cout<<"lucifer level is: "<<lucifer.getlevel()<<endl;
    
*/
    //dynamic way
    /*
    hero *b=new hero;
    b->setlevel(10);
    b->sethealth(100);
    cout<<"level is : "<<(*b).level<<endl;
    cout<<"level is : "<<b->gethealth()<<endl;
   */
  
 //statically

 /*
  hero lucifer(70);
  hero raone(700 ,500);
  lucifer.print();
  //dynamically
  hero *h=new hero;
   h->print();
  hero jibon(1000 , 200);
  jibon.print();
  }
*/ 
   return 0;
}
   