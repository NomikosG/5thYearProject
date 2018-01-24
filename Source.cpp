#include <stdio.h> //printf()
#include <math.h> //pow()
#include <iostream> //system("PAUSE")

/*void setup() {
	double Chunk1, Chunk2, Chunk3, Chunk4, Chunk5;
}*/

int GetChunk5()
{
	int SetChunk5[] = { 0,0,0,0,0,0,0,0 };
	int Chunk5 = 0;
	int i;//for the actual code may have to change this to unchar var to save memory space
	int state, error, command;
	/*when needing to add the bits that come from the GUI add three vars in the function decleration
	inside the parenthesis. these global vars will give values to the local vars!*/
	state = 1;
	error = 0;
	command = 10;
	if (state == 1) { SetChunk5[1] = 1; }
	else if (state == 0) { SetChunk5[1] = 0; }
	else { SetChunk5[0] = 1; SetChunk5[1] = 1; }
	if (error == 1) { SetChunk5[3] = 1; }
	if (command == 10) { SetChunk5[6] = 1; SetChunk5[7] = 0; }
	else if (command = 11) { SetChunk5[6] = 1; SetChunk5[7] = 1; }
	else { SetChunk5[6] = 0; SetChunk5[7] = 0; }
	for (i = 0; i <= 7; i++) {
		Chunk5 += SetChunk5[i] * pow(2, i);
		//int c = pow(2, i);
		printf("%d\n", Chunk5);
	}
	system("PAUSE");
	return Chunk5;
}

int main() {
	double Chunk1=0.0, Chunk2 = 0.0, Chunk3 = 0.0, Chunk4 = 0.0, Chunk5 = 0.0;
	//when uploading to the microcontroller these will be specified in the setup void

	Chunk5 = GetChunk5();//store int to double so that all chunks have the same size

	//these values shown here will be inhereted from the unit later on
	/*double x = 2.65;
	printf("%f\n", x);
	printf("%d\n", sizeof(x));
	system("PAUSE");*/
	printf("U1BI:");
	scanf_s("%ld", &Chunk1);
	//printf("%d\n", sizeof(Chunk1));

	printf("U1BV:");
	scanf_s("%ld", &Chunk2);

	printf("U2BI:");
	scanf_s("%ld", &Chunk3);

	printf("U2BV:");
	scanf_s("%ld", &Chunk4);

	system("PAUSE");
	return 0;
}