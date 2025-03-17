#include <stdio.h>
#include <stdlib.h>

struct candidateInfo{
	char* name;
	char* lastName;
	int age;
	int note;
	float average;
};

struct interview{
	char* interviewer;
	char* interviewDate;
	struct candidateInfo candidate;
	int interviewNote;
};

int main() {
	
	struct interview y;
	y.interviewer = "Ahmet Yilmaz";
	y.interviewDate = "25.03.2025";
	y.interviewNote = 91;
	
	y.candidate.name = "Mehmet";
	y.candidate.lastName = "Colak";
	y.candidate.age = 32;
	y.candidate.note = 80;
	y.candidate.average = 3.17;
	
	printf("Interviewer: %s\n", y.interviewer);
	printf("Interview Date: %s\n", y.interviewDate);
	printf("Interview Score: %d\n\n", y.interviewNote);
	
	printf("--------------------\n\n");
	
	printf("Candidate Name: %s\n", y.candidate.name);
	printf("Candidate Last Name: %s\n", y.candidate.lastName);
	printf("Candidate Age: %d\n", y.candidate.age);
	printf("Candidate Note: %d\n", y.candidate.note);
	printf("Candidate Average Score: %.2f", y.candidate.average);
	
	return 0;
}
