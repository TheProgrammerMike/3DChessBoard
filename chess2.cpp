/*
Michael Bekesz
CS102 001
Dr. Devi
101007
Prog101007-HW
HW4 chess2
*/

#include <stdio.h>
#include "MSGA3D.h"

int main (void)
{
//Startup
	MSGAEngine3D xx(800,800,32);
	xx.NodeLoadCameraFPS(999);
	xx.TextureLoad(998, "black.jpg"); //2x2 pixel jpg<1kb Space saving design =D 	
	
	int row=0, col=0, posx=0, posy=0;
	
	for(int i=0;i<=63;i++)
	{
		xx.NodeLoadCube(i,200);
		row=i/8;
		col=i%8;
		posx=col*200;
		posy=row*200;
		xx.NodeSetPosition(i,posx,posy,0);	// Standing up is easier to look at

//		xx.NodeSetPosition(i,posx,0,posy);  // For a bird eye view
		if((row+col)%2)
			xx.NodeSetTexture(i,998);
	
/* the below output highly eratic #'s any reason why?		
	printf("i= %d \n",&i);
	printf("posx= %d \n",&posx);
	printf("posy= %d \n",&posy);
	printf("row= %d \n",&row);
	printf("col= %d \n",&col);
	
*/
	
	}
	xx.GameLoop();
	return 0;
}
