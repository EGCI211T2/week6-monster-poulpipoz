#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:
	void Attack(monster &);
	void heal();
	monster(string="Anonymous", int=1,int=1);
	~monster();
	bool operator>(monster &A);
	void operator+=(int n);
	void operator--();
	void display();
};

void monster::display(){
	cout<<"Name :"<<name<<endl<<"HP :"<<hp<<endl<<"Potions :"<<potion<<endl;
}

monster::monster(string n, int h, int pot){
	name = n;
	hp = h;
	potion = pot;
	cout<<"Monster "<<name<<" is here."<<endl;
}

monster::~monster(){
	cout<<name<<" is gone."<<endl;
}

void monster::Attack(monster &){

}

void monster::heal(){

}

bool monster::operator>(monster &A){
	return hp > A.hp;
} 

void monster::operator+=(int amount){
	hp += amount;
} 

void monster::operator--(){
	hp--;
}

#endif