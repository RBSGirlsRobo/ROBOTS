#include <kipr/botball.h>

int main()
{
    wait_for_light (0);
    create_connect();
    create_drive_direct (200,200);         //drive towards the water tank
    get_create_total_angle (90);          // turn towards the tank
    set_create_total_angle (90);
    msleep (2000);
    
    enable_servos ();
        set_servo_position (0,950);            // base down
        set_servo_position (2,1277);          // mid.s down
        set_servo_position (1,0);            // claw opens
        set_servo_position (1,102);       // claw closes
        set_servo_position (2,2047);      // mid.s up
        set_servo_position (0,730);      //base up
    
    create_drive_direct (200,200);
    get_create_total_angle (90);
    set_create_total_angle (90);
    msleep (5000);
       
        set_servo_position (1,0);           // claw opens 
    disable_servos ();
      
      create_drive_direct (-200,-200);
     
   enable_servos ();
    set_servo_position (2,1657);          //mid.s down a bit
    set_servo_position (1,0);            //claw open
    set_servo_position (1,102);          // claw closes
     
        create_drive_direct (200,200);         //walks
        get_create_total_angle (90);          //turns
        set_create_total_angle (90);
        msleep (4000);
    
    set_servo_position (2,1257);  //mid.s dowm      
    set_servo_position (1,0);     // claw opens
    set_servo_position (2,1657);  // mid.s up
   disable_servos ();
     
    create_stop();
    shut_down_in (120);
    
    
    
    

    
    
    
   
     
    
    
        
    return 0;
}
