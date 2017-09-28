#include <iostream>
#include <STSL/RJRobot.h>

using namespace std;

int main() {
    RJRobot robot;

    cout << "Robot is ready." << endl;

    robot.SetMotor(B, 200);

    for (int i = 0; i < 4; i++) {
        robot.SetMotor(A, 200);
        robot.Wait(1000ms);
        robot.SetMotor(A, -200);
        robot.Wait(1300ms);
    }

    robot.StopMotors();

    return 0;

}