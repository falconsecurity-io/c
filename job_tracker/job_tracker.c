#include <stdio.h>

int main() {
    FILE *file = fopen("job_applications.csv", "a");
    // save to file in append mode

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
        //exits program
    }

    char job_title[100];
    char company_name[100];
    char recruiter_name[100];
    char salary[50];
    char status[50];
    char job_url[100];
    char resume_url[100];

    printf("Enter the following information\n");
    printf("Job Title: ");
    fgets(job_title, 100, stdin);

    printf("Company Name: ");
    fgets(company_name, 100, stdin);

    printf("Recruiter Name: ");
    fgets(recruiter_name, 100, stdin);

    printf("Salary: ");
    fgets(salary, 50, stdin);

    printf("Status: ");
    fgets(status, 50, stdin);

    printf("Job Req URL: ");
    fgets(job_url, 100, stdin);

    printf("Resume URL: ");
    fgets(resume_url, 100, stdin);

    fprintf(file, "%s,%s,%s,%s,%s,%s,%s\n", job_title, company_name, recruiter_name, salary, status, job_url, resume_url);
    // save to file
    printf("Entry saved to job_applications.csv\n");
    fclose(file);
    // close file
    return 0;
}
