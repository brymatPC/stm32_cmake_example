#include "AppInterface.h"
#include "YRShell.h"

#include "main.h"

void initializeApp() {

}

void updateApp() {
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
    HAL_Delay(500);
}