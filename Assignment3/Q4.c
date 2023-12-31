#include <stdio.h>
#include <string.h>
int i;

struct worker {
    int id;
    char firstname[50];
    char lastname[50];
    int salary;
    char joiningdate[50];
    char department[50];
};

struct worker workers[] = {
    {001, "Monika", "Arora", 100000, "2014-02-20 09:00:00", "HR"},
    {002, "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
    {003, "Vishal", "Verma", 300000, "2014-02-20 09:00:00", "HR"},
    {004, "Amitabh", "Singh", 500000, "2014-02-20 09:00:00", "Admin"},
    {005, "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
    {006, "Vipul", "Dewan", 200000, "2014-06-11 09:00:00", "Account"},
    {007, "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Account"},
    {8, "Geetika", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"}
};

void maxsalary(int numworker) {
    int maxsalary[3] = {0};

    for ( i = 0; i < numworker; i++) {
        if (workers[i].salary > maxsalary[0] && strcmp(workers[i].department, "HR") == 0) {
            maxsalary[0] = workers[i].salary;
        } else if (workers[i].salary > maxsalary[1] && strcmp(workers[i].department, "Admin") == 0) {
            maxsalary[1] = workers[i].salary;
        } else if (workers[i].salary > maxsalary[2] && strcmp(workers[i].department, "Account") == 0) {
            maxsalary[2] = workers[i].salary;
        }
    }

    printf("\tDetails of workers with maximum salary for each department:\n");
    printf("\n");

    for ( i = 0; i < numworker; i++) {
        if (workers[i].salary == maxsalary[0] && strcmp(workers[i].department, "HR") == 0) {
            printf("00%d %s %s %d %s %s\n\n", workers[i].id, workers[i].firstname, workers[i].lastname, workers[i].salary, workers[i].joiningdate, workers[i].department);
        } else if (workers[i].salary == maxsalary[1] && strcmp(workers[i].department, "Admin") == 0) {
            printf("00%d %s %s %d %s %s\n\n", workers[i].id, workers[i].firstname, workers[i].lastname, workers[i].salary, workers[i].joiningdate, workers[i].department);
        } else if (workers[i].salary == maxsalary[2] && strcmp(workers[i].department, "Account") == 0) {
            printf("00%d %s %s %d %s %s\n\n", workers[i].id, workers[i].firstname, workers[i].lastname, workers[i].salary, workers[i].joiningdate, workers[i].department);
        }
    }

    printf("\n\n");
}
void totalsalary(int numworker){
	int totalsalary[3]={0,0,0};
	for(i=0;i<numworker;i++){
		if(strcmp(workers[i].department,"HR")==0){
			totalsalary[0]+=workers[i].salary;
		}
		else if(strcmp(workers[i].department,"Admin")==0){
			totalsalary[01]+=workers[i].salary;
		}
		else if(strcmp(workers[i].department,"Account")==0){
			totalsalary[2]+=workers[i].salary;
		}
	}
    printf("Departments along with total salaries:\n\n");
    printf("\tHR - %d\n", totalsalary[0]);
    printf("\tAdmin - %d\n", totalsalary[1]);
    printf("\tAccount - %d\n", totalsalary[2]);
}

int main() {
	printf("Programmer: Hafsa Rashid\nID: 23K-0064");
    int numworker = sizeof(workers) / sizeof(workers[0]);
    maxsalary(numworker);
    totalsalary(numworker);

    return 0;
}
