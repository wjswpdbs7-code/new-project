#include <stdio.h>
#include "pico/stdlib.h"
int main() {
    stdio_init_all();
    while (true) {
        printf("Hello, Pico!\n");
        sleep_ms(1000);
    }
}

//이 코드는 Raspberry Pi Pico 보드에서 실행되는 간단한 C 프로그램입니다. 
//프로그램은 무한 루프를 사용하여 매초마다 "Hello, Pico!"라는 메시지를 출력합니다.
//출력되는 위치는 보드에 연결된 시리얼 모니터입니다.
//시리얼 모니터 연결확인하려면 보드가 컴퓨터에 연결되어 있고, 시리얼 모니터가 올바르게 설정되어 있는지 확인해야 합니다
//보드의 포트 이름은 운영체제에 따라 다를 수 있습니다. 예를 들어, Windows에서는 COM 포트로 나타날 수 있고, Linux나 macOS에서는 /dev/ttyUSB0 또는 /dev/ttyACM0와 같은 이름으로 나타날 수 있습니다.
//보트의 포트 이름을 확인하려면 다음과 같은 방법을 사용할 수 있습니다:
//1. Windows: 장치 관리자에서 "포트 (COM & LPT)" 섹션을 확인하여 Raspberry Pi Pico가 연결된 COM 포트를 찾습니다.
//2. Linux: 터미널에서 `ls /dev/tty*` 명령을 실행하여 연결된 시리얼 장치를 확인합니다. Raspberry Pi Pico는 일반적으로 /dev/ttyUSB0 또는 /dev/ttyACM0로 나타납니다.
/dev/tty    /dev/tty13  /dev/tty19  /dev/tty24  /dev/tty3   /dev/tty35  /dev/tty40  /dev/tty46  /dev/tty51  /dev/tty57  /dev/tty62  /dev/ttyS1  /dev/ttyS7
/dev/tty0   /dev/tty14  /dev/tty2   /dev/tty25  /dev/tty30  /dev/tty36  /dev/tty41  /dev/tty47  /dev/tty52  /dev/tty58  /dev/tty63  /dev/ttyS2
/dev/tty1   /dev/tty15  /dev/tty20  /dev/tty26  /dev/tty31  /dev/tty37  /dev/tty42  /dev/tty48  /dev/tty53  /dev/tty59  /dev/tty7   /dev/ttyS3
/dev/tty10  /dev/tty16  /dev/tty21  /dev/tty27  /dev/tty32  /dev/tty38  /dev/tty43  /dev/tty49  /dev/tty54  /dev/tty6   /dev/tty8   /dev/ttyS4
/dev/tty11  /dev/tty17  /dev/tty22  /dev/tty28  /dev/tty33  /dev/tty39  /dev/tty44  /dev/tty5   /dev/tty55  /dev/tty60  /dev/tty9   /dev/ttyS5
/dev/tty12  /dev/tty18  /dev/tty23  /dev/tty29  /dev/tty34  /dev/tty4   /dev/tty45  /dev/tty50  /dev/tty56  /dev/tty61  /dev/ttyS0  /dev/ttyS6
//위의 목록에서 Raspberry Pi Pico가 연결된 포트가 어떤것 인지 확인해야 합니다. 일반적으로 Raspberry Pi Pico는 /dev/ttyACM0 또는 /dev/ttyUSB0로 나타납니다.
//