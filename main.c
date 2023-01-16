//tetris

#include <stdio.h>
#include <unistd.h>

int X;
int Y;
void movement(char key);
void printmap();
//void square();
//void stick();

int main() {

printmap();

while(1){
char c = _getch();                               //getch with _
//sleep(3);
movement(c);
printmap();
}


return 0;

}







int X = 1; int Y = 1; //1

void square() { //2
puts("X\nX");
}

void stick() { //3
puts("XX");
}

void printmap() { //4 map for player
for(int y = 1; y<=4; y++) {

for(int x = 1; x<=4; x++) {
char point = '.';

if(x == X && y == Y) {
char player = 'X';
point = player;
printf("%c ", point); }
else{printf("%c ", point);}}
printf("\n");}
}

void movement(char key) { //5 switch case
switch(key) {
case 'w':
Y--;
break;

case 's':
Y++;
break;

case 'a':
X--;
break;

case 'd':
X++;
break;
}

printf("\n");
}