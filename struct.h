typedef struct employee_tag{
    int employeeNumber;
    char eFirstName[100];
    char eLastName[100];
    int age;
    int month;
    int day;
    int year;
    struct employee_tag *next;
} EMPLOYEE;

typedef struct appointment_tag{
    int appointmentID;
    int month;
    int day;
    int year;
    int hour;
    int mins;
    EMPLOYEE *employee;
    struct appointment_tag *next;
} APPOINTMENT;

typedef struct position_tag{
    char position[100];
    EMPLOYEE *employee;
    struct position_tag *next;
} POSITION;