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
		//printf("Chunk5 from the GetChunk5() function %d\n", Chunk5);
	}
	system("PAUSE");
	return Chunk5;
}

struct myret { //https://stackoverflow.com/questions/9981488/how-do-you-pass-multiple-variables-from-functions-to-main-in-c
	double Chunk1;
	double Chunk2;
	double Chunk3;
	double Chunk4;
	double Chunk5;
};

int DataPack(struct myret *Data) {
	double U1BI = 6.1, U1BV = 6.2, U1PI = 6.3; 
	//when uploading to the microcontroller these will be specified in the setup void
	//these values shown here will be inhereted from the unit later on???
	if (Data) {
		Data->Chunk1 = U1BI;
		Data->Chunk2 = U1BV;
		Data->Chunk3 = U1PI;

		printf("U1PV:");
		scanf_s("%lf", &Data->Chunk4);
		system("PAUSE");

		Data->Chunk5 = GetChunk5();
	}
	return 0;
}

int main() {
	struct myret Data;
	int DataCheck = DataPack(&Data);
	if (DataCheck == 0) {
		printf("%f\n", Data.Chunk1);
		printf("%f\n", Data.Chunk2);
		printf("%f\n", Data.Chunk3);

		double U1PV = Data.Chunk4;
		printf("%f\n", U1PV);

		printf("%f\n", Data.Chunk5);
	}
	system("PAUSE");
	return 0;
}