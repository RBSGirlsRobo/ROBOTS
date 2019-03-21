#include <kipr/botball.h>

int main()
{
    wait_for_light(0);
        motor(0,-1180);
    msleep (4000);
        motor(1,1008);
    msleep (3000);
        motor(0,-1220);
        motor(1,1251);
    enable_servo(0);
    enable_servo(1);
        set_servo_position(1,1569);
     motor(1,1251);
        motor(0,-1220);
      msleep (7000);
    motor (1,-921);
        motor (0,1160);
        msleep (2000);
        motor (0,888);
        msleep(4000);
        motor (0,-1220);
        motor (1,1251);
        msleep (7000);
        set_servo_position (1,552);
        set_servo_position (0,954);
        motor (0,888);
        motor(1,-921);
        msleep(3000);
        set_servo_position (1,1308);
        motor (0,-830);
        motor (1,-921);
        msleep (3000);
        motor(0,1160);
        msleep(2000);
        set_servo_position (0,1121);
        motor (0,-830);
        motor(1,960);
        msleep (2000);
        set_servo_position (0,450);
        motor (0,888);
        motor (1,-921);
        msleep (3000);
        motor (0,1160);
        msleep (3000);
        motor (0,-1220);
        motor (1,1251);
        msleep(4000);
    disable_servo(0);
    disable_servo(1);
    ao();
	shut_down_in(120);
    return 0;
}
