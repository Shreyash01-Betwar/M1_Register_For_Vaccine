#ifndef REGIST_C
#define REGIST_C

 
int regStat(long pd ); // Now in header file we need to declare…
int existregist();
int vacineStat(int );


typedef struct patient{
    int age;
    long aadhar;
    int ph_number;
    int secret_code;
    int vaccine_type;
    int vaccine_doses;
}patient_details;

patient_details pd[1000];

#endif
