class C{
	public: 
		C(char *s="",int i=0,double d=1){
			strcpy(dataMember1,s);
			dataMemeber2=i;
			dataMemeber3=d;
		}
		
		void memberFunction1(){
			cout<<dataMember1<<''<dataMember2<<''<<dataMemeber3<<endl;
		}
		
		void memberFunction2(int i=0,char *s="unknown"){
			dataMemeber2=i;
			cout<<i<<"received from "<<s<<endl;
			
		}
		
	protected:
		char dataMember1[20];
		int dataMemeber2;
		double dataMemeber3;
};

C object1("object1",100,200),object2("object2"),object3;//C is a class ; object1~3 

object1.memberFunction1();
object1.memberFunction2(123);
object1.memberFunction2(123,"object1");

class intClass{
	int storage[50];
};

class floatClass{
	float storage[50];
};

template<class genType>
class genclass{
	genType storage[50];
};

genclass<int> intObject;

genclass<float> floatObject;

template<class genType, int size=50>
class genClass{
	genType storage[size];
	
};

genClass<int> intObject1;
genClass<int,100> intObject2;
genClass<float,100> floatObject;

template<class genType>
void swap(genType& e11, genType&, e12){
	genType tmp=e11;e11=e12;e12=tmp;
}

