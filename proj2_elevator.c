extern long (*STUB_start_elevator)(void);
extern long (*STUB_stop_elevator)(void);
extern long (*STUB_issue_request)(int p_t, int s_f, int d_f);



/*create thread if it has not been made yet, set proper states*/
long my_start_elevator(){

}
/*stop accepting new people, kill thread once done*/
long my_stop_elevator(){

}
/*add requests, dont do anything if thread isnt alive, or elivator is offline*/
long my_issue_request(int p_t, int s_f, int d_f){


}
/* first time sys call is loaded it boots up this section*/
my_module_init() {
STUB_start_elevator = my_start_elevator;
STUB_stop_elevator = my_stop_elevator;
STUB_issue_request = my_issue_request;

return 0;
}
/* once we exit the system call it calls this */
my_module_exit(){

STUB_start_elevator = NULL;
STUB_stop_elevator = NULL;
STUB_issue_request = NULL;

return 0;
}


/*can write the code for the elivator down here */
