#include <iostream>
int volume(int height, int width, int length);
using namespace std;


int main() {

 int box1Height, box1Width, box1Length;
 int box2Height, box2Width, box2Length;
 int box3Height, box3Width, box3Length;
 int totalVolume;

 cout << "Enter Box 1 Height : ";
 cin >> box1Height;
 cout << "Enter Box 1 Width : ";
 cin >> box1Width;
 cout << "Enter Box 1 Length : ";
 cin >> box1Length;
 
 cout<<endl;

 cout << "Enter Box 2 Height : ";
 cin >> box2Height;
 cout << "Enter Box 2 Width : ";
 cin >> box2Width;
 cout << "Enter Box 2 Length : ";
 cin >> box2Length;


cout<<endl;

 cout << "Enter Box 3 Height : ";
 cin >> box3Height;
 cout << "Enter Box 3 Width : ";
 cin >> box3Width;
 cout << "Enter Box 3 Length : ";
 cin >> box3Length;


 totalVolume = volume(box1Height, box1Width, box1Length)+ volume(box2Height, box2Width, box2Length);

 cout<<"\t"
  << "Volume of Box is " << totalVolume << endl;

 return 0;
}
int volume ( int height, int width, int length){
	int total;
	total =(height+width+length);
	return total;
}