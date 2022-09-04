//ENCAPSULATION
/*
#include<iostream>
using namespace std;

class student{

    private:    //by default private
    string name;
    int age;
    int height;
public:
    int getage(){
        return this->age;
    }

};
int main(){
    student first;
    cout<<"all are okies"<<endl;
    return 0;
}*/






//INHERITANCE
/*

#include<iostream>
using namespace std;

class human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getage(){
        return this->age;
    }
    void setweight(int w){
         this->weight = w;
    }
};

class male:private human{
    public:
    string colour;
    void running(){
        cout<<"male is running"<<endl;
    }
    int getheight(){
        return this->height;
    }
};


int main(){
    male m1;
    cout<<m1.getheight()<<endl;
    

/*
    male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;

    cout<<object1.colour<<endl;
    object1.running();
    object1.setweight(80);
    cout<<object1.weight<<endl;
    
 
    
    return 0;
}*/





//SINGLE INHERITANCE
/*
#include<iostream>
using namespace std;

    class animal{
        public:
        int weight;
        int age;

        public:
        void speak(){
            cout<<"speaking"<<endl;
        }
        int getage(){
            return this->age;
        }
        int setweight(){
            return this->weight;
        }
    };
    class dog:public animal{
        
    };

int main(){

    dog pet;
    pet.speak();
    cout<<pet.age<<endl;
    cout<<pet.weight<<endl;

    return 0;
}*/





//MULTILEVEL INHERITANCE
/*
#include<iostream>
using namespace std;

    class animal{
        public:
        int weight;
        int age;

        public:
        void speak(){
            cout<<"speaking"<<endl;
        }
        int getage(){
            return this->age;
        }
        int getweight(int w){
            return this->weight = w;
        }
    };
    class dog:public animal{
        
    };
    class labrador:public dog{

    };

int main(){

    labrador pet;
    pet.speak();
    cout<<pet.age<<endl;
    pet.getweight(12);
    cout<<pet.weight<<endl;

    return 0;
}*/





//MULTIPLE INHERITANCE

/*#include<iostream>
using namespace std;

    class animal{
        public:
        int weight;
        int age;

        public:
        void burk(){
            cout<<"burking"<<endl;
        }
        int getage(){
            return this->age;
        }
        int setweight(){
            return this->weight;
        }
    };
    
    class human{
        public:
        string color;
        
        public:
        void speak(){
            cout<<"speaking"<<endl;
        }

    };
    //multiple inheritance
    class hybrid: public animal, public human{

    };
   

int main(){

    hybrid hen;
    hen.speak();
    hen.burk();

    return 0;
}*/





//HIERARCHHICAL INHERITANCE

/*
#include<iostream>
using namespace std;

class a{

    public:
    void function1(){
        cout<<"inside function 1"<<endl;
    }
};
class b:public a{
    public:
    void function2(){
        cout<<"inside function 2"<<endl;
    }
};
class c: public a{
    public:
    void function3(){
        cout<<"inside function 3"<<endl;
    
    }
};

    
int main(){

    a obj1;
    obj1.function1();
    b obj2;
    obj2.function1();
    obj2.function2();
    c obj3;
    obj3.function1();
    obj3.function3();


    
    return 0;
}
*/




//HYBRIDE INHERITANCE



/*
#include<iostream>
using namespace std;


    
int main(){


    
    return 0;
}*/


//POLYMORPHISM

//FUNCTION OVERLOADING

/*
#include<iostream>
using namespace std;

class a {
    public:
    void sayhellow(){
        cout<<"hello shilpi"<<endl;
    }
    int sayhellow(char name){
        cout<<"hello shilpi"<<endl;
        return 2;
    }
    
    void sayhellow(string name){
        cout<<"hello"<<name<<endl;
    }
    
};


int main(){

    a obj1;
    obj1.sayhellow();
    

    return 0;
}*/


//OPERATOR OVERLOADING


/*
#include<iostream>
using namespace std;

class B {
    public:
    int a;
    int b;
    public:
    int add(){
        return a+b;
    }
    void operator+(B &obj){
       int value1=this->a;
        int value2=obj.a;
        cout << "output " << value2 - value1 <<endl;
       cout<<"Hello"<<endl;
    } 
    void operator() (){
        cout<<"Here comes braket "<<this->a<<endl;
    }
};

int main(){
    B obj1,obj2;
    obj1.a=4;
    obj2.a=7;

    obj1+obj2;
    obj1();

    return 0;
}*/



//RUNTIME POLYMORPHISM



#include<iostream>
using namespace std;

    class animal{
        public:
        void speak(){
            cout<<"speaking"<<endl;
        }
    };

    class dog:public animal{
        public:
        void speak(){
            cout<<"barking"<<endl;
        }

    };

int main(){

dog pet;
pet.speak();

    return 0;
}


   