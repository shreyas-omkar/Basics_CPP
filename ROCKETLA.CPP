#include <graphics.h>
#include <dos.h>
#include <conio.h>
#include <iostream.h>

char *fname[] = { "GO !!!", // DEAFULT_FONT
		  "MISSION ACCOMPLISHED!",  // TRIPLEX_FONT
		  "SMALL font", // SMALL_FONT
		  "SANS SERIF font",  // SANS_SERIF_FONT
		  "Gothic!" // GOTHIC_FONT
		};

 void main()
{

   int gdriver = DETECT, gmode;
   initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
   int i,style,midx,midy;

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;

   cout << "\n\n\n\n\n";

   cout << "W"; delay(50);
   cout << "E"; delay(50);
   cout << "L"; delay(50);
   cout << "C"; delay(50);
   cout << "O"; delay(50);
   cout << "M"; delay(50);
   cout << "E"; delay(50);

   cout << " T"; delay(50);
   cout << "O"; delay(50);

   cout << " N"; delay(50);
   cout << "A"; delay(50);
   cout << "S"; delay(50);
   cout << "A"; delay(50);


   cout << " I"; delay(50);
   cout << "N"; delay(50);
   cout << "T"; delay(50);
   cout << "E"; delay(50);
   cout << "R"; delay(50);
   cout << "N"; delay(50);
   cout << "A"; delay(50);
   cout << "T"; delay(50);
   cout << "I"; delay(50);
   cout << "O"; delay(50);
   cout << "N"; delay(50);
   cout << "A"; delay(50);
   cout << "L"; delay(50);

   cout << " S"; delay(50);
   cout << "P"; delay(50);
   cout << "A"; delay(50);
   cout << "C"; delay(50);
   cout << "E"; delay(50);

   cout << " S"; delay(50);
   cout << "T"; delay(50);
   cout << "A"; delay(50);
   cout << "T"; delay(50);
   cout << "I"; delay(50);
   cout << "O"; delay(50);
   cout << "N"; delay(50);
   cout << "."; delay(50);
   cout << "\n\n";

   delay(2000);

   cout << "T"; delay(50);
   cout << "H"; delay(50);
   cout << "I"; delay(50);
   cout << "S"; delay(50);

   cout << " I"; delay(50);
   cout << "S"; delay(50);

   cout << " G"; delay(50);
   cout << "E"; delay(50);
   cout << "O"; delay(50);
   cout << "R"; delay(50);
   cout << "G"; delay(50);
   cout << "E"; delay(50);

   cout << " K"; delay(50);
   cout << "E"; delay(50);
   cout << "N"; delay(50);
   cout << "N"; delay(50);
   cout << "E"; delay(50);
   cout << "D"; delay(50);
   cout << "Y"; delay(50);

   cout << " R"; delay(50);
   cout << "E"; delay(50);
   cout << "P"; delay(50);
   cout << "O"; delay(50);
   cout << "R"; delay(50);
   cout << "T"; delay(50);
   cout << "I"; delay(50);
   cout << "N"; delay(50);
   cout << "G"; delay(50);
   cout << "."; delay(50);
   cout << "\n\n";

   delay(2000);

   cout << "N"; delay(50);
   cout << "A"; delay(50);
   cout << "S"; delay(50);
   cout << "A"; delay(50);

   cout << " I"; delay(50);
   cout << "S"; delay(50);

   cout << " R"; delay(50);
   cout << "E"; delay(50);
   cout << "A"; delay(50);
   cout << "D"; delay(50);
   cout << "Y"; delay(50);

   cout << " T"; delay(50);
   cout << "O"; delay(50);

   cout << " T"; delay(50);
   cout << "A"; delay(50);
   cout << "K"; delay(50);
   cout << "E"; delay(50);

   cout << " O"; delay(50);
   cout << "F"; delay(50);
   cout << "F"; delay(50);

   cout << " G"; delay(50);
   cout << "K"; delay(50);

   cout << " 2"; delay(50);
   cout << "0"; delay(50);
   cout << "1"; delay(50);
   cout << "8"; delay(50);

   cout << " I"; delay(50);
   cout << "N"; delay(50);

   cout << " A"; delay(50);

   cout << " F"; delay(50);
   cout << "E"; delay(50);
   cout << "W"; delay(50);

   cout << " S"; delay(50);
   cout << "E"; delay(50);
   cout << "C"; delay(50);
   cout << "O"; delay(50);
   cout << "N"; delay(50);
   cout << "D"; delay(50);
   cout << "S"; delay(50);
   cout << "."; delay(50);

   cout << "\n\n";

   delay(2000);

   cout << "P"; delay(50);
   cout << "L"; delay(50);
   cout << "E"; delay(50);
   cout << "A"; delay(50);
   cout << "S"; delay(50);
   cout << "E"; delay(50);

   cout << " T"; delay(50);
   cout << "I"; delay(50);
   cout << "G"; delay(50);
   cout << "H"; delay(50);
   cout << "T"; delay(50);
   cout << "E"; delay(50);
   cout << "N"; delay(50);

   cout << " Y"; delay(50);
   cout << "O"; delay(50);
   cout << "U"; delay(50);
   cout << "R";

   cout << " S"; delay(50);
   cout << "E"; delay(50);
   cout << "A"; delay(50);
   cout << "T"; delay(50);

   cout << " B"; delay(50);
   cout << "E"; delay(50);
   cout << "L"; delay(50);
   cout << "T"; delay(50);
   cout << "S"; delay(50);

   cout << "!"; delay(50);
   cout << "\n\n";

   delay(2000);

   cout << "O"; delay(50);
   cout << "V"; delay(50);
   cout << "E"; delay(50);
   cout << "R"; delay(50);
   cout << "."; delay(50);

   cout << "\n\n";

   delay(2000);

   cout << "L"; delay(50);
   cout << "A"; delay(50);
   cout << "U"; delay(50);
   cout << "N"; delay(50);
   cout << "C"; delay(50);
   cout << "H"; delay(50);
   cout << "I"; delay(50);
   cout << "N"; delay(50);
   cout << "G"; delay(50);
   cout << "."; delay(50);
   cout << "."; delay(50);
   cout << "."; delay(50);
   delay(1000);

   cout << "  [3]  "; delay(1000);
   cout << "  [2]  "; delay(1000);
   cout << "  [1]  "; delay(1000);

   cleardevice();

      setcolor(LIGHTGREEN);
      settextjustify(CENTER_TEXT, CENTER_TEXT);

      style = DEFAULT_FONT;

      settextstyle(style, HORIZ_DIR, 8);
      outtextxy(midx, midy, fname[style]);
      delay(1800);

     cleardevice();

   for (i=0; i<400; i++)
  {
    setcolor(WHITE);

   line(300,300-i,350,300-i);  // upper horizon
   line(300,300-i,300,400-i);  // left vertical

   line(270,400-i,380,400-i);  // bottom horizon
   line(350,300-i,350,400-i);  // right vertical

   line(300,350-i,270,400-i);  // left slant
   line(350,350-i,380,400-i);  // right slant

   line(300,300-i,325,260-i);  // top left slant
   line(325,260-i,350,300-i);  // top right slant

   setcolor(GREEN);
   line(318,320-i,335,320-i);  // Letter G
   line(318,320-i,318,340-i);
   line(318,340-i,335,340-i);
   line(335,340-i,335,330-i);
   line(325,330-i,335,330-i);

     // LAUNCHING SMOKE
   if (i==0)
   {
     delay(1400);
    for ( int k=0; k<70; k++)
    {
     delay(100);
     setcolor(DARKGRAY);
     circle(250,400,k);
     circle(270,400,k);
     setcolor(LIGHTGRAY);
     circle(285,400,k+10);
     circle(318,400,k+30);
     circle(335,400,k+30);
     circle(370,400,k+10);
     setcolor(DARKGRAY);
     circle(390,400,k);
     circle(410,400,k);
    }
   }

   //line (250,200+i,250,280+i);
   setcolor(BLUE);

  circle(250,300+i,400-i);
  circle(250,300+i,399-i);
  circle(250,300+i,398-i);
  circle(250,300+i,397-i);
  circle(250,300+i,396-i);
  circle(250,300+i,395-i);
  circle(250,300+i,394-i);
  circle(250,300+i,393-i);
  circle(250,300+i,392-i);
  circle(250,300+i,391-i);
  circle(250,300+i,390-i);
  circle(250,300+i,389-i);
  circle(250,300+i,388-i);

   if (i%2==0)
   {

     for ( int v=10; v>=0; v--)
    {
     setcolor(YELLOW);
     circle(318,400-i,v);
     circle(335,400-i,v);
    }

    setcolor(LIGHTRED);
     circle(325,260-i,5);
     circle(325,260-i,4);
     circle(325,260-i,3);
     circle(325,260-i,2);
     circle(325,260-i,1);

   }

   else
   {
     setcolor(YELLOW);
     for ( int w=10; w>=0; w--)
    {
     circle(300,400-i,w);
     circle(325,400-i,w);
     circle(350,400-i,w);
    }
   }

   delay(5);
   cleardevice();
  }

  cleardevice();

     setcolor(LIGHTGREEN);
     settextjustify(CENTER_TEXT, CENTER_TEXT);

      style = TRIPLEX_FONT;
      cleardevice();

      settextstyle(style, HORIZ_DIR, 6);
      outtextxy(midx, midy, fname[style]);
      getch();

   /* clean up */
   closegraph();
}

