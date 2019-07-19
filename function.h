void menu(int *choice){

    //main menu of the program
    printf("\n~~~~~~~EMPLOYEE && APPOINTMENT SYSTEM~~~~~~~\n");
    printf("[1] ADD EMPLOYEE\n");
    printf("[2] EDIT EMPLOYEE\n");
    printf("[3] DELETE EMPLOYEE\n");
    printf("[4] VIEW EMPLOYEE\n");
    printf("[5] ADD APPOINTMENT\n");
    printf("[6] EDIT APPOINTMENT\n");
    printf("[7] DELETE APPOINTMENT\n");
    printf("[8] EXIT\n");
    printf("What do you want to do?:\t");
    scanf("%d", choice);
}

POSITION *createPosition(char position[100]){
    POSITION *new_node = (POSITION*)malloc(sizeof(POSITION));

    //creates a new node 
    strcpy(new_node->position, position);
    new_node->employee = NULL;
    new_node->next = NULL;

    return new_node;
}

POSITION *addPosition(){
    POSITION *create;
    POSITION *Positionlist=NULL;

    //adds the new node to the main linked list
    create = createPosition("Aesthician");
    Positionlist = create;

    create->next = createPosition("Hair Stylist");
    create = create->next;

    create->next = createPosition("Massage Therapist");
    create = create->next;

    create->next = createPosition("Nail Technician");
    create = create->next;

    create->next = createPosition("Sales Services Attendant");
    create = create->next;

    create->next = createPosition("Spa Attendant");
    create = create->next;

    create->next = createPosition("Spa Management");
    create = create->next;

    create->next = createPosition("Spa Receptionist");
    create->next->next = NULL;

    return Positionlist;
}

// void addToPosition(){

// }


// void positionPicker(POSITION *list, char category[100]){
//     POSITION *crawler = list;
//     int i=1;

    
// }

void addEmployee(POSITION **list, int *count){
    int i=1;
    int category;
    POSITION (*crawler) = (*list);
    EMPLOYEE *new_node;
    
    // asks the user info about the employees
    count += 1;
    new_node->employeeNumber = *count;
    printf("\nEnter First Name:\t");
    getchar();
    scanf("%s", new_node->eFirstName);
    printf("Enter Last Name:\t");
    getchar();
    scanf("%s", new_node->eLastName);
    printf("Enter Age:\t");
    scanf("%d", &(new_node)->age);
    printf("Enter Month:\t");
    scanf("%d", &(new_node)->month);
    printf("Enter Day:\t");
    scanf("%d", &(new_node)->day);
    printf("Enter Year:\t");
    scanf("%d", &(new_node)->year);
    new_node->next = NULL;

    // adding the people to specific linked list
    printf("\nWhich position to add Employee to?\n");
    while(crawler!=NULL){
        printf("[%d] %s\n", i, crawler->position);
        crawler = crawler->next;
        i++;
    }
    printf("Choice:\t");
    scanf("%d", &(category));
    // addToPosition();
}

void viewMenu(POSITION *list){
    int choice;

    printf("View?:\n");
    printf("[1] A Specific Employee\n");
    printf("[2] All Employees\n");
    printf("[3] By Position\n")
    printf("Choice:\t");
    scanf("%d", &choice);

    // if(choice == 1){

    // }
    // if(choice == 3){
    //     viewByPosition(&);
    // }

}