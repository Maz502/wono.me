#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;
int rollDice()
{
	int n;
	n=rand() % 6;
	n=n+1;
	return n;
}

int main(){
	double prob[6]={0};
	 int count[6]={0};
	int n;
	srand(time(NULL));
	for(int i=0;i<50000;i++){
		if(n==1){
			count[0]=count;
		}
		else if(n==2){
			count[1]=count[1]+1;
		}
		else if(n==3){
			count[2]=count[2]+1;
		}
		else if(n==4){
			count[3]=count[3]+1;
		}
		else if(n==5){
			count[4]=count[4]+1;
		}
		else if(n==6){
			count[5]=count[5]+1;
		}
	}
	prob[0]=count[0]/50000.00;
    prob[1]=count[1]/50000.00;
    prob[2]=count[2]/50000.00;
    prob[3]=count[3]/50000.00;
    prob[4]=count[4]/50000.00;
    prob[5]=count[5]/50000.00;
    cout<<endl;
    cout<<"------------------------------------------------------------------------------------------------------"<<endl;
    cout<<setw(20)<<left<<"Dice Value"<<setw(35)<<"Frequency"<<setw(35)<<"Probability\n";
    cout<<endl;
    cout<<"------------------------------------------------------------------------------------------------------"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<endl;
        cout<<setw(20)<<left<<i+1<<setw(35)<<count[i]<<setw(35)<<prob[i]<<endl;
    cout<<"--------------------------------------------------------------------------------------------------"<<endl;
    }
    return 0;
}
