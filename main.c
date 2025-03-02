#include <stdio.h>

// 模拟获取温度值的函数
float getTemperature() {
    // 这里简单返回一个固定值，实际应用中应从传感器读取
    return 25.0; 
}

int main() {
    float temperature = getTemperature();
    printf("当前采集到的温度值为: %.2f 摄氏度\n", temperature);
    return 0;
}
