#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(){
FILE *file;
file = fopen("Measles_Data.csv","r");
if (file == NULL)
{
    printf("Sorry...File is not found. Try again!\n\n");

return 1;}
printf("File opened!\n\n");

char l[300];

    char d[20];
    char division[30];
    char age[20];

    int confirmed_case;
    int divisionwise_cc;
    int fatalities;
    int divisionwise_f;
    char div[8][18]= {"Dhaka","Chittagong","Rajshahi","Khulna","Barishal","Sylhet","Rangpur","Mymensingh"};
    int div_cases[8] = {0};
    int div_f[8] = {0};
    int age_cc[3] = {0};
    int age_f[3] = {0};

fgets(l,sizeof(l),file);

while (fgets(l,sizeof(l),file)!=NULL)

{    char *a;

        a = strtok(l, ",");
        strcpy(d, a);

        a = strtok(NULL, ",");
        strcpy(division, a);

        a = strtok(NULL, ",");
        strcpy(age, a);

        a = strtok(NULL, ",");
        confirmed_case = atoi(a);

        a = strtok(NULL, ",");
        divisionwise_cc = atoi(a);

        a = strtok(NULL, ",");
        fatalities = atoi(a);

        a = strtok(NULL, ",");
        divisionwise_f = atoi(a);

        if (strcmp(age, "<5 years") == 0)
{
    age_cc[0] = age_cc[0] + confirmed_case;
    age_f[0] = age_f[0] + fatalities;
}

else if (strcmp(age, "5-15 years") == 0)
{
    age_cc[1] = age_cc[1] + confirmed_case;
    age_f[1] = age_f[1] + fatalities;
}

else if (strcmp(age, "15+ years") == 0)
{
    age_cc[2] = age_cc[2] + confirmed_case;
    age_f[2] = age_f[2] + fatalities;
}
        int i;

for (i = 0; i < 8; i++)
{
    if (strcmp(division, div[i]) == 0)
    {
        div_cases[i] = divisionwise_cc;
        div_f[i] = divisionwise_f;    }
}


    printf("----------------------------------------\n");
        printf("Date: %s\n", d);
        printf("Division: %s\n", division);
        printf("Age Group: %s\n", age);
        printf("Confirmed Case: %d\n", confirmed_case);
        //printf("Divisionwise Total Confirmed Case: %d\n", divisionwise_confirmed_case);
        printf("Fatalities: %d\n", fatalities);
       // printf("Divisionwise Fatalities: %d\n", divisionwise_fatalities);
        printf("----------------------------------------\n\n");
}




// NATIONAL TOTAL

int national_cc = 0;
int national_f = 0;

for (int i = 0; i < 8; i++)
{
    national_cc = national_cc + div_cases[i];
    national_f = national_f + div_f[i];
}

printf("\nNational Total Confirmed Cases: %d\n", national_cc);
printf("National Total Fatalities: %d\n", national_f);
float national_cfr = ((float)national_f / national_cc) * 100;

printf("National CFR: %.2f%%\n", national_cfr);









// DIVISION WISE


// Division-wise total Confirmed Cases

printf("\nDivision-wise total Confirmed Cases:\n");

for (int i = 0; i < 8; i++)
{
    printf("%s: %d\n", div[i], div_cases[i]);
}


// Division-wise Confirmed Cases: Highest to Lowest

int sorted_cases[8];

char div_case[8][18];

for (int i = 0; i < 8; i++)
{
    sorted_cases[i] = div_cases[i];
    strcpy(div_case[i], div[i]);
}

int temp1;

printf("\n\nDivision wise highest to lowest confirmed cases-\n");

for (int i = 0; i < 7; i++)
{
    for (int j = 0; j < 7 - i; j++)
    {
        if (sorted_cases[j] < sorted_cases[j + 1])
        {
            temp1 = sorted_cases[j];
            sorted_cases[j] = sorted_cases[j + 1];
            sorted_cases[j + 1] = temp1;

            char temp_div_case[18];

            strcpy(temp_div_case, div_case[j]);
            strcpy(div_case[j], div_case[j + 1]);
            strcpy(div_case[j + 1], temp_div_case);
        }
    }
}

for (int i = 0; i < 8; i++)
{
    printf("%s : %d\n", div_case[i], sorted_cases[i]);
}


// Division-wise total Fatalities

printf("\n\nDivision-wise total Fatalities:\n");

for (int i = 0; i < 8; i++)
{
    printf("%s: %d\n", div[i], div_f[i]);
}


