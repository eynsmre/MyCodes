#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct weapons
{
	char wName[30];
	int wPower;
	
}Weapons;

typedef struct playerInfo
{
	char name[30];
	int posX;
	int posY;
	int health;
	Weapons gun;
}player;

int power(int n1,int n2);
int euclideanDistance(player p1, player p2);
void shoot(player p1, player p2);

int main()
{
	
	player p1;
	player p2;
	
	strcpy(p1.name,"ADAMA");
	p1.posX=5;
	p1.posY=5;
	p1.health=100;
	strcpy(p1.gun.wName,"M4A1-S");
	p1.gun.wPower=70;
	
	strcpy(p2.name,"EMRE");
	p2.posX=2;
	p2.posY=1;
	p2.health=100;
	strcpy(p2.gun.wName,"MP4");
	p2.gun.wPower=40;
	

	shoot(p1, p2);
	//printf("%d",power(3,3));
	//printf("%d",euclideanDistance(p1,p2));
	return 0;
}

int power(int n1,int n2)
{
	if(n2==0)
		return 0;
	else if(n2==1)
		return n1;
	else
		return n1*power(n1,n2-1);
	
}

int euclideanDistance(player p1, player p2)
{
	float distance =sqrt(power(p2.posX-p1.posX,2)
						+power(p2.posY-p1.posY,2));
		
		return distance;
}

void shoot(player p1,player p2)
{
	
	int dmg= p1.gun.wPower/euclideanDistance(p1,p2);
	
	printf("%s dealt to %s %d damage, %s has %d health..", p1, p2, dmg, p2, p2.health-dmg);
	
}
