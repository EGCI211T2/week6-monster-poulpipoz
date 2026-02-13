#ifndef thanos_h
#define thanos_h

class thanos {
private:
	int stones;
	int hp; 
public:
	/* constructor and destructor */
	thanos(int stones = 0, int hp);
	~thanos();
	void snap_finger(monster[], int n); 
	// show all hps
	void display_hps(monster[], int n);
	// clear half of monster hp, if stone =6
	void Attack(monster[], int n);
	void operator++(); // increase the stone;
};

thanos::thanos(int s = 0, int h)
{
	stones = s;
	hp = h;
}

thanos::~thanos(int s = 0, int h)
{
	cout<<"Thanos is gone."<<endl;
}

void thanos::snap_finger(monster[], int n)
{
	
}

void thanos::display_hps(monster[], int n)
{
	for(int i = 0; i < n; i++){
		cout<<"Monster "<<i<<" has "<<monster[i].hp<<" HP."<<endl;
	}
}

void thanos::operator++(){
	if(stones < 6) stones++;
}

void thanos::Attack(monster[], int n){
	if(stones == 6){
		
	}
}


#endif