// Division-wise Fatalities: Highest to Lowest

int sorted_fatalities[8];

char div_fatality[8][18];

for (int i = 0; i < 8; i++)
{
    sorted_fatalities[i] = div_f[i];
    strcpy(div_fatality[i], div[i]);
}

int temp2;

printf("\n\nDivision wise highest to lowest fatalities-\n");

for (int i = 0; i < 7; i++)
{
    for (int j = 0; j < 7 - i; j++)
    {
        if (sorted_fatalities[j] < sorted_fatalities[j + 1])
        {
            temp2 = sorted_fatalities[j];
            sorted_fatalities[j] = sorted_fatalities[j + 1];
            sorted_fatalities[j + 1] = temp2;

            char temp_div_fatality[18];

            strcpy(temp_div_fatality, div_fatality[j]);
            strcpy(div_fatality[j], div_fatality[j + 1]);
            strcpy(div_fatality[j + 1], temp_div_fatality);
        }
    }
}

for (int i = 0; i < 8; i++)
{
    printf("%s : %d\n", div_fatality[i], sorted_fatalities[i]);
}


// Division-wise CFR

printf("\n\nDivision-wise Case Fatality Rate (CFR):\n");

for (int i = 0; i < 8; i++)
{
    float cfr = ((float)div_f[i] / div_cases[i]) * 100;

    printf("%s : %.2f%%\n", div[i], cfr);
}



// AGE WISE


// Age-wise total Confirmed Cases

printf("\nAge-wise total Confirmed Cases:\n");

printf("Less than 5 years: %d\n", age_cc[0]);
printf("5-15 years: %d\n", age_cc[1]);
printf("More than 15 years: %d\n", age_cc[2]);


// Age-wise Confirmed Cases: Highest to Lowest

int sorted_age_cc[3];

char age_group[3][15] = {
    "<5 years",
    "5-15 years",
    "15+ years"
};

for (int i = 0; i < 3; i++)
{
    sorted_age_cc[i] = age_cc[i];
}

int temp_age;

printf("\n\nAge-wise highest to lowest  confirmed cases-\n");

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2 - i; j++)
    {
        if (sorted_age_cc[j] < sorted_age_cc[j + 1])
        {
            temp_age = sorted_age_cc[j];
            sorted_age_cc[j] = sorted_age_cc[j + 1];
            sorted_age_cc[j + 1] = temp_age;

            char tempage[15];

            strcpy(tempage, age_group[j]);
            strcpy(age_group[j], age_group[j + 1]);
            strcpy(age_group[j + 1], tempage);
        }
    }
}

for (int i = 0; i < 3; i++)
{
    printf("%s : %d\n", age_group[i], sorted_age_cc[i]);
}


// Age-wise total Fatalities

printf("\nAge-wise total Fatalities:\n");

printf("Less than 5 years: %d\n", age_f[0]);
printf("5-15 years: %d\n", age_f[1]);
printf("More than 15 years: %d\n", age_f[2]);


// Age-wise Fatalities: Highest to Lowest

int sorted_age_f[3];

char age_f_group[3][15] = {
    "<5 years",
    "5-15 years",
    "15+ years"
};

for (int i = 0; i < 3; i++)
{
    sorted_age_f[i] = age_f[i];
}

int temp_age_f;

printf("\n\nAge-wise highest to lowest  fatalities-\n");

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2 - i; j++)
    {
        if (sorted_age_f[j] < sorted_age_f[j + 1])
        {
            temp_age_f = sorted_age_f[j];
            sorted_age_f[j] = sorted_age_f[j + 1];
            sorted_age_f[j + 1] = temp_age_f;

            char tempage_f[15];

            strcpy(tempage_f, age_f_group[j]);
            strcpy(age_f_group[j], age_f_group[j + 1]);
            strcpy(age_f_group[j + 1], tempage_f);
        }
    }
}

for (int i = 0; i < 3; i++)
{
    printf("%s : %d\n", age_f_group[i], sorted_age_f[i]);
}

// Age-wise CFR

char original_age_group[3][15] = {
    "<5 years",
    "5-15 years",
    "15+ years"
};

printf("\n\nAge-wise Case Fatality Rate (CFR):\n");

for (int i = 0; i < 3; i++)
{
    float cfr = ((float)age_f[i] / age_cc[i]) * 100;

    printf("%s : %.2f%%\n", original_age_group[i], cfr);
}

fclose(file);
return 0;
}
