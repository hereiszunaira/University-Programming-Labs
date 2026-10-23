#include<iostream>
#include<iomanip>
#include<vector> 
using namespace std;
class circle{
	private:
		double radius;
		double pi =3.1415;
		
	public:
		circle(){
			radius=0.0;
		}
		void setRadius(double r){
			radius = r;
		}
		double getRadius(){
			return radius;
		}
		double getArea(){
			return pi*radius*radius;
		}
		double getDiameter(){
			return 2*radius;
		}
		double getCircumference(){
			return pi*2*radius;
		}
};
int main(){
	int n;
	cout<<"Enter the number of circles :";
	cin>>n;
	
	if(n<=0){
		return 0;
	}
	double r[n];
		for(int i =1 ; i<=n ;i++){
			cout<<"Enter the radius :";
			cin>>r[i];
		}
	circle c[n];
	for(int i=0;i<=n;i++){
		c[i].setRadius(r[i]);
	}
	circle c1;
	c1.setRadius(5);
	for(int i=0;i<=n;i++){
		cout<<"\nCircle"<<i+1;
		cout<<"Radius :"<<c[i].getRadius()<<endl;
		cout<<"Area :"<<c[i].getArea()<<endl;
		cout<<"Diamter :"<<c[i].getDiameter()<<endl;
		cout<<"Circumference :"<<c[i].getCircumference()<<endl;
	}
	return 0;
}
	



























