#include<bits/stdc++.h>
using namespace std;
#define DELAY 128000
struct mytime{
	int hr;
	int min;
	int sec;
};
void display(struct mytime *t);
void update (struct mytime *t);
void delay (void);
int main()
{
	struct mytime sys;
	sys.hr=0;
	sys.min=0;
	sys.sec=0;
	for(int i=0;i<90;i++){
		update(&sys);
		display(&sys);
	}
	return 0;
}
	void update(struct mytime *t){
		t->sec++;
		if(t->sec==60)
		{
			t->sec=0;
			t->min++;}
		if(t->min==60)
		{
			t->min=0;
			t->hr++;}
			
			if(t->hr==24)
			t->hr=0;
			delay();
		}
		void display(struct mytime *t){
			cout<<t->hr<<" ";
			cout<<t->min<<" ";
			cout<<t->sec<<" "<<endl;
		}
										
		
		void delay(void)
		{long int t;
		for(t=1;t<DELAY;++t);
	}
	
