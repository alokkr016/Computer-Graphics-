#include<bits/stdc++.h>
#include<graphics.h>
#include <numeric> 
#include<conio.h>

using namespace std;

int main(){
    int gd=0,gm = DETECT;
    int xmid, ymid, gap = 50;
    char str[5];
    
    initgraph(&gd, &gm, NULL);
    
    xmid = getmaxx()/2;
    ymid = getmaxy()/2;

    line(0,ymid,getmaxx(),ymid);
    line(xmid,0,xmid,getmaxy());

    for(int i = xmid + gap;i < getmaxx();i = i + gap){
        outtextxy(i,ymid,"|");
        itoa(i - xmid,str,10);
        outtextxy(i,ymid + 6,str);
    }
    for(int i = xmid - gap; i > 0;i = i - gap){
        outtextxy(i,ymid,"|");
        itoa(-(xmid - i),str,10);
        outtextxy(i,ymid + 6,str);
    }
    getch();  
    closegraph();  
    return 0;  

}




//For understang purpose

/*
// iota example
#include <iostream>     // std::cout
#include <numeric>      // std::iota

using namespace std;
int main () {
  int numbers[10]= {1,2,5,8,9,7,6,4,10,11};
  int *num;
  num = numbers;
  for(int i = 0;i < 10;i++){
  cout<<*(num + i)<<" ";
  }

//   std::iota (numbers,numbers+10,100);

//   std::cout << "numbers:";
//   for (int& i:numbers) std::cout << ' ' << i;
//   std::cout << '\n';

  return 0;
}
*/
